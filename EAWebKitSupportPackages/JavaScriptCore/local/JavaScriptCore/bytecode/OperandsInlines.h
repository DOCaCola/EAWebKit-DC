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

#ifndef OperandsInlines_h
#define OperandsInlines_h

#include "Operands.h"
#include <wtf/CommaPrinter.h>

namespace JSC {

template<typename T, typename Traits>
void Operands<T, Traits>::dumpInContext(PrintStream& out, DumpContext* context) const
{
    CommaPrinter comma(" ");
    for (size_t argumentIndex = numberOfArguments(); argumentIndex--;) {
        if (Traits::isEmptyForDump(argument(argumentIndex)))
            continue;
        out.print(comma, "arg", argumentIndex, ":", inContext(argument(argumentIndex), context));
    }
    for (size_t localIndex = 0; localIndex < numberOfLocals(); ++localIndex) {
        if (Traits::isEmptyForDump(local(localIndex)))
            continue;
        out.print(comma, "loc", localIndex, ":", inContext(local(localIndex), context));
    }
}

template<typename T, typename Traits>
void Operands<T, Traits>::dump(PrintStream& out) const
{
    CommaPrinter comma(" ");
    for (size_t argumentIndex = numberOfArguments(); argumentIndex--;) {
        if (Traits::isEmptyForDump(argument(argumentIndex)))
            continue;
        out.print(comma, "arg", argumentIndex, ":", argument(argumentIndex));
    }
    for (size_t localIndex = 0; localIndex < numberOfLocals(); ++localIndex) {
        if (Traits::isEmptyForDump(local(localIndex)))
            continue;
        out.print(comma, "loc", localIndex, ":", local(localIndex));
    }
}

} // namespace JSC

#endif // OperandsInlines_h

