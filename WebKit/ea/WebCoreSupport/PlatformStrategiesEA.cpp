/*
 * Copyright (C) 2007 Staikos Computing Services Inc. <info@staikos.net>
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2008 Collabora Ltd. All rights reserved.
 * Copyright (C) 2010 Apple Inc. All rights reserved.
 * Copyright (C) 2010 INdT - Instituto Nokia de Tecnologia
 * Copyright (C) 2011, 2012, 2014, 2015 Electronic Arts, Inc. All rights reserved.
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
#include "PlatformStrategiesEA.h"

#include "Chrome.h"
#include "ChromeClientEA.h"
#include "WebResourceLoadScheduler.h"
#include <IntSize.h>
#include <NotImplemented.h>
#include <Page.h>
#include <PageGroup.h>
#include <PlatformCookieJar.h>
#include <WebPage.h>
#include <wtf/MathExtras.h>
#include <AudioDestination.h>
#include <BlobRegistryImpl.h>
#include <wtf/NeverDestroyed.h>

using namespace WebCore;

void PlatformStrategiesEA::initialize()
{
    static NeverDestroyed<PlatformStrategiesEA> platformStrategies;
    (void)platformStrategies;
}

PlatformStrategiesEA::PlatformStrategiesEA()
{
    setPlatformStrategies(this);
}


CookiesStrategy* PlatformStrategiesEA::createCookiesStrategy()
{
    return this;
}

//DatabaseStrategy* PlatformStrategiesEA::createDatabaseStrategy()
//{
//    return this;
//}

LoaderStrategy* PlatformStrategiesEA::createLoaderStrategy()
{
    return new WebResourceLoadScheduler;
}

PasteboardStrategy* PlatformStrategiesEA::createPasteboardStrategy()
{
    return nullptr;
}

WebCore::BlobRegistry* PlatformStrategiesEA::createBlobRegistry()
{
    return new BlobRegistryImpl;
}


//SharedWorkerStrategy* PlatformStrategiesEA::createSharedWorkerStrategy()
//{
//    return this;
//}
//
//StorageStrategy* PlatformStrategiesEA::createStorageStrategy()
//{
//    return this;
//}
//
//VisitedLinkStrategy* PlatformStrategiesEA::createVisitedLinkStrategy()
//{
//    return this;
//}

String PlatformStrategiesEA::cookiesForDOM(const NetworkStorageSession& session, const URL& firstParty, const URL& url)
{
    return WebCore::cookiesForDOM(session, firstParty, url);
}

void PlatformStrategiesEA::setCookiesFromDOM(const NetworkStorageSession& session, const URL& firstParty, const URL& url, const String& cookieString)
{
    WebCore::setCookiesFromDOM(session, firstParty, url, cookieString);
}

bool PlatformStrategiesEA::cookiesEnabled(const NetworkStorageSession& session, const URL& firstParty, const URL& url)
{
    return WebCore::cookiesEnabled(session, firstParty, url);
}

String PlatformStrategiesEA::cookieRequestHeaderFieldValue(const NetworkStorageSession& session, const URL& firstParty, const URL& url)
{
    return WebCore::cookieRequestHeaderFieldValue(session, firstParty, url);
}

String PlatformStrategiesEA::cookieRequestHeaderFieldValue(WebCore::SessionID, const WebCore::URL& firstParty,
	const WebCore::URL& url)
{
    notImplemented();
    return String();
}

bool PlatformStrategiesEA::getRawCookies(const NetworkStorageSession& session, const URL& firstParty, const URL& url, Vector<Cookie>& rawCookies)
{
    return WebCore::getRawCookies(session, firstParty, url, rawCookies);
}

void PlatformStrategiesEA::deleteCookie(const NetworkStorageSession& session, const URL& url, const String& cookieName)
{
    WebCore::deleteCookie(session, url, cookieName);
}

void PlatformStrategiesEA::addCookie(const WebCore::NetworkStorageSession&, const WebCore::URL&, const WebCore::Cookie&)
{
    notImplemented();
}

namespace WebCore
{
	String localizedString(const char* key)
	{
		ASSERT(isMainThread());
		// We'll implement this using GetLocalizedString callback of the EAWebKitClient if a customer requests it. The localized string here are for the default button labels of the actual browser UI etc. which our customers 
		// may not want anyway. When necessary, such elements can be controlled via page itself.
		// Another reason to leave this out at the moment is that due to code reorg, we'd have to now do a string match of the incoming string to convert it to an appropriate enum and then make the callback.
		return String::fromUTF8(key, strlen(key));
	}
}
