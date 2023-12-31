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

#ifndef DFGStaticExecutionCountEstimationPhase_h
#define DFGStaticExecutionCountEstimationPhase_h

#if ENABLE(DFG_JIT)

namespace JSC { namespace DFG {

class Graph;

// Estimate execution counts (branch execution counts, in particular) based on
// presently available static information. This phase is important because
// subsequent CFG transformations, such as OSR entrypoint creation, perturb our
// ability to do accurate static estimations. Hence we lock in the estimates early.
// Ideally, we would have dynamic information, but we don't right now, so this is as
// good as it gets.
//
// It's worth noting that if we didn't have this phase, then the static estimation
// would be perfomed by LLVM instead. It's worth trying to make this phase perform
// the estimates using the same heuristics that LLVM would use.

bool performStaticExecutionCountEstimation(Graph&);

} } // namespace JSC::DFG

#endif // ENABLE(DFG_JIT)

#endif // DFGStaticExecutionCountEstimationPhase_h

