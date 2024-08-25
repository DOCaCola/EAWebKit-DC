/////////////////////////////////////////////////////////////////////////////
// EAFileStreamUnix.h
//
// Copyright (c) 2003, Electronic Arts Inc. All rights reserved.
// Created by Paul Pedriana
//
/////////////////////////////////////////////////////////////////////////////


#ifndef EAIO_EAFILESTREAM_UNIX_H
#define EAIO_EAFILESTREAM_UNIX_H


#include <EAIO/internal/EAIOFileStreamImpl.h>
#include <EAIO/EAAsyncStream.h>
#include <EAIO/EAFileStream.h>
#include <EAIO/EAFileBase.h>
#include <EAIO/PathString.h>
#include <stddef.h>



namespace EA
{
	namespace IO
	{
		class EAIO_API FileStream : public FileStreamImpl
		{
		public:
			FileStream(const char*  pPath8 = NULL);
			FileStream(const char16_t* pPath16);
			FileStream(const char32_t* pPath32);
			#if EA_WCHAR_UNIQUE
				FileStream(const wchar_t* pPathW);
			#endif

			// FileStream
			// Does not copy information related to an open file, such as the file handle.
			FileStream(const FileStream& fs);

			virtual ~FileStream() override;

			// operator=
			// Does not copy information related to an open file, such as the file handle.
			FileStream& operator=(const FileStream& fs);

			virtual void      SetPath(const char* pPath8);
			virtual void      SetPath(const char16_t* pPath16);
			virtual void      SetPath(const char32_t* pPath32);
			#if EA_WCHAR_UNIQUE
				virtual void  SetPath(const wchar_t* pPathW);
			#endif
			virtual size_t    GetPath(char* pPath8, size_t nPathCapacity);
			virtual size_t    GetPath(char16_t* pPath16, size_t nPathCapacity);
			virtual size_t    GetPath(char32_t* pPath32, size_t nPathCapacity);
			#if EA_WCHAR_UNIQUE
				virtual size_t  GetPath(wchar_t* pPathW, size_t nPathCapacity);
			#endif

			virtual bool      Open(int nAccessFlags = kAccessFlagRead, int nCreationDisposition = kCDDefault, int nSharing = kShareRead, int nUsageHints = kUsageHintNone);
			virtual bool      Close() override;
			virtual int       GetAccessFlags() const override;
			virtual int       GetState() const override;

			virtual size_type GetSize() const override;
			virtual bool      SetSize(size_type size) override;

			virtual off_type  GetPosition(PositionType positionType = kPositionTypeBegin) const override;
			virtual bool      SetPosition(off_type position, PositionType positionType = kPositionTypeBegin) override;

			virtual size_type GetAvailable() const override;

			virtual size_type Read(void* pData, size_type nSize) override;
			virtual bool      Write(const void* pData, size_type nSize) override;
			virtual bool      Flush() override;

			int               GetFileHandle() const { return mnFileHandle; }
			bool              IsValidHandle() const { return mnFileHandle > -1; }

#ifdef EA_ISTREAM_HAS_ASYNC
			virtual AsyncExecutor* GetAsyncExecutor() override;

			virtual AsyncRequestId AsyncRead(AsyncExecutor& exec, void* destination, size_type size, const AsyncIoFunctionCallback& func) override;
			virtual AsyncRequestId AsyncRead(AsyncExecutor& exec, size_type position, void* destination, size_type size, const AsyncIoFunctionCallback& func) override;

			virtual AsyncRequestId AsyncWrite(AsyncExecutor& exec, const void* source, size_type size, const AsyncIoFunctionCallback& func) override;
			virtual AsyncRequestId AsyncWrite(AsyncExecutor& exec, size_type position, const void* source, size_type size, const AsyncIoFunctionCallback& func) override;
#endif

		protected:
			typedef EA::IO::Path::PathString8 PathString8;

#ifdef EA_ISTREAM_HAS_ASYNC
			AsyncExecutor* mAsyncExecutor{ nullptr }; /// Once async operations have begun, this will reference the attached executor
#endif
			int         mnFileHandle;               /// 
			char        mpPath8[kMaxPathLength];    /// Path for the file.
			int         mnAccessFlags;              /// See enum AccessFlags.
			int         mnCD;                       /// See enum CD (creation disposition).
			int         mnSharing;                  /// See enum Share.
			int         mnUsageHints;               /// See enum UsageHints.
			mutable int mnLastError;                /// Used for error reporting.

		}; // class FileStream

	} // namespace IO

} // namespace EA

#endif  // #ifndef EAIO_EAFILESTREAM_UNIX_H











