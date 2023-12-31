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
#include "JSCustomEvent.h"

#include "CustomEvent.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include <bindings/ScriptValue.h>
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCustomEventPrototypeFunctionInitCustomEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsCustomEventDetail(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCustomEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSCustomEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSCustomEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCustomEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSCustomEventPrototype>(vm.heap)) JSCustomEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSCustomEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSCustomEventConstructor : public DOMConstructorObject {
private:
    JSCustomEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCustomEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCustomEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSCustomEventConstructor>(vm.heap)) JSCustomEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSCustomEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

/* Hash table */

static const struct CompactHashIndex JSCustomEventTableIndex[2] = {
    { 0, -1 },
    { -1, -1 },
};


static const HashTableValue JSCustomEventTableValues[] =
{
    { "detail", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCustomEventDetail), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSCustomEventTable = { 1, 1, true, JSCustomEventTableValues, 0, JSCustomEventTableIndex };
EncodedJSValue JSC_HOST_CALL JSCustomEventConstructor::constructJSCustomEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSCustomEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    CustomEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillCustomEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<CustomEvent> event = CustomEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillCustomEventInit(CustomEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("detail", eventInit.detail))
        return false;
    return true;
}

const ClassInfo JSCustomEventConstructor::s_info = { "CustomEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCustomEventConstructor) };

JSCustomEventConstructor::JSCustomEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCustomEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCustomEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("CustomEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSCustomEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSCustomEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSCustomEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCustomEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "initCustomEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCustomEventPrototypeFunctionInitCustomEvent), (intptr_t) (0) },
};

const ClassInfo JSCustomEventPrototype::s_info = { "CustomEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCustomEventPrototype) };

void JSCustomEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSCustomEventPrototypeTableValues, *this);
}

const ClassInfo JSCustomEvent::s_info = { "CustomEvent", &Base::s_info, &JSCustomEventTable, CREATE_METHOD_TABLE(JSCustomEvent) };

JSCustomEvent::JSCustomEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<CustomEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSCustomEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCustomEventPrototype::create(vm, globalObject, JSCustomEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSCustomEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCustomEvent>(vm, globalObject);
}

bool JSCustomEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSCustomEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSCustomEvent, Base>(exec, JSCustomEventTable, thisObject, propertyName, slot);
}

EncodedJSValue jsCustomEventDetail(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSCustomEvent*>(slotBase);
    return JSValue::encode(castedThis->detail(exec));
}


EncodedJSValue jsCustomEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSCustomEventPrototype* domObject = jsDynamicCast<JSCustomEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSCustomEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSCustomEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCustomEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCustomEventPrototypeFunctionInitCustomEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSCustomEvent* castedThis = jsDynamicCast<JSCustomEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "CustomEvent", "initCustomEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCustomEvent::info());
    auto& impl = castedThis->impl();
    String typeArg = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool canBubbleArg = exec->argument(1).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool cancelableArg = exec->argument(2).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    Deprecated::ScriptValue detailArg = { exec->vm(), exec->argument(3) };
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.initCustomEvent(typeArg, canBubbleArg, cancelableArg, detailArg);
    return JSValue::encode(jsUndefined());
}


}
