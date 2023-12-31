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

#ifndef JSHTMLInputElement_h
#define JSHTMLInputElement_h

#include "HTMLInputElement.h"
#include "JSHTMLElement.h"

namespace WebCore {

class JSHTMLInputElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLInputElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLInputElement>&& impl)
    {
        JSHTMLInputElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLInputElement>(globalObject->vm().heap)) JSHTMLInputElement(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::JSType(JSElementType), StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue selectionStart(JSC::ExecState*) const;
    void setSelectionStart(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue selectionEnd(JSC::ExecState*) const;
    void setSelectionEnd(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue selectionDirection(JSC::ExecState*) const;
    void setSelectionDirection(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue setSelectionRange(JSC::ExecState*);
    HTMLInputElement& impl() const
    {
        return static_cast<HTMLInputElement&>(Base::impl());
    }
public:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
protected:
    JSHTMLInputElement(JSC::Structure*, JSDOMGlobalObject*, Ref<HTMLInputElement>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif
