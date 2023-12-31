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

#include "config.h"

#if ENABLE(SVG_FONTS)

#include "JSSVGAltGlyphItemElement.h"

#include "JSDOMBinding.h"
#include "SVGAltGlyphItemElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGAltGlyphItemElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGAltGlyphItemElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGAltGlyphItemElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGAltGlyphItemElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGAltGlyphItemElementPrototype>(vm.heap)) JSSVGAltGlyphItemElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGAltGlyphItemElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGAltGlyphItemElementConstructor : public DOMConstructorObject {
private:
    JSSVGAltGlyphItemElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAltGlyphItemElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAltGlyphItemElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGAltGlyphItemElementConstructor>(vm.heap)) JSSVGAltGlyphItemElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGAltGlyphItemElementConstructor::s_info = { "SVGAltGlyphItemElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAltGlyphItemElementConstructor) };

JSSVGAltGlyphItemElementConstructor::JSSVGAltGlyphItemElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAltGlyphItemElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAltGlyphItemElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGAltGlyphItemElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAltGlyphItemElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAltGlyphItemElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGAltGlyphItemElementPrototype::s_info = { "SVGAltGlyphItemElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAltGlyphItemElementPrototype) };

void JSSVGAltGlyphItemElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGAltGlyphItemElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGAltGlyphItemElement::s_info = { "SVGAltGlyphItemElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAltGlyphItemElement) };

JSSVGAltGlyphItemElement::JSSVGAltGlyphItemElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGAltGlyphItemElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGAltGlyphItemElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAltGlyphItemElementPrototype::create(vm, globalObject, JSSVGAltGlyphItemElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGAltGlyphItemElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAltGlyphItemElement>(vm, globalObject);
}

EncodedJSValue jsSVGAltGlyphItemElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGAltGlyphItemElementPrototype* domObject = jsDynamicCast<JSSVGAltGlyphItemElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGAltGlyphItemElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGAltGlyphItemElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAltGlyphItemElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG_FONTS)
