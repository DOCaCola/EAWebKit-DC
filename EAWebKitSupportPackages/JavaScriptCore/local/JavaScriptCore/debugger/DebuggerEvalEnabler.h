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

#ifndef DebuggerEvalEnabler_h
#define DebuggerEvalEnabler_h

#include "CallFrame.h"
#include "JSGlobalObject.h"

namespace JSC {

class DebuggerEvalEnabler {
public:
    explicit DebuggerEvalEnabler(const ExecState* exec)
        : m_exec(exec)
        , m_evalWasDisabled(false)
    {
        if (exec) {
            JSGlobalObject* globalObject = exec->lexicalGlobalObject();
            m_evalWasDisabled = !globalObject->evalEnabled();
            if (m_evalWasDisabled)
                globalObject->setEvalEnabled(true, globalObject->evalDisabledErrorMessage());
        }
    }

    ~DebuggerEvalEnabler()
    {
        if (m_evalWasDisabled) {
            JSGlobalObject* globalObject = m_exec->lexicalGlobalObject();
            globalObject->setEvalEnabled(false, globalObject->evalDisabledErrorMessage());
        }
    }

private:
    const ExecState* m_exec;
    bool m_evalWasDisabled;
};

} // namespace JSC

#endif // DebuggerEvalEnabler_h
