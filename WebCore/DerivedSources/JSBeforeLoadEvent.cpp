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
#include "JSBeforeLoadEvent.h"

#include "BeforeLoadEvent.h"
#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsBeforeLoadEventUrl(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsBeforeLoadEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSBeforeLoadEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSBeforeLoadEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSBeforeLoadEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSBeforeLoadEventPrototype>(vm.heap)) JSBeforeLoadEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSBeforeLoadEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSBeforeLoadEventConstructor : public DOMConstructorObject {
private:
    JSBeforeLoadEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSBeforeLoadEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSBeforeLoadEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSBeforeLoadEventConstructor>(vm.heap)) JSBeforeLoadEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSBeforeLoadEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSBeforeLoadEventConstructor::constructJSBeforeLoadEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSBeforeLoadEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    BeforeLoadEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillBeforeLoadEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<BeforeLoadEvent> event = BeforeLoadEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillBeforeLoadEventInit(BeforeLoadEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("url", eventInit.url))
        return false;
    return true;
}

const ClassInfo JSBeforeLoadEventConstructor::s_info = { "BeforeLoadEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBeforeLoadEventConstructor) };

JSBeforeLoadEventConstructor::JSBeforeLoadEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSBeforeLoadEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSBeforeLoadEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("BeforeLoadEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSBeforeLoadEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSBeforeLoadEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSBeforeLoadEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBeforeLoadEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "url", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBeforeLoadEventUrl), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSBeforeLoadEventPrototype::s_info = { "BeforeLoadEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBeforeLoadEventPrototype) };

void JSBeforeLoadEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSBeforeLoadEventPrototypeTableValues, *this);
}

const ClassInfo JSBeforeLoadEvent::s_info = { "BeforeLoadEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBeforeLoadEvent) };

JSBeforeLoadEvent::JSBeforeLoadEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<BeforeLoadEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSBeforeLoadEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSBeforeLoadEventPrototype::create(vm, globalObject, JSBeforeLoadEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSBeforeLoadEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBeforeLoadEvent>(vm, globalObject);
}

EncodedJSValue jsBeforeLoadEventUrl(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSBeforeLoadEvent* castedThis = jsDynamicCast<JSBeforeLoadEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSBeforeLoadEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "BeforeLoadEvent", "url");
        return throwGetterTypeError(*exec, "BeforeLoadEvent", "url");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.url());
    return JSValue::encode(result);
}


EncodedJSValue jsBeforeLoadEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSBeforeLoadEventPrototype* domObject = jsDynamicCast<JSBeforeLoadEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSBeforeLoadEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSBeforeLoadEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBeforeLoadEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
