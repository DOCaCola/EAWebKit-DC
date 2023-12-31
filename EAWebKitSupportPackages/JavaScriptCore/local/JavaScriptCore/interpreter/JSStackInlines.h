/*
 * Copyright (C) 2012, 2013, 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef JSStackInlines_h
#define JSStackInlines_h

#include "CallFrame.h"
#include "CodeBlock.h"
#include "JSStack.h"
#include "VM.h"

namespace JSC {

inline bool JSStack::ensureCapacityFor(Register* newTopOfStack)
{
#if !ENABLE(JIT)
    return grow(newTopOfStack);
#else
    ASSERT(wtfThreadData().stack().isGrowingDownward());
    return newTopOfStack >= m_vm.stackLimit();
#endif
}

#if !ENABLE(JIT)

inline Register* JSStack::topOfFrameFor(CallFrame* frame)
{
    if (UNLIKELY(!frame))
        return baseOfStack();
    return frame->topOfFrame() - 1;
}

inline Register* JSStack::topOfStack()
{
    return topOfFrameFor(m_topCallFrame);
}

inline void JSStack::shrink(Register* newTopOfStack)
{
    Register* newEnd = newTopOfStack - 1;
    if (newEnd >= m_end)
        return;
    setStackLimit(newTopOfStack);
    // Note: Clang complains of an unresolved linkage to maxExcessCapacity if
    // invoke std::max() with it as an argument. To work around this, we first
    // assign the constant to a local variable, and use the local instead.
    ptrdiff_t maxExcessCapacity = JSStack::maxExcessCapacity;
    ptrdiff_t maxExcessInRegisters = std::max(maxExcessCapacity, m_reservedZoneSizeInRegisters);
    if (m_end == baseOfStack() && (highAddress() - m_commitTop) >= maxExcessInRegisters)
        releaseExcessCapacity();
}

inline bool JSStack::grow(Register* newTopOfStack)
{
    Register* newEnd = newTopOfStack - 1;
    if (newEnd >= m_end)
        return true;
    return growSlowCase(newTopOfStack);
}

inline void JSStack::setStackLimit(Register* newTopOfStack)
{
    Register* newEnd = newTopOfStack - 1;
    m_end = newEnd;
    m_vm.setJSStackLimit(newTopOfStack);
}

#endif // !ENABLE(JIT)

} // namespace JSC

#endif // JSStackInlines_h
