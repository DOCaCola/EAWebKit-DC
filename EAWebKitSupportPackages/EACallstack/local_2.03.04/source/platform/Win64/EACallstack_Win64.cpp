///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
///////////////////////////////////////////////////////////////////////////////

#include <EACallstack/internal/Intrin.h>
#include <EACallstack/EACallstack.h>
#include <EACallstack/Context.h>
#include <EAAssert/eaassert.h>
#include <eathread/eathread.h>

#include <stdio.h>
#include <string.h>

#if defined(EA_PLATFORM_MICROSOFT)

	EA_DISABLE_ALL_VC_WARNINGS();

	#include <Windows.h>
	#include <math.h>
	#include <intrin.h>

	#if EA_WINAPI_FAMILY_PARTITION(EA_WINAPI_PARTITION_DESKTOP)

		#include <winternl.h>

	#else

		/* Assume all 64bit NT Platforms have these functions even if they are not declared in the headers */

		extern "C" NTSYSAPI PEXCEPTION_ROUTINE NTAPI RtlVirtualUnwind(DWORD, DWORD64, DWORD64, PRUNTIME_FUNCTION,
																	  PCONTEXT, PVOID*, PDWORD64, PKNONVOLATILE_CONTEXT_POINTERS);
		extern "C" WINBASEAPI DWORD WINAPI GetModuleFileNameA(HMODULE, LPSTR, DWORD);

	#endif

	EA_RESTORE_ALL_VC_WARNINGS();

#endif

