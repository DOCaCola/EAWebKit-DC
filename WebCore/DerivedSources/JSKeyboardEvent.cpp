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
#include "JSKeyboardEvent.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDictionary.h"
#include "KeyboardEvent.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsKeyboardEventPrototypeFunctionInitKeyboardEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsKeyboardEventKeyIdentifier(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventLocation(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventKeyLocation(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventCtrlKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventShiftKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventAltKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventMetaKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventAltGraphKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsKeyboardEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSKeyboardEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSKeyboardEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSKeyboardEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSKeyboardEventPrototype>(vm.heap)) JSKeyboardEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSKeyboardEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSKeyboardEventConstructor : public DOMConstructorObject {
private:
    JSKeyboardEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSKeyboardEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSKeyboardEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSKeyboardEventConstructor>(vm.heap)) JSKeyboardEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSKeyboardEvent(JSC::ExecState*);
#if ENABLE(DOM4_EVENTS_CONSTRUCTOR)
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
#endif // ENABLE(DOM4_EVENTS_CONSTRUCTOR)
};

/* Hash table for constructor */

static const HashTableValue JSKeyboardEventConstructorTableValues[] =
{
    { "DOM_KEY_LOCATION_STANDARD", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x00), (intptr_t) (0) },
    { "DOM_KEY_LOCATION_LEFT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x01), (intptr_t) (0) },
    { "DOM_KEY_LOCATION_RIGHT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x02), (intptr_t) (0) },
    { "DOM_KEY_LOCATION_NUMPAD", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x03), (intptr_t) (0) },
};


COMPILE_ASSERT(0x00 == KeyboardEvent::DOM_KEY_LOCATION_STANDARD, KeyboardEventEnumDOM_KEY_LOCATION_STANDARDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x01 == KeyboardEvent::DOM_KEY_LOCATION_LEFT, KeyboardEventEnumDOM_KEY_LOCATION_LEFTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x02 == KeyboardEvent::DOM_KEY_LOCATION_RIGHT, KeyboardEventEnumDOM_KEY_LOCATION_RIGHTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x03 == KeyboardEvent::DOM_KEY_LOCATION_NUMPAD, KeyboardEventEnumDOM_KEY_LOCATION_NUMPADIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSKeyboardEventConstructor::constructJSKeyboardEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSKeyboardEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    KeyboardEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillKeyboardEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<KeyboardEvent> event = KeyboardEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillKeyboardEventInit(KeyboardEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillUIEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("keyIdentifier", eventInit.keyIdentifier))
        return false;
    if (!dictionary.tryGetProperty("location", eventInit.location))
        return false;
    if (!dictionary.tryGetProperty("keyLocation", eventInit.location))
        return false;
    if (!dictionary.tryGetProperty("ctrlKey", eventInit.ctrlKey))
        return false;
    if (!dictionary.tryGetProperty("shiftKey", eventInit.shiftKey))
        return false;
    if (!dictionary.tryGetProperty("altKey", eventInit.altKey))
        return false;
    if (!dictionary.tryGetProperty("metaKey", eventInit.metaKey))
        return false;
    return true;
}

const ClassInfo JSKeyboardEventConstructor::s_info = { "KeyboardEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSKeyboardEventConstructor) };

JSKeyboardEventConstructor::JSKeyboardEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSKeyboardEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSKeyboardEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("KeyboardEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSKeyboardEventConstructorTableValues, *this);
}

#if ENABLE(DOM4_EVENTS_CONSTRUCTOR)
ConstructType JSKeyboardEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSKeyboardEvent;
    return ConstructTypeHost;
}
#endif // ENABLE(DOM4_EVENTS_CONSTRUCTOR)

/* Hash table for prototype */

static const HashTableValue JSKeyboardEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "keyIdentifier", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventKeyIdentifier), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "location", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventLocation), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "keyLocation", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventKeyLocation), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "ctrlKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventCtrlKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "shiftKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventShiftKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "altKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventAltKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "metaKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventMetaKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "altGraphKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsKeyboardEventAltGraphKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "DOM_KEY_LOCATION_STANDARD", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x00), (intptr_t) (0) },
    { "DOM_KEY_LOCATION_LEFT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x01), (intptr_t) (0) },
    { "DOM_KEY_LOCATION_RIGHT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x02), (intptr_t) (0) },
    { "DOM_KEY_LOCATION_NUMPAD", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x03), (intptr_t) (0) },
    { "initKeyboardEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsKeyboardEventPrototypeFunctionInitKeyboardEvent), (intptr_t) (0) },
};

const ClassInfo JSKeyboardEventPrototype::s_info = { "KeyboardEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSKeyboardEventPrototype) };

void JSKeyboardEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSKeyboardEventPrototypeTableValues, *this);
}

const ClassInfo JSKeyboardEvent::s_info = { "KeyboardEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSKeyboardEvent) };

JSKeyboardEvent::JSKeyboardEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<KeyboardEvent>&& impl)
    : JSUIEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSKeyboardEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSKeyboardEventPrototype::create(vm, globalObject, JSKeyboardEventPrototype::createStructure(vm, globalObject, JSUIEvent::getPrototype(vm, globalObject)));
}

JSObject* JSKeyboardEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSKeyboardEvent>(vm, globalObject);
}

EncodedJSValue jsKeyboardEventKeyIdentifier(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "keyIdentifier");
        return throwGetterTypeError(*exec, "KeyboardEvent", "keyIdentifier");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.keyIdentifier());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventLocation(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "location");
        return throwGetterTypeError(*exec, "KeyboardEvent", "location");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.location());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventKeyLocation(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "keyLocation");
        return throwGetterTypeError(*exec, "KeyboardEvent", "keyLocation");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.location());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventCtrlKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "ctrlKey");
        return throwGetterTypeError(*exec, "KeyboardEvent", "ctrlKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.ctrlKey());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventShiftKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "shiftKey");
        return throwGetterTypeError(*exec, "KeyboardEvent", "shiftKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.shiftKey());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventAltKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "altKey");
        return throwGetterTypeError(*exec, "KeyboardEvent", "altKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.altKey());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventMetaKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "metaKey");
        return throwGetterTypeError(*exec, "KeyboardEvent", "metaKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.metaKey());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventAltGraphKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSKeyboardEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "KeyboardEvent", "altGraphKey");
        return throwGetterTypeError(*exec, "KeyboardEvent", "altGraphKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.altGraphKey());
    return JSValue::encode(result);
}


EncodedJSValue jsKeyboardEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSKeyboardEventPrototype* domObject = jsDynamicCast<JSKeyboardEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSKeyboardEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSKeyboardEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSKeyboardEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsKeyboardEventPrototypeFunctionInitKeyboardEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSKeyboardEvent* castedThis = jsDynamicCast<JSKeyboardEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "KeyboardEvent", "initKeyboardEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSKeyboardEvent::info());
    auto& impl = castedThis->impl();
    String type = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool canBubble = exec->argument(1).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool cancelable = exec->argument(2).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    DOMWindow* view = JSDOMWindow::toWrapped(exec->argument(3));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String keyIdentifier = exec->argument(4).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    unsigned location = toUInt32(exec, exec->argument(5), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool ctrlKey = exec->argument(6).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool altKey = exec->argument(7).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool shiftKey = exec->argument(8).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool metaKey = exec->argument(9).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool altGraphKey = exec->argument(10).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.initKeyboardEvent(type, canBubble, cancelable, view, keyIdentifier, location, ctrlKey, altKey, shiftKey, metaKey, altGraphKey);
    return JSValue::encode(jsUndefined());
}


}
