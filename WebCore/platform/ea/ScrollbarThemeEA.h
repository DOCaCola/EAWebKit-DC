/*
 * Copyright (C) 2008 Apple Inc. All Rights Reserved.
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

#ifndef ScrollbarThemeEA_h
#define ScrollbarThemeEA_h

#include "ScrollbarTheme.h"

namespace WebCore {

class ScrollbarThemeEA : public ScrollbarTheme {
public:
    virtual ~ScrollbarThemeEA();

    virtual bool paint(Scrollbar&, GraphicsContext&, const IntRect& damageRect) override;
    virtual void paintScrollCorner(ScrollView*, GraphicsContext*, const IntRect& cornerRect) override;

    virtual ScrollbarPart hitTest(Scrollbar&, const IntPoint&) override;

    virtual bool shouldCenterOnThumb(Scrollbar&, const PlatformMouseEvent&) override;

    virtual void invalidatePart(Scrollbar&, ScrollbarPart) override;

    virtual int thumbPosition(Scrollbar&) override;
    virtual int thumbLength(Scrollbar&) override;
    virtual int trackPosition(Scrollbar&) override;
    virtual int trackLength(Scrollbar&) override;

    virtual int scrollbarThickness(ScrollbarControlSize = RegularScrollbar) override;

    static void staticFinalize();
};

}
#endif
