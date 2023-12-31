/*
 * Copyright (C) Research In Motion Limited 2010. All rights reserved.
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

#ifndef SVGAnimatedAngle_h
#define SVGAnimatedAngle_h

#include "SVGAngle.h"
#include "SVGAnimatedPropertyTearOff.h"
#include "SVGAnimatedTypeAnimator.h"

namespace WebCore {

typedef SVGAnimatedPropertyTearOff<SVGAngle> SVGAnimatedAngle;

// Helper macros to declare/define a SVGAnimatedAngle object. SVGAnimatedAngle is only used in the SVG DOM for SVGMarkerElement.
#define DECLARE_ANIMATED_ANGLE(UpperProperty, LowerProperty) \
DECLARE_ANIMATED_PROPERTY(SVGAnimatedAngle, SVGAngle, UpperProperty, LowerProperty, )

// Only used for SVGMarkerElements orientAttr, which maps to SVGAnimatedAngle orientAngle and SVGAnimatedEnumeration orientType.
#define DEFINE_ANIMATED_ANGLE_AND_ENUMERATION(OwnerType, DOMAttribute, SVGDOMAttributeIdentifier, UpperProperty, LowerProperty) \
DEFINE_ANIMATED_PROPERTY(AnimatedAngle, OwnerType, DOMAttribute, SVGDOMAttributeIdentifier, UpperProperty, LowerProperty)

class SVGAnimationElement;

class SVGAnimatedAngleAnimator final : public SVGAnimatedTypeAnimator {
public:
    SVGAnimatedAngleAnimator(SVGAnimationElement*, SVGElement*);

    virtual std::unique_ptr<SVGAnimatedType> constructFromString(const String&) override;
    virtual std::unique_ptr<SVGAnimatedType> startAnimValAnimation(const SVGElementAnimatedPropertyList&) override;
    virtual void stopAnimValAnimation(const SVGElementAnimatedPropertyList&) override;
    virtual void resetAnimValToBaseVal(const SVGElementAnimatedPropertyList&, SVGAnimatedType*) override;
    virtual void animValWillChange(const SVGElementAnimatedPropertyList&) override;
    virtual void animValDidChange(const SVGElementAnimatedPropertyList&) override;

    virtual void addAnimatedTypes(SVGAnimatedType*, SVGAnimatedType*) override;

    virtual void calculateAnimatedValue(float percentage, unsigned repeatCount, SVGAnimatedType*, SVGAnimatedType*, SVGAnimatedType*, SVGAnimatedType*) override;
    virtual float calculateDistance(const String& fromString, const String& toString) override;
};

} // namespace WebCore

#endif
