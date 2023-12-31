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
#include "JSHTMLMapElement.h"

#include "HTMLCollection.h"
#include "HTMLMapElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsHTMLMapElementAreas(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLMapElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMapElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMapElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLMapElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLMapElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLMapElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLMapElementPrototype>(vm.heap)) JSHTMLMapElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLMapElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLMapElementConstructor : public DOMConstructorObject {
private:
    JSHTMLMapElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLMapElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLMapElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLMapElementConstructor>(vm.heap)) JSHTMLMapElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLMapElementConstructor::s_info = { "HTMLMapElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLMapElementConstructor) };

JSHTMLMapElementConstructor::JSHTMLMapElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLMapElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLMapElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLMapElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMapElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMapElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "areas", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMapElementAreas), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "name", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMapElementName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMapElementName) },
};

const ClassInfo JSHTMLMapElementPrototype::s_info = { "HTMLMapElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLMapElementPrototype) };

void JSHTMLMapElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLMapElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLMapElement::s_info = { "HTMLMapElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLMapElement) };

JSHTMLMapElement::JSHTMLMapElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLMapElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLMapElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLMapElementPrototype::create(vm, globalObject, JSHTMLMapElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLMapElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMapElement>(vm, globalObject);
}

EncodedJSValue jsHTMLMapElementAreas(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMapElement* castedThis = jsDynamicCast<JSHTMLMapElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMapElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMapElement", "areas");
        return throwGetterTypeError(*exec, "HTMLMapElement", "areas");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.areas()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMapElementName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMapElement* castedThis = jsDynamicCast<JSHTMLMapElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMapElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMapElement", "name");
        return throwGetterTypeError(*exec, "HTMLMapElement", "name");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMapElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLMapElementPrototype* domObject = jsDynamicCast<JSHTMLMapElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLMapElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLMapElementName(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMapElement* castedThis = jsDynamicCast<JSHTMLMapElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMapElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMapElement", "name");
        else
            throwSetterTypeError(*exec, "HTMLMapElement", "name");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::nameAttr, nativeValue);
}


JSValue JSHTMLMapElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMapElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
