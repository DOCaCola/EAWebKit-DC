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
#include "JSHTMLTableSectionElement.h"

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLNames.h"
#include "HTMLTableSectionElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionInsertRow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionDeleteRow(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLTableSectionElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableSectionElementCh(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementCh(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableSectionElementChOff(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementChOff(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableSectionElementVAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementVAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableSectionElementRows(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLTableSectionElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLTableSectionElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLTableSectionElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLTableSectionElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableSectionElementPrototype>(vm.heap)) JSHTMLTableSectionElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLTableSectionElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLTableSectionElementConstructor : public DOMConstructorObject {
private:
    JSHTMLTableSectionElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLTableSectionElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLTableSectionElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableSectionElementConstructor>(vm.heap)) JSHTMLTableSectionElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLTableSectionElementConstructor::s_info = { "HTMLTableSectionElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLTableSectionElementConstructor) };

JSHTMLTableSectionElementConstructor::JSHTMLTableSectionElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLTableSectionElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLTableSectionElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLTableSectionElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableSectionElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "align", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementAlign), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableSectionElementAlign) },
    { "ch", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementCh), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableSectionElementCh) },
    { "chOff", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementChOff), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableSectionElementChOff) },
    { "vAlign", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementVAlign), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableSectionElementVAlign) },
    { "rows", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableSectionElementRows), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "insertRow", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLTableSectionElementPrototypeFunctionInsertRow), (intptr_t) (0) },
    { "deleteRow", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLTableSectionElementPrototypeFunctionDeleteRow), (intptr_t) (0) },
};

const ClassInfo JSHTMLTableSectionElementPrototype::s_info = { "HTMLTableSectionElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLTableSectionElementPrototype) };

void JSHTMLTableSectionElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLTableSectionElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLTableSectionElement::s_info = { "HTMLTableSectionElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLTableSectionElement) };

JSHTMLTableSectionElement::JSHTMLTableSectionElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLTableSectionElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLTableSectionElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLTableSectionElementPrototype::create(vm, globalObject, JSHTMLTableSectionElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLTableSectionElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableSectionElement>(vm, globalObject);
}

EncodedJSValue jsHTMLTableSectionElementAlign(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableSectionElement", "align");
        return throwGetterTypeError(*exec, "HTMLTableSectionElement", "align");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableSectionElementCh(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableSectionElement", "ch");
        return throwGetterTypeError(*exec, "HTMLTableSectionElement", "ch");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::charAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableSectionElementChOff(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableSectionElement", "chOff");
        return throwGetterTypeError(*exec, "HTMLTableSectionElement", "chOff");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::charoffAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableSectionElementVAlign(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableSectionElement", "vAlign");
        return throwGetterTypeError(*exec, "HTMLTableSectionElement", "vAlign");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::valignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableSectionElementRows(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableSectionElement", "rows");
        return throwGetterTypeError(*exec, "HTMLTableSectionElement", "rows");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.rows()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableSectionElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLTableSectionElementPrototype* domObject = jsDynamicCast<JSHTMLTableSectionElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLTableSectionElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLTableSectionElementAlign(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableSectionElement", "align");
        else
            throwSetterTypeError(*exec, "HTMLTableSectionElement", "align");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::alignAttr, nativeValue);
}


void setJSHTMLTableSectionElementCh(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableSectionElement", "ch");
        else
            throwSetterTypeError(*exec, "HTMLTableSectionElement", "ch");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::charAttr, nativeValue);
}


void setJSHTMLTableSectionElementChOff(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableSectionElement", "chOff");
        else
            throwSetterTypeError(*exec, "HTMLTableSectionElement", "chOff");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::charoffAttr, nativeValue);
}


void setJSHTMLTableSectionElementVAlign(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableSectionElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableSectionElement", "vAlign");
        else
            throwSetterTypeError(*exec, "HTMLTableSectionElement", "vAlign");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::valignAttr, nativeValue);
}


JSValue JSHTMLTableSectionElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableSectionElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionInsertRow(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLTableSectionElement", "insertRow");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLTableSectionElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.insertRow(ec)));

        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    int index = toInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.insertRow(index, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionDeleteRow(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLTableSectionElement* castedThis = jsDynamicCast<JSHTMLTableSectionElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLTableSectionElement", "deleteRow");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLTableSectionElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int index = toInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.deleteRow(index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

HTMLTableSectionElement* JSHTMLTableSectionElement::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSHTMLTableSectionElement*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
