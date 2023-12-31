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
#include "JSSVGSetElement.h"

#include "JSDOMBinding.h"
#include "SVGSetElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGSetElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGSetElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGSetElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGSetElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGSetElementPrototype>(vm.heap)) JSSVGSetElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGSetElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGSetElementConstructor : public DOMConstructorObject {
private:
    JSSVGSetElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGSetElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGSetElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGSetElementConstructor>(vm.heap)) JSSVGSetElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGSetElementConstructor::s_info = { "SVGSetElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGSetElementConstructor) };

JSSVGSetElementConstructor::JSSVGSetElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGSetElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGSetElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGSetElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGSetElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSetElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGSetElementPrototype::s_info = { "SVGSetElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGSetElementPrototype) };

void JSSVGSetElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGSetElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGSetElement::s_info = { "SVGSetElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGSetElement) };

JSSVGSetElement::JSSVGSetElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGSetElement>&& impl)
    : JSSVGAnimationElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGSetElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGSetElementPrototype::create(vm, globalObject, JSSVGSetElementPrototype::createStructure(vm, globalObject, JSSVGAnimationElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGSetElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGSetElement>(vm, globalObject);
}

EncodedJSValue jsSVGSetElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGSetElementPrototype* domObject = jsDynamicCast<JSSVGSetElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGSetElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGSetElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGSetElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
