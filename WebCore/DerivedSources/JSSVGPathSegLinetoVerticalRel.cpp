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
#include "JSSVGPathSegLinetoVerticalRel.h"

#include "JSDOMBinding.h"
#include "SVGPathSegLinetoVerticalRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGPathSegLinetoVerticalRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegLinetoVerticalRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegLinetoVerticalRelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPathSegLinetoVerticalRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPathSegLinetoVerticalRelPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegLinetoVerticalRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegLinetoVerticalRelPrototype>(vm.heap)) JSSVGPathSegLinetoVerticalRelPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegLinetoVerticalRelPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPathSegLinetoVerticalRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegLinetoVerticalRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegLinetoVerticalRelConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegLinetoVerticalRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegLinetoVerticalRelConstructor>(vm.heap)) JSSVGPathSegLinetoVerticalRelConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPathSegLinetoVerticalRelConstructor::s_info = { "SVGPathSegLinetoVerticalRelConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalRelConstructor) };

JSSVGPathSegLinetoVerticalRelConstructor::JSSVGPathSegLinetoVerticalRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegLinetoVerticalRelConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegLinetoVerticalRel::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPathSegLinetoVerticalRel"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoVerticalRelPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalRelConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalRelY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegLinetoVerticalRelY) },
};

const ClassInfo JSSVGPathSegLinetoVerticalRelPrototype::s_info = { "SVGPathSegLinetoVerticalRelPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalRelPrototype) };

void JSSVGPathSegLinetoVerticalRelPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPathSegLinetoVerticalRelPrototypeTableValues, *this);
}

const ClassInfo JSSVGPathSegLinetoVerticalRel::s_info = { "SVGPathSegLinetoVerticalRel", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalRel) };

JSSVGPathSegLinetoVerticalRel::JSSVGPathSegLinetoVerticalRel(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegLinetoVerticalRel>&& impl)
    : JSSVGPathSeg(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGPathSegLinetoVerticalRel::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegLinetoVerticalRelPrototype::create(vm, globalObject, JSSVGPathSegLinetoVerticalRelPrototype::createStructure(vm, globalObject, JSSVGPathSeg::getPrototype(vm, globalObject)));
}

JSObject* JSSVGPathSegLinetoVerticalRel::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoVerticalRel>(vm, globalObject);
}

EncodedJSValue jsSVGPathSegLinetoVerticalRelY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegLinetoVerticalRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoVerticalRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoVerticalRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegLinetoVerticalRel", "y");
        return throwGetterTypeError(*exec, "SVGPathSegLinetoVerticalRel", "y");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegLinetoVerticalRelConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPathSegLinetoVerticalRelPrototype* domObject = jsDynamicCast<JSSVGPathSegLinetoVerticalRelPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPathSegLinetoVerticalRel::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPathSegLinetoVerticalRelY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegLinetoVerticalRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoVerticalRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoVerticalRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegLinetoVerticalRel", "y");
        else
            throwSetterTypeError(*exec, "SVGPathSegLinetoVerticalRel", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY(nativeValue);
}


JSValue JSSVGPathSegLinetoVerticalRel::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoVerticalRelConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
