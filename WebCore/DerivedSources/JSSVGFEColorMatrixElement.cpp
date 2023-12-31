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
#include "JSSVGFEColorMatrixElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumberList.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEColorMatrixElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGFEColorMatrixElementIn1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementValues(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEColorMatrixElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFEColorMatrixElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFEColorMatrixElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFEColorMatrixElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFEColorMatrixElementPrototype>(vm.heap)) JSSVGFEColorMatrixElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFEColorMatrixElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFEColorMatrixElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEColorMatrixElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEColorMatrixElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEColorMatrixElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFEColorMatrixElementConstructor>(vm.heap)) JSSVGFEColorMatrixElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table for constructor */

static const HashTableValue JSSVGFEColorMatrixElementConstructorTableValues[] =
{
    { "SVG_FECOLORMATRIX_TYPE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_MATRIX", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_SATURATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_HUEROTATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
};

const ClassInfo JSSVGFEColorMatrixElementConstructor::s_info = { "SVGFEColorMatrixElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEColorMatrixElementConstructor) };

JSSVGFEColorMatrixElementConstructor::JSSVGFEColorMatrixElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEColorMatrixElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEColorMatrixElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFEColorMatrixElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSSVGFEColorMatrixElementConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEColorMatrixElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "in1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementIn1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "values", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementValues), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "SVG_FECOLORMATRIX_TYPE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_MATRIX", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_SATURATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_HUEROTATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
};

const ClassInfo JSSVGFEColorMatrixElementPrototype::s_info = { "SVGFEColorMatrixElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEColorMatrixElementPrototype) };

void JSSVGFEColorMatrixElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFEColorMatrixElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFEColorMatrixElement::s_info = { "SVGFEColorMatrixElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEColorMatrixElement) };

JSSVGFEColorMatrixElement::JSSVGFEColorMatrixElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFEColorMatrixElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFEColorMatrixElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEColorMatrixElementPrototype::create(vm, globalObject, JSSVGFEColorMatrixElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFEColorMatrixElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEColorMatrixElement>(vm, globalObject);
}

EncodedJSValue jsSVGFEColorMatrixElementIn1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "in1");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "in1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "type");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "type");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.typeAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementValues(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "values");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "values");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumberList> obj = impl.valuesAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "x");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "y");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "width");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "height");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEColorMatrixElement", "result");
        return throwGetterTypeError(*exec, "SVGFEColorMatrixElement", "result");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFEColorMatrixElementPrototype* domObject = jsDynamicCast<JSSVGFEColorMatrixElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFEColorMatrixElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFEColorMatrixElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEColorMatrixElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
