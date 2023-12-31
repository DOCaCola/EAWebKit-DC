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
#include "JSHTMLOutputElement.h"

#include "DOMSettableTokenList.h"
#include "ExceptionCode.h"
#include "HTMLFormElement.h"
#include "HTMLNames.h"
#include "HTMLOutputElement.h"
#include "JSDOMBinding.h"
#include "JSDOMSettableTokenList.h"
#include "JSHTMLFormElement.h"
#include "JSNodeList.h"
#include "JSValidityState.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include "URL.h"
#include "ValidityState.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLOutputElementPrototypeFunctionCheckValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLOutputElementPrototypeFunctionSetCustomValidity(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLOutputElementHtmlFor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementForm(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLOutputElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLOutputElementType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementDefaultValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLOutputElementDefaultValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLOutputElementValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLOutputElementValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLOutputElementWillValidate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementValidity(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementValidationMessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementLabels(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLOutputElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLOutputElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLOutputElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLOutputElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLOutputElementPrototype>(vm.heap)) JSHTMLOutputElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLOutputElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLOutputElementConstructor : public DOMConstructorObject {
private:
    JSHTMLOutputElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLOutputElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLOutputElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLOutputElementConstructor>(vm.heap)) JSHTMLOutputElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLOutputElementConstructor::s_info = { "HTMLOutputElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLOutputElementConstructor) };

JSHTMLOutputElementConstructor::JSHTMLOutputElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLOutputElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLOutputElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLOutputElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLOutputElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "htmlFor", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementHtmlFor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "form", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementForm), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "name", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLOutputElementName) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "defaultValue", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementDefaultValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLOutputElementDefaultValue) },
    { "value", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLOutputElementValue) },
    { "willValidate", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementWillValidate), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "validity", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementValidity), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "validationMessage", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementValidationMessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "labels", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOutputElementLabels), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "checkValidity", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLOutputElementPrototypeFunctionCheckValidity), (intptr_t) (0) },
    { "setCustomValidity", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLOutputElementPrototypeFunctionSetCustomValidity), (intptr_t) (1) },
};

const ClassInfo JSHTMLOutputElementPrototype::s_info = { "HTMLOutputElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLOutputElementPrototype) };

void JSHTMLOutputElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLOutputElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLOutputElement::s_info = { "HTMLOutputElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLOutputElement) };

JSHTMLOutputElement::JSHTMLOutputElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLOutputElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLOutputElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLOutputElementPrototype::create(vm, globalObject, JSHTMLOutputElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLOutputElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLOutputElement>(vm, globalObject);
}

EncodedJSValue jsHTMLOutputElementHtmlFor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "htmlFor");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "htmlFor");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.htmlFor()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementForm(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "form");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "form");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.form()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "name");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "name");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "type");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "type");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementDefaultValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "defaultValue");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "defaultValue");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.defaultValue());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "value");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "value");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.value());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementWillValidate(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "willValidate");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "willValidate");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.willValidate());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementValidity(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "validity");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "validity");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.validity()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementValidationMessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "validationMessage");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "validationMessage");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.validationMessage());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementLabels(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLOutputElement", "labels");
        return throwGetterTypeError(*exec, "HTMLOutputElement", "labels");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.labels()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLOutputElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLOutputElementPrototype* domObject = jsDynamicCast<JSHTMLOutputElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLOutputElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLOutputElementName(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLOutputElement", "name");
        else
            throwSetterTypeError(*exec, "HTMLOutputElement", "name");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLOutputElementDefaultValue(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLOutputElement", "defaultValue");
        else
            throwSetterTypeError(*exec, "HTMLOutputElement", "defaultValue");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDefaultValue(nativeValue);
}


void setJSHTMLOutputElementValue(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLOutputElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLOutputElement", "value");
        else
            throwSetterTypeError(*exec, "HTMLOutputElement", "value");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setValue(nativeValue);
}


JSValue JSHTMLOutputElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLOutputElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLOutputElementPrototypeFunctionCheckValidity(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLOutputElement", "checkValidity");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLOutputElement::info());
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.checkValidity());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLOutputElementPrototypeFunctionSetCustomValidity(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLOutputElement* castedThis = jsDynamicCast<JSHTMLOutputElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLOutputElement", "setCustomValidity");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLOutputElement::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    String error = valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setCustomValidity(error);
    return JSValue::encode(jsUndefined());
}


}
