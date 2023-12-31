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

#ifndef DFGStructureClobberState_h
#define DFGStructureClobberState_h

#if ENABLE(DFG_JIT)

#include <wtf/PrintStream.h>

namespace JSC { namespace DFG {

enum StructureClobberState {
    StructuresAreWatched, // Constants with watchable structures must have those structures.
    StructuresAreClobbered // Constants with watchable structures could have any structure.
};

inline StructureClobberState merge(StructureClobberState a, StructureClobberState b)
{
    switch (a) {
    case StructuresAreWatched:
        return b;
    case StructuresAreClobbered:
        return StructuresAreClobbered;
    }
    RELEASE_ASSERT_NOT_REACHED();
    return StructuresAreClobbered;
}

} } // namespace JSC::DFG

namespace WTF {

inline void printInternal(PrintStream& out, JSC::DFG::StructureClobberState state)
{
    switch (state) {
    case JSC::DFG::StructuresAreWatched:
        out.print("StructuresAreWatched");
        return;
    case JSC::DFG::StructuresAreClobbered:
        out.print("StructuresAreClobbered");
        return;
    }
    RELEASE_ASSERT_NOT_REACHED();
}

} // namespace WTF

#endif // ENABLE(DFG_JIT)

#endif // DFGStructureClobberState_h
