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

#ifndef JSHTMLDListElement_h
#define JSHTMLDListElement_h

#include "HTMLDListElement.h"
#include "JSHTMLElement.h"

namespace WebCore {

class JSHTMLDListElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLDListElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLDListElement>&& impl)
    {
        JSHTMLDListElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLDListElement>(globalObject->vm().heap)) JSHTMLDListElement(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::JSType(JSElementType), StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    HTMLDListElement& impl() const
    {
        return static_cast<HTMLDListElement&>(Base::impl());
    }
protected:
    JSHTMLDListElement(JSC::Structure*, JSDOMGlobalObject*, Ref<HTMLDListElement>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif
