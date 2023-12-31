/*
 * (C) 1999-2003 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2004, 2005, 2006, 2015 Apple Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef Pair_h
#define Pair_h

#include <wtf/RefCounted.h>
#include "CSSPrimitiveValue.h"
#include <wtf/PassRefPtr.h>
#include <wtf/text/StringBuilder.h>

namespace WebCore {

// A primitive value representing a pair.  This is useful for properties like border-radius, background-size/position,
// and border-spacing (all of which are space-separated sets of two values).  At the moment we are only using it for
// border-radius and background-size, but (FIXME) border-spacing and background-position could be converted over to use
// it (eliminating some extra -webkit- internal properties).
class Pair : public RefCounted<Pair> {
public:
    enum class IdenticalValueEncoding {
        DoNotCoalesce,
        Coalesce
    };

    static Ref<Pair> create(RefPtr<CSSPrimitiveValue>&& first, RefPtr<CSSPrimitiveValue>&& second)
    {
        return adoptRef(*new Pair(WTF::move(first), WTF::move(second)));
    }
    static Ref<Pair> create(RefPtr<CSSPrimitiveValue>&& first, RefPtr<CSSPrimitiveValue>&& second, IdenticalValueEncoding encoding)
    {
        return adoptRef(*new Pair(WTF::move(first), WTF::move(second), encoding));
    }
    virtual ~Pair() { }

    CSSPrimitiveValue* first() const { return m_first.get(); }
    CSSPrimitiveValue* second() const { return m_second.get(); }

    String cssText() const
    {
        String first = this->first()->cssText();
        String second = this->second()->cssText();
        if (m_encoding == IdenticalValueEncoding::Coalesce && first == second)
            return first;
        return first + ' ' + second;
    }

    bool equals(const Pair& other) const { return compareCSSValuePtr(m_first, other.m_first) && compareCSSValuePtr(m_second, other.m_second); }

private:
    Pair(RefPtr<CSSPrimitiveValue>&& first, RefPtr<CSSPrimitiveValue>&& second) : m_first(WTF::move(first)), m_second(WTF::move(second)) { }
    Pair(RefPtr<CSSPrimitiveValue>&& first, RefPtr<CSSPrimitiveValue>&& second, IdenticalValueEncoding encoding) : m_first(WTF::move(first)), m_second(WTF::move(second)), m_encoding(encoding) { }

    RefPtr<CSSPrimitiveValue> m_first;
    RefPtr<CSSPrimitiveValue> m_second;
    IdenticalValueEncoding m_encoding { IdenticalValueEncoding::Coalesce };
};

} // namespace

#endif
