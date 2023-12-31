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
#include "JSSVGPathSegCurvetoQuadraticSmoothAbs.h"

#include "JSDOMBinding.h"
#include "SVGPathSegCurvetoQuadraticSmoothAbs.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticSmoothAbsX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticSmoothAbsX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticSmoothAbsY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticSmoothAbsY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticSmoothAbsConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype>(vm.heap)) JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor>(vm.heap)) JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::s_info = { "SVGPathSegCurvetoQuadraticSmoothAbsConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor) };

JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegCurvetoQuadraticSmoothAbs::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPathSegCurvetoQuadraticSmoothAbs"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoQuadraticSmoothAbsPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticSmoothAbsConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticSmoothAbsX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoQuadraticSmoothAbsX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticSmoothAbsY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoQuadraticSmoothAbsY) },
};

const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::s_info = { "SVGPathSegCurvetoQuadraticSmoothAbsPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype) };

void JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPathSegCurvetoQuadraticSmoothAbsPrototypeTableValues, *this);
}

const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothAbs::s_info = { "SVGPathSegCurvetoQuadraticSmoothAbs", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticSmoothAbs) };

JSSVGPathSegCurvetoQuadraticSmoothAbs::JSSVGPathSegCurvetoQuadraticSmoothAbs(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegCurvetoQuadraticSmoothAbs>&& impl)
    : JSSVGPathSeg(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGPathSegCurvetoQuadraticSmoothAbs::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::create(vm, globalObject, JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype::createStructure(vm, globalObject, JSSVGPathSeg::getPrototype(vm, globalObject)));
}

JSObject* JSSVGPathSegCurvetoQuadraticSmoothAbs::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoQuadraticSmoothAbs>(vm, globalObject);
}

EncodedJSValue jsSVGPathSegCurvetoQuadraticSmoothAbsX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "x");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "x");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoQuadraticSmoothAbsY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "y");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "y");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoQuadraticSmoothAbsConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype* domObject = jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPathSegCurvetoQuadraticSmoothAbs::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPathSegCurvetoQuadraticSmoothAbsX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "x");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticSmoothAbsY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoQuadraticSmoothAbs* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbs*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "y");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoQuadraticSmoothAbs", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY(nativeValue);
}


JSValue JSSVGPathSegCurvetoQuadraticSmoothAbs::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
