/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGPathSegCurvetoCubicSmoothRel_h
#define JSSVGPathSegCurvetoCubicSmoothRel_h

#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include "SVGPathSegCurvetoCubicSmoothRel.h"

namespace WebCore {

class JSSVGPathSegCurvetoCubicSmoothRel : public JSSVGPathSeg {
public:
    typedef JSSVGPathSeg Base;
    static JSSVGPathSegCurvetoCubicSmoothRel* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegCurvetoCubicSmoothRel>&& impl)
    {
        JSSVGPathSegCurvetoCubicSmoothRel* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicSmoothRel>(globalObject->vm().heap)) JSSVGPathSegCurvetoCubicSmoothRel(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    SVGPathSegCurvetoCubicSmoothRel& impl() const
    {
        return static_cast<SVGPathSegCurvetoCubicSmoothRel&>(Base::impl());
    }
protected:
    JSSVGPathSegCurvetoCubicSmoothRel(JSC::Structure*, JSDOMGlobalObject*, Ref<SVGPathSegCurvetoCubicSmoothRel>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif
