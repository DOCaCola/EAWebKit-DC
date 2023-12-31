/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
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

#include "config.h"
#include "ErrorHandlingScope.h"

#include "Interpreter.h"
#include "Options.h"
#include "VM.h"

namespace JSC {

ErrorHandlingScope::ErrorHandlingScope(VM& vm)
    : m_vm(vm)
{
    RELEASE_ASSERT(m_vm.stackPointerAtVMEntry());
    size_t newReservedZoneSize = Options::errorModeReservedZoneSize();
    m_savedReservedZoneSize = m_vm.updateReservedZoneSize(newReservedZoneSize);
#if !ENABLE(JIT)
    m_vm.interpreter->stack().setReservedZoneSize(newReservedZoneSize);
#endif
}

ErrorHandlingScope::~ErrorHandlingScope()
{
    RELEASE_ASSERT(m_vm.stackPointerAtVMEntry());
    m_vm.updateReservedZoneSize(m_savedReservedZoneSize);
#if !ENABLE(JIT)
    m_vm.interpreter->stack().setReservedZoneSize(m_savedReservedZoneSize);
#endif
}

} // namespace JSC