namespace EA
{
namespace Callstack
{

///////////////////////////////////////////////////////////////////////////////
// InitCallstack
//
EACALLSTACK_API void InitCallstack()
{
}


///////////////////////////////////////////////////////////////////////////////
// ShutdownCallstack
//
EACALLSTACK_API void ShutdownCallstack()
{
}


///////////////////////////////////////////////////////////////////////////////
// GetCallstack
//
// With the x64 (a.k.a. x86-64) platform, the CPU supports call stack tracing
// natively, by design. This is as opposed to the x86 platform, in which call
// stack tracing (a.k.a. unwinding) is a crap-shoot. The Win64 OS provides
// two functions in particular that take care of the primary work of stack
// tracing: RtlLookupFunctionEntry and RtlVirtualUnwind/RtlUnwindEx.
// NOTE(mwinkler): StackWalk64() is a wrapper around the Rtl family of functions
//                 on x64
//
//                 x64 Calling Convention on Windows does not guarantee that RBP is
//                 always used as a frame pointer
//
// On x64 each non-leaf function must have an info struct (unwind metadata) in
// static memory associated with it. That info struct describes the prologue and
// epilogue of the function in such a way as tell identify where its return address
// is stored and how to restore non-volatile registers of the caller so that
// an unwind can happen during an exception and C++ object destructors can
// be called, etc. In order to implement a stack unwinding function for
// Microsoft x64, you can go the old x86 route of requiring the compiler to
// emit stack frames and reading the stack frame values. But that would work
// only where the frames were enabled (maybe just debug builds) and wouldn't
// work with third party code that didn't use the frames. But the Microsoft
// x64 ABI -requires- that all non-leaf functions have the info struct
// described above. And Microsoft provides the Rtl functions mentioned above
// to read the info struct (RtlLookupFunctionEntry) and use it to unwind a
// frame (RtlVirtualUnwind/RtlUnwindEx), whether you are in an exception or not.
//
// RtlVirtualUnwind implements a virtual (pretend) unwind of a stack and is
// useful for reading a call stack and its unwind info without necessarily
// executing an unwind (like in an exception handler). RtlVirtualUnwind provides
// the infrastructure upon which higher level exception and unwind handling
// support is implemented. It doesn't exist on x86, as x86 exception unwinding
// is entirely done by generated C++ code and isn't in the ABI. The Virtual in
// RtlVirtualUnwind has nothing to do with virtual memory, virtual functions,
// or virual disks.
//
// RtlUnwindEx (replaces RtlUnwind) implements an actual unwind and thus is
// mostly useful only in the implementation of an exception handler and not
// for doing an ad-hoc stack trace.
//
// You can't use RtlLookupFunctionEntry on the IP (instruction pointer) of a
// leaf function, as the compiler isn't guaranteed to generate this info for
// such functions. But if a leaf function calls RtlLookupFunctionEntry on its
// own IP then it's no longer a leaf function and by virtue of calling RtlLookupFunctionEntry
// the info will necessarily be generated by the compiler. If you want to read
// the info associated with an IP of another function which may be a leaf
// function, it's best to read the return address associated with that
// function's callstack context, which is that that function's rsp register's
// value as a uintptr_t* dereferenced (i.e. rsp holds the address of the
// return address).
//
// UNWIND_HISTORY_TABLE "is used as a cache to speed up repeated exception handling lookups,
// and is typically optional as far as usage with RtlUnwindEx goes though certainly
// recommended from a performance perspective." This may be useful to us, though we'd need
// to make it a thread-safe static variable or similar and not a local variable.
// History table declaration and preparation for use, which needs to be done per-thread:
//     UNWIND_HISTORY_TABLE unwindHistoryTable;
//     RtlZeroMemory(&unwindHistoryTable, sizeof(UNWIND_HISTORY_TABLE));
//     unwindHistoryTable.Unwind = TRUE;
//
// Reading for anybody wanting to understand this:
//     http://www.nynaeve.net/?p=105
//     http://www.nynaeve.net/?p=106
//     http://blogs.msdn.com/b/freik/archive/2005/03/17/398200.aspx
//     http://www.codemachine.com/article_x64deepdive.html
//     http://blogs.msdn.com/b/ntdebugging/archive/2010/05/12/x64-manual-stack-reconstruction-and-stack-walking.aspx
//     http://eli.thegreenplace.net/2011/09/06/stack-frame-layout-on-x86-64/
//
EACALLSTACK_API EA_NO_INLINE size_t GetCallstack(void** pReturnAddressArray, size_t nReturnAddressArrayCapacity, const CallstackContext* pContext)
{
#if defined(EA_PROCESSOR_ARM)
	return 0;
#else
	CONTEXT           context;
	PRUNTIME_FUNCTION pRuntimeFunction;
	ULONG64           nImageBase = 0;
	ULONG64           nPrevImageBase = 0;
	size_t            nFrameIndex = 0;

	RtlZeroMemory(&context, sizeof(context));

	if (pContext)
	{
		context.Rip          = pContext->mRIP;
		context.Rsp          = pContext->mRSP;
		context.Rbp          = pContext->mRBP;
		context.ContextFlags = CONTEXT_CONTROL;

		/**
		 * In the case where we are calling 0, we might be able to unwind one frame and see if we are now in a valid stack frame for
		 * callstack generation. If not abort, otherwise we continue one frame past where the exception (calling 0) was performed
		 */
		if (context.Rip == 0 && context.Rsp != 0)
		{
			context.Rip = (ULONG64)(*(PULONG64)context.Rsp);
			context.Rsp += 8; // reset the stack pointer (+8 since we know there has been no prologue run requiring a larger number since RIP == 0)
		}

		// See the RtlVirtualUnwind() note below
		if (context.Rip && (nFrameIndex < nReturnAddressArrayCapacity))
		{
			pReturnAddressArray[nFrameIndex++] = ((void*)(uintptr_t)context.Rip);
		}
	}
	else
	{
		#if EA_WINAPI_FAMILY_PARTITION(EA_WINAPI_PARTITION_DESKTOP)

			context.ContextFlags = CONTEXT_CONTROL | CONTEXT_INTEGER;
			RtlCaptureContext(&context);

		#elif defined(EA_PLATFORM_XBOXONE)

			size_t ret = (size_t)RtlCaptureStackBackTrace(1, (ULONG)(nReturnAddressArrayCapacity - 1), pReturnAddressArray, NULL);
			pReturnAddressArray[ret] = nullptr;
			return ret;

		#else

			void* ip = nullptr;
			GetInstructionPointer(ip);

			void* sp = nullptr;
			Detail::GetStackPointer(sp);

			context.Rip          = ((uintptr_t)ip);
			context.Rsp          = ((uintptr_t)sp);
			context.Rbp          = 0;
			context.ContextFlags = CONTEXT_CONTROL;

		#endif
	}

	/**
	 * The following loop intentionally skips the first call stack frame because
	 * that frame corresponds this function, GetCallstack().
	 */
	while (context.Rip && (nFrameIndex < (nReturnAddressArrayCapacity - 1)))
	{
		nPrevImageBase = nImageBase;

		__try
		{
			pRuntimeFunction = (PRUNTIME_FUNCTION)RtlLookupFunctionEntry(context.Rip, &nImageBase, NULL /*&unwindHistoryTable*/);
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			/**
			 * Something went wrong in RtlLookupFunctionEntry, and it is unknown
			 * if it is recoverable; so just get out.
			 */
			return nFrameIndex;
		}

		if (pRuntimeFunction)
		{
			// RtlVirtualUnwind is not declared in the SDK headers for non-desktop apps,
			// but for 64 bit targets it's always present and appears to be needed by the
			// existing RtlUnwindEx function. If in the end we can't use RtlVirtualUnwind
			// and Microsoft doesn't provide an alternative, we can implement RtlVirtualUnwind
			// ourselves manually (not trivial, but has the best results) or we can use
			// the old style stack frame following, which works only when stack frames are
			// enabled in the build, which usually isn't so for optimized builds and for
			// third party code.
			// NOTE(mwinkler): RtlVirtualUnwind retrieves the invocation context of the function that precedes the specified function context.

			__try // Under at least the XBox One platform, RtlVirtualUnwind can crash here. It may possibly be due to the context being incomplete.
			{
				VOID*          handlerData = NULL;
				ULONG64        establisherFramePointers[2] = { 0, 0 };
				RtlVirtualUnwind(UNW_FLAG_NHANDLER, nImageBase, context.Rip, pRuntimeFunction, &context, &handlerData,  establisherFramePointers, NULL);
			}
			__except (EXCEPTION_EXECUTE_HANDLER)
			{
				context.Rip          = 0;
				context.ContextFlags = 0;
			}
		}
		else
		{
			/**
			 *
			 * If we don't have a RUNTIME_FUNCTION, then we've encountered an error of some sort (mostly likely only for cases of corruption)
			 * or leaf function. Adjust the stack manually.
			 */
			context.Rip  = (ULONG64)(*(PULONG64)context.Rsp);
			context.Rsp += 8;
		}

		if (context.Rip)
		{
			pReturnAddressArray[nFrameIndex++] = ((void*)(uintptr_t)context.Rip);
		}
	}

	pReturnAddressArray[nFrameIndex] = nullptr;
	return nFrameIndex;
#endif
}

///////////////////////////////////////////////////////////////////////////////
// GetCallstackContext
//
// The threadId is the same thing as the Windows' HANDLE GetCurrentThread() function
// and not the same thing as Windows' GetCurrentThreadId function. See the
// GetCallstackContextSysThreadId for the latter.
//
// TODO(mwinkler): Remove this montrosity
#if EA_USE_CPP11_CONCURRENCY
EACALLSTACK_API EA_NO_INLINE bool GetCallstackContext(CallstackContext& context, EA::Thread::ThreadId threadId)
{
	// Retrieve the Windows thread identifier from the std::thread::id structure.
	// This is unavoidable because GetCallstackContextSysThreadId compares the value of 'sysThreadId'
	// against data from the Windows API function 'GetCurrentThreadId' which returns a Windows thread identifier.
	// http://msdn.microsoft.com/en-us/library/windows/desktop/ms683183(v=vs.85).aspx
	static_assert(sizeof(_Thrd_t) == sizeof(threadId), "We expect the 'std::thread::id' to have a single member of type '_Thrd_t'.");

	_Thrd_t wThrd;
	memcpy(&wThrd, &threadId, sizeof(wThrd));  // we use memcpy to avoid strict aliasing issues caused by casting to access internal members.
	return GetCallstackContextSysThreadId(context, _Thr_val(wThrd));
}
#else
EACALLSTACK_API EA_NO_INLINE bool GetCallstackContext(CallstackContext& context, intptr_t threadId)
{
	if ((threadId == static_cast<intptr_t>(0)) ||
		(threadId == (intptr_t)EA::Thread::kThreadIdInvalid) ||
		(threadId == (intptr_t)EA::Thread::kThreadIdCurrent))
	{
		threadId = (intptr_t)::GetCurrentThread(); // GetCurrentThread returns a thread 'pseudohandle' and not a real thread handle.
	}

	const DWORD sysThreadId = ::GetThreadId(((HANDLE)threadId));

	return GetCallstackContextSysThreadId(context, sysThreadId);
}
#endif


///////////////////////////////////////////////////////////////////////////////
// GetCallstackContextSysThreadId
//
// A sysThreadId is a Microsoft DWORD thread id, which can be obtained from
// the currently running thread via GetCurrentThreadId. It can be obtained from
// a Microsoft thread HANDLE via EA::Callstack::GetThreadIdFromThreadHandle();
// A DWORD thread id can be converted to a thread HANDLE via the Microsoft OpenThread
// system function.
//

EA_DISABLE_VC_WARNING(4701) // potentially uninitialized local variable 'win64CONTEXT' used

EACALLSTACK_API EA_NO_INLINE bool GetCallstackContextSysThreadId(CallstackContext& context, intptr_t sysThreadId)
{
#if defined(EA_PROCESSOR_ARM)
	return false;
#else
	const DWORD sysThreadIdCurrent = GetCurrentThreadId();
	CONTEXT     win64CONTEXT;

	if (sysThreadIdCurrent == (DWORD)sysThreadId)
	{
		#if EA_WINAPI_FAMILY_PARTITION(EA_WINAPI_PARTITION_DESKTOP)

			win64CONTEXT.ContextFlags = CONTEXT_CONTROL | CONTEXT_INTEGER;
			RtlCaptureContext(&win64CONTEXT);

		#else

			void* ip = nullptr;
			GetInstructionPointer(ip);

			void* sp = nullptr;
			Detail::GetStackPointer(sp);

			win64CONTEXT.Rip          = ((uintptr_t)ip);
			win64CONTEXT.Rsp          = ((uintptr_t)sp);
			win64CONTEXT.Rbp          = 0;
			win64CONTEXT.ContextFlags = CONTEXT_CONTROL;

		#endif
	}
	else
	{
		/**
		 *
		 * In this case we are working with a separate thread, so we suspend it
		 * and read information about it and then resume it. We cannot use this
		 * technique to get the context of the current thread unless we do it by
		 * spawing a new thread which suspends this thread and calls GetThreadContext().
		 */
		HANDLE threadId = ::OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT, TRUE, (DWORD)sysThreadId);
		BOOL   result = false;

		EA_ASSERT(threadId != 0); // If this fails then maybe there's a process security restriction we are running into.
		if (threadId)
		{
			DWORD suspendResult = ::SuspendThread(threadId);

			if (suspendResult != (DWORD)-1)
			{
				win64CONTEXT.ContextFlags = CONTEXT_CONTROL | CONTEXT_INTEGER;
				result = ::GetThreadContext(threadId, &win64CONTEXT);
				suspendResult = ::ResumeThread(threadId);
				EA_ASSERT(suspendResult != (DWORD)-1);
				EA_UNUSED(suspendResult);
			}

			::CloseHandle(threadId);
		}

		if (!result)
		{
			win64CONTEXT.Rip          = 0;
			win64CONTEXT.Rsp          = 0;
			win64CONTEXT.Rbp          = 0;
		}
	}

	context.mRIP = win64CONTEXT.Rip;
	context.mRSP = win64CONTEXT.Rsp;
	context.mRBP = win64CONTEXT.Rbp;

	return (context.mRIP != 0);
#endif
}

EA_RESTORE_VC_WARNING()


} // namespace Callstack
} // namespace EA