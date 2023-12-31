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
#include "JSHTMLDirectoryElement.h"

#include "HTMLDirectoryElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsHTMLDirectoryElementCompact(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDirectoryElementCompact(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDirectoryElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLDirectoryElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLDirectoryElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLDirectoryElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLDirectoryElementPrototype>(vm.heap)) JSHTMLDirectoryElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLDirectoryElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLDirectoryElementConstructor : public DOMConstructorObject {
private:
    JSHTMLDirectoryElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLDirectoryElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLDirectoryElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLDirectoryElementConstructor>(vm.heap)) JSHTMLDirectoryElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLDirectoryElementConstructor::s_info = { "HTMLDirectoryElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLDirectoryElementConstructor) };

JSHTMLDirectoryElementConstructor::JSHTMLDirectoryElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLDirectoryElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLDirectoryElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLDirectoryElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDirectoryElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDirectoryElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "compact", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDirectoryElementCompact), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDirectoryElementCompact) },
};

const ClassInfo JSHTMLDirectoryElementPrototype::s_info = { "HTMLDirectoryElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLDirectoryElementPrototype) };

void JSHTMLDirectoryElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLDirectoryElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLDirectoryElement::s_info = { "HTMLDirectoryElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLDirectoryElement) };

JSHTMLDirectoryElement::JSHTMLDirectoryElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLDirectoryElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLDirectoryElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLDirectoryElementPrototype::create(vm, globalObject, JSHTMLDirectoryElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLDirectoryElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDirectoryElement>(vm, globalObject);
}

EncodedJSValue jsHTMLDirectoryElementCompact(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLDirectoryElement* castedThis = jsDynamicCast<JSHTMLDirectoryElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLDirectoryElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLDirectoryElement", "compact");
        return throwGetterTypeError(*exec, "HTMLDirectoryElement", "compact");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::compactAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDirectoryElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLDirectoryElementPrototype* domObject = jsDynamicCast<JSHTMLDirectoryElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLDirectoryElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLDirectoryElementCompact(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLDirectoryElement* castedThis = jsDynamicCast<JSHTMLDirectoryElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLDirectoryElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLDirectoryElement", "compact");
        else
            throwSetterTypeError(*exec, "HTMLDirectoryElement", "compact");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::compactAttr, nativeValue);
}


JSValue JSHTMLDirectoryElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDirectoryElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
