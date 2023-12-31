/*
 * Copyright (C) 2003 Apple Inc.  All rights reserved.
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

#ifndef BINDINGS_C_CLASS_H_
#define BINDINGS_C_CLASS_H_

#if ENABLE(NETSCAPE_PLUGIN_API)

#include "BridgeJSC.h"
#include "npruntime_internal.h"
#include <wtf/HashMap.h>

namespace JSC {
namespace Bindings {

class CClass : public Class {
protected:
    CClass(NPClass*); // Use classForIsA to create a CClass.
    
public:
    static CClass* classForIsA(NPClass*);
    virtual ~CClass();

    virtual Method* methodNamed(PropertyName, Instance*) const override;
    virtual Field* fieldNamed(PropertyName, Instance*) const override;

private:
    NPClass* m_isa;
    mutable HashMap<RefPtr<StringImpl>, std::unique_ptr<Method>> m_methods;
    mutable HashMap<RefPtr<StringImpl>, std::unique_ptr<Field>> m_fields;
};

} // namespace Bindings
} // namespace JSC

#endif // ENABLE(NETSCAPE_PLUGIN_API)

#endif
