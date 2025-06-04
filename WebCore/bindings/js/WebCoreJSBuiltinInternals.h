/*
 *  Copyright (c) 2015, Canon Inc. All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *  1.  Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *  2.  Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *  3.  Neither the name of Canon Inc. nor the names of
 *      its contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *  THIS SOFTWARE IS PROVIDED BY CANON INC. AND ITS CONTRIBUTORS "AS IS" AND ANY
 *  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL CANON INC. AND ITS CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 *  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WebCoreJSBuiltinInternals_h
#define WebCoreJSBuiltinInternals_h

#if ENABLE(STREAMS_API)
#include "ReadableStreamInternalsBuiltins.h"
#include "StreamInternalsBuiltins.h"
#include "WritableStreamInternalsBuiltins.h"
#endif

#if ENABLE(MEDIA_STREAM)
#include "RTCPeerConnectionInternalsBuiltins.h"
#endif

#if ENABLE(STREAMS_API) || ENABLE(MEDIA_STREAM)
#define SKIP_UNUSED_PARAM
#endif

namespace WebCore {

class JSBuiltinInternalFunctions {
public:
explicit JSBuiltinInternalFunctions(JSC::VM& v)
        : vm(v)
#if ENABLE(STREAMS_API)
        , m_readableStreamInternalsFunctions(vm)
        , m_streamInternalsFunctions(vm)
        , m_writableStreamInternalsFunctions(vm)
#endif
#if ENABLE(MEDIA_STREAM)
        , m_rtcPeerConnectionInternalsFunctions(vm)
#endif
    { }

#if ENABLE(STREAMS_API)
    ReadableStreamInternalsBuiltinFunctions readableStreamInternals() { return m_readableStreamInternalsFunctions; }
    StreamInternalsBuiltinFunctions streamInternals() { return m_streamInternalsFunctions; }
    WritableStreamInternalsBuiltinFunctions writableStreamInternals() { return m_writableStreamInternalsFunctions; }
#endif
#if ENABLE(MEDIA_STREAM)
    RTCPeerConnectionInternalsBuiltinFunctions rtcPeerConnectionInternals() { return m_rtcPeerConnectionInternalsFunctions; }
#endif
    void visit(JSC::SlotVisitor& visitor) {
#if ENABLE(STREAMS_API)
        m_readableStreamInternalsFunctions.visit(visitor);
        m_streamInternalsFunctions.visit(visitor);
        m_writableStreamInternalsFunctions.visit(visitor);
#endif
#if ENABLE(MEDIA_STREAM)
        m_rtcPeerConnectionInternalsFunctions.visit(visitor);
#endif
#ifndef SKIP_UNUSED_PARAM
        UNUSED_PARAM(visitor);
#endif
    }
    void init(JSC::JSGlobalObject& globalObject) {
#if ENABLE(STREAMS_API)
        m_readableStreamInternalsFunctions.init(globalObject);
        m_streamInternalsFunctions.init(globalObject);
        m_writableStreamInternalsFunctions.init(globalObject);
#endif
#if ENABLE(MEDIA_STREAM)
        m_rtcPeerConnectionInternalsFunctions.init(globalObject);
#endif
#ifndef SKIP_UNUSED_PARAM
        UNUSED_PARAM(globalObject);
#endif
    }

private:
    JSC::VM& vm;
#if ENABLE(STREAMS_API)
    ReadableStreamInternalsBuiltinFunctions m_readableStreamInternalsFunctions;
    StreamInternalsBuiltinFunctions m_streamInternalsFunctions;
    WritableStreamInternalsBuiltinFunctions m_writableStreamInternalsFunctions;
#endif
#if ENABLE(MEDIA_STREAM)
    RTCPeerConnectionInternalsBuiltinFunctions m_rtcPeerConnectionInternalsFunctions;
#endif

};

}
#endif
