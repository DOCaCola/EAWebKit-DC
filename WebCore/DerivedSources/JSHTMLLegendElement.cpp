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
#include "JSHTMLLegendElement.h"

#include "HTMLFormElement.h"
#include "HTMLLegendElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSHTMLFormElement.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsHTMLLegendElementForm(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLLegendElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLLegendElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLLegendElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLLegendElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLLegendElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLLegendElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLLegendElementPrototype>(vm.heap)) JSHTMLLegendElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLLegendElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLLegendElementConstructor : public DOMConstructorObject {
private:
    JSHTMLLegendElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLLegendElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLLegendElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLLegendElementConstructor>(vm.heap)) JSHTMLLegendElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLLegendElementConstructor::s_info = { "HTMLLegendElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLLegendElementConstructor) };

JSHTMLLegendElementConstructor::JSHTMLLegendElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLLegendElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLLegendElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLLegendElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLLegendElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLegendElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "form", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLegendElementForm), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "align", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLegendElementAlign), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLLegendElementAlign) },
};

const ClassInfo JSHTMLLegendElementPrototype::s_info = { "HTMLLegendElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLLegendElementPrototype) };

void JSHTMLLegendElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLLegendElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLLegendElement::s_info = { "HTMLLegendElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLLegendElement) };

JSHTMLLegendElement::JSHTMLLegendElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLLegendElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLLegendElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLLegendElementPrototype::create(vm, globalObject, JSHTMLLegendElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLLegendElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLLegendElement>(vm, globalObject);
}

EncodedJSValue jsHTMLLegendElementForm(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLLegendElement* castedThis = jsDynamicCast<JSHTMLLegendElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLLegendElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLLegendElement", "form");
        return throwGetterTypeError(*exec, "HTMLLegendElement", "form");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.form()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLLegendElementAlign(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLLegendElement* castedThis = jsDynamicCast<JSHTMLLegendElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLLegendElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLLegendElement", "align");
        return throwGetterTypeError(*exec, "HTMLLegendElement", "align");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLLegendElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLLegendElementPrototype* domObject = jsDynamicCast<JSHTMLLegendElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLLegendElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLLegendElementAlign(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLLegendElement* castedThis = jsDynamicCast<JSHTMLLegendElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLLegendElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLLegendElement", "align");
        else
            throwSetterTypeError(*exec, "HTMLLegendElement", "align");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::alignAttr, nativeValue);
}


JSValue JSHTMLLegendElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLLegendElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
