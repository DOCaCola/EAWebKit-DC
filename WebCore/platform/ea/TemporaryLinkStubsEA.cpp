/*
 * Copyright (C) 2006, 2007 Apple Inc.  All rights reserved.
 * Copyright (C) 2006 Michael Emmel mike.emmel@gmail.com
 * Copyright (C) 2006 George Staikos <staikos@kde.org>
 * Copyright (C) 2006 Dirk Mueller <mueller@kde.org>
 * Copyright (C) 2006 Nikolas Zimmermann <zimmermann@kde.org>
 * Copyright (C) 2008 Collabora, Ltd.
 *
 * All rights reserved.
 * Copyright (C) 2011, 2014, 2015 Electronic Arts, Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#include "AXObjectCache.h"
#include "CachedResource.h"
#include "CookieJar.h"
#include "CookieStorage.h"
#include "Cursor.h"
#include "DNS.h"
#include "FTPDirectoryDocument.h"
#include "FileSystem.h"
#include "Font.h"
#include "Frame.h"
#include "FrameLoader.h"
#include "FrameView.h"
#include "GraphicsContext.h"
#include "IconLoader.h"
#include "IntPoint.h"
#include "URL.h"
#include "Language.h"
#include "LocalizedStrings.h"
#include "Node.h"
#include "NotImplemented.h"
#include "Path.h"
#include "PlatformMouseEvent.h"
#include "PluginData.h"
#include "RenderTheme.h"
#include "SharedBuffer.h"
#include "TextBoundaries.h"
#include "Widget.h"
#include "BridgeJSC.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <wtf/text/CString.h>

using namespace WebCore;
/* This is our favorite dumping ground for 'mostly' useless stubs in order to avoid touching core files. */
namespace WebCore {
    /*
void PluginView::privateBrowsingStateChanged(bool)
{
}

PassRefPtr<JSC::Bindings::Instance> PluginView::bindingInstance()
{
    return 0;
}

void PluginView::setJavaScriptPaused(bool)
{
}
*/
void getSupportedKeySizes(Vector<String>&)
{
    notImplemented();
}

String signedPublicKeyAndChallengeString(unsigned, const String&, const URL&)
{
    return String();
}

float userIdleTime()
{
    notImplemented();
    return FLT_MAX; // return an arbitrarily high userIdleTime so that releasing pages from the page cache isn't postponed
}

void setCookieStoragePrivateBrowsingEnabled(bool)
{
    notImplemented();
}

void AXObjectCache::notificationPostTimerFired()
{
    notImplemented();
}

AXAttributeCacheEnabler::AXAttributeCacheEnabler(AXObjectCache *cache)
{
    notImplemented();
}

AXAttributeCacheEnabler::~AXAttributeCacheEnabler()
{
    notImplemented();
}

}

// vim: ts=4 sw=4 et
