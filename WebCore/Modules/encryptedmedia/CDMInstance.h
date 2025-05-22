/*
 * Copyright (C) 2017 Apple Inc. All rights reserved.
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

#pragma once

#if ENABLE(ENCRYPTED_MEDIA)

#include <wtf/Forward.h>
#include <wtf/RefCounted.h>

namespace WebCore {

struct MediaKeySystemConfiguration;
class SharedBuffer;

class CDMInstance : public RefCounted<CDMInstance> {
public:
    virtual ~CDMInstance() { }

    enum SuccessValue {
        Failed,
        Succeeded,
    };

    virtual SuccessValue initializeWithConfiguration(const MediaKeySystemConfiguration&) = 0;
    virtual SuccessValue setDistinctiveIdentifiersAllowed(bool) = 0;
    virtual SuccessValue setPersistentStateAllowed(bool) = 0;
    virtual SuccessValue setServerCertificate(Ref<SharedBuffer>&&) = 0;

    enum class LicenseType {
        Temporary,
        Persistable,
        UsageRecord,
    };

    using LicenseCallback = Function<void(Ref<SharedBuffer>&& message, const String& sessionId, bool needsIndividualization, SuccessValue succeeded)>;
    virtual void requestLicense(LicenseType, const AtomicString& initDataType, Ref<SharedBuffer>&& initData, LicenseCallback) = 0;
};

}

#endif
