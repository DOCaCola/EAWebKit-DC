/*
 * Copyright (C) 2013 Apple Inc. All rights reserved.
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

#ifndef FTLSaveRestore_h
#define FTLSaveRestore_h

#if ENABLE(FTL_JIT)

#include "FPRInfo.h"
#include "GPRInfo.h"
#include "Reg.h"

namespace JSC {

class MacroAssembler;

namespace FTL {

size_t requiredScratchMemorySizeInBytes();

size_t offsetOfReg(Reg);
size_t offsetOfGPR(GPRReg);
size_t offsetOfFPR(FPRReg);

// Assumes that top-of-stack can be used as a pointer-sized scratchpad. Saves all of
// the registers into the scratch buffer such that RegisterID * sizeof(int64_t) is the
// offset of every register.
void saveAllRegisters(MacroAssembler& jit, char* scratchMemory);

void restoreAllRegisters(MacroAssembler& jit, char* scratchMemory);

} } // namespace JSC::FTL

#endif // ENABLE(FTL_JIT)

#endif // FTLSaveRestore_h

