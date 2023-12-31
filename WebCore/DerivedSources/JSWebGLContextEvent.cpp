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

#if ENABLE(WEBGL)

#include "JSWebGLContextEvent.h"

#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "URL.h"
#include "WebGLContextEvent.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebGLContextEventStatusMessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLContextEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebGLContextEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebGLContextEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLContextEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLContextEventPrototype>(vm.heap)) JSWebGLContextEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLContextEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebGLContextEventConstructor : public DOMConstructorObject {
private:
    JSWebGLContextEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLContextEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLContextEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLContextEventConstructor>(vm.heap)) JSWebGLContextEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebGLContextEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSWebGLContextEventConstructor::constructJSWebGLContextEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSWebGLContextEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    WebGLContextEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillWebGLContextEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<WebGLContextEvent> event = WebGLContextEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillWebGLContextEventInit(WebGLContextEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("statusMessage", eventInit.statusMessage))
        return false;
    return true;
}

const ClassInfo JSWebGLContextEventConstructor::s_info = { "WebGLContextEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLContextEventConstructor) };

JSWebGLContextEventConstructor::JSWebGLContextEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLContextEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebGLContextEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebGLContextEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSWebGLContextEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebGLContextEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebGLContextEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLContextEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "statusMessage", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLContextEventStatusMessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSWebGLContextEventPrototype::s_info = { "WebGLContextEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLContextEventPrototype) };

void JSWebGLContextEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebGLContextEventPrototypeTableValues, *this);
}

const ClassInfo JSWebGLContextEvent::s_info = { "WebGLContextEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLContextEvent) };

JSWebGLContextEvent::JSWebGLContextEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGLContextEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSWebGLContextEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLContextEventPrototype::create(vm, globalObject, JSWebGLContextEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSWebGLContextEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLContextEvent>(vm, globalObject);
}

EncodedJSValue jsWebGLContextEventStatusMessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebGLContextEvent* castedThis = jsDynamicCast<JSWebGLContextEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebGLContextEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebGLContextEvent", "statusMessage");
        return throwGetterTypeError(*exec, "WebGLContextEvent", "statusMessage");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.statusMessage());
    return JSValue::encode(result);
}


EncodedJSValue jsWebGLContextEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebGLContextEventPrototype* domObject = jsDynamicCast<JSWebGLContextEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebGLContextEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebGLContextEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLContextEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(WEBGL)
