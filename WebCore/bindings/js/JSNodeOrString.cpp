/*
 * Copyright (C) 2015 Apple Inc. All rights reserved.
 * Copyright (C) 2015 Electronic Arts, Inc.  All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "JSNodeOrString.h"

#include "JSNode.h"
//+EAWebKitChange
//09/21/15
//original #include <JavaScriptCore/JSString.h>
#include <JSString.h>
//-EAWebKitChange

using namespace JSC;

namespace WebCore {

Vector<NodeOrString> toNodeOrStringVector(ExecState& state)
{
    size_t argumentCount = state.argumentCount();

    Vector<NodeOrString> result;
    result.reserveInitialCapacity(argumentCount);

    for (size_t i = 0; i < argumentCount; ++i) {
        JSValue value = state.uncheckedArgument(i);
        if (auto* node = jsDynamicCast<JSNode*>(value))
            result.uncheckedAppend(&node->impl());
        else {
            String string = value.toWTFString(&state);
            if (state.hadException())
                return { };
            result.uncheckedAppend(string);
        }
    }

    return result;
}

} // namespace WebCore
