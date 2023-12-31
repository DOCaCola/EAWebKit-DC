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

#if ENABLE(CSS_DEVICE_ADAPTATION)

#include "JSWebKitCSSViewportRule.h"

#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSDOMBinding.h"
#include "StyleProperties.h"
#include "WebKitCSSViewportRule.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebKitCSSViewportRuleStyle(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebKitCSSViewportRuleConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebKitCSSViewportRulePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebKitCSSViewportRulePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitCSSViewportRulePrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSViewportRulePrototype>(vm.heap)) JSWebKitCSSViewportRulePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebKitCSSViewportRulePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebKitCSSViewportRuleConstructor : public DOMConstructorObject {
private:
    JSWebKitCSSViewportRuleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitCSSViewportRuleConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitCSSViewportRuleConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSViewportRuleConstructor>(vm.heap)) JSWebKitCSSViewportRuleConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSWebKitCSSViewportRuleConstructor::s_info = { "WebKitCSSViewportRuleConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitCSSViewportRuleConstructor) };

JSWebKitCSSViewportRuleConstructor::JSWebKitCSSViewportRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitCSSViewportRuleConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitCSSViewportRule::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebKitCSSViewportRule"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSViewportRulePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSViewportRuleConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "style", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSViewportRuleStyle), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSWebKitCSSViewportRulePrototype::s_info = { "WebKitCSSViewportRulePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitCSSViewportRulePrototype) };

void JSWebKitCSSViewportRulePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebKitCSSViewportRulePrototypeTableValues, *this);
}

const ClassInfo JSWebKitCSSViewportRule::s_info = { "WebKitCSSViewportRule", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitCSSViewportRule) };

JSWebKitCSSViewportRule::JSWebKitCSSViewportRule(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebKitCSSViewportRule>&& impl)
    : JSCSSRule(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSWebKitCSSViewportRule::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitCSSViewportRulePrototype::create(vm, globalObject, JSWebKitCSSViewportRulePrototype::createStructure(vm, globalObject, JSCSSRule::getPrototype(vm, globalObject)));
}

JSObject* JSWebKitCSSViewportRule::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSViewportRule>(vm, globalObject);
}

EncodedJSValue jsWebKitCSSViewportRuleStyle(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebKitCSSViewportRule* castedThis = jsDynamicCast<JSWebKitCSSViewportRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitCSSViewportRulePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebKitCSSViewportRule", "style");
        return throwGetterTypeError(*exec, "WebKitCSSViewportRule", "style");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.style()));
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitCSSViewportRuleConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebKitCSSViewportRulePrototype* domObject = jsDynamicCast<JSWebKitCSSViewportRulePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebKitCSSViewportRule::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebKitCSSViewportRule::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSViewportRuleConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(CSS_DEVICE_ADAPTATION)
