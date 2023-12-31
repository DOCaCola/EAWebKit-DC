/*
 * Copyright (C) 2011 Apple Inc. All Rights Reserved.
 * Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2014, 2015 Electronic Arts, Inc. All rights reserved.
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

#ifndef WebSocketServer_h
#define WebSocketServer_h

#include <wtf/Deque.h>
#include <wtf/text/WTFString.h>
#include <EAWebKit/EAWebKitTransport.h>

#if USE(SOUP)
#include <gio/gio.h>
#include <wtf/glib/GRefPtr.h>
#endif

namespace WebCore {
class SocketStreamHandle;
}

namespace WebKit {

class WebSocketServerClient;
class WebSocketServerConnection;

class WebSocketServer: public EA::WebKit::SocketHandleClient{
public:
    enum ServerState { Closed, Listening };
    explicit WebSocketServer(WebSocketServerClient*);
    virtual ~WebSocketServer();

    // EA::WebKit::SocketHandleClient overrides
	virtual void RecvedData(const char8_t* data, int32_t length);
    virtual void SocketEvent(EA::WebKit::SocketEventType eventType);
    virtual void ConnectionAccepted(EA::WebKit::SocketHandle newClient);

    // Server operations.
    bool listen(const String& bindAddress, unsigned short port);
    String bindAddress() const { return m_bindAddress; };
    unsigned short port() const { return m_port; };
    ServerState serverState() const { return m_state; };
    void close();

    WebSocketServerClient* client() const { return m_client; }
    void didAcceptConnection(std::unique_ptr<WebSocketServerConnection>);

private:
    void didCloseWebSocketServerConnection(WebSocketServerConnection*);

    void platformInitialize();
    bool platformListen(const String& bindAddress, unsigned short port);
    void platformClose();

    ServerState m_state;
    Deque<std::unique_ptr<WebSocketServerConnection>> m_connections;
    WebSocketServerClient* m_client;
    String m_bindAddress;
    unsigned short m_port;
#if USE(SOUP)
    GRefPtr<GSocketService> m_socketService;
#endif
    friend class WebSocketServerConnection;
    EA::WebKit::SocketHandle mListenerSocketHandle;
};

}



#endif // WebSocketServer_h
