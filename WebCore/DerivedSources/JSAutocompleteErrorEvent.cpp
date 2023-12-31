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

#if ENABLE(REQUEST_AUTOCOMPLETE)

#include "JSAutocompleteErrorEvent.h"

#include "AutocompleteErrorEvent.h"
#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsAutocompleteErrorEventReason(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsAutocompleteErrorEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSAutocompleteErrorEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSAutocompleteErrorEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAutocompleteErrorEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSAutocompleteErrorEventPrototype>(vm.heap)) JSAutocompleteErrorEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSAutocompleteErrorEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSAutocompleteErrorEventConstructor : public DOMConstructorObject {
private:
    JSAutocompleteErrorEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAutocompleteErrorEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAutocompleteErrorEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSAutocompleteErrorEventConstructor>(vm.heap)) JSAutocompleteErrorEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSAutocompleteErrorEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

/* Hash table */

static const struct CompactHashIndex JSAutocompleteErrorEventTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};


static const HashTableValue JSAutocompleteErrorEventTableValues[] =
{
    { "reason", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAutocompleteErrorEventReason), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSAutocompleteErrorEventTable = { 1, 1, true, JSAutocompleteErrorEventTableValues, 0, JSAutocompleteErrorEventTableIndex };
EncodedJSValue JSC_HOST_CALL JSAutocompleteErrorEventConstructor::constructJSAutocompleteErrorEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSAutocompleteErrorEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    AutocompleteErrorEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillAutocompleteErrorEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<AutocompleteErrorEvent> event = AutocompleteErrorEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillAutocompleteErrorEventInit(AutocompleteErrorEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("reason", eventInit.reason))
        return false;
    return true;
}

const ClassInfo JSAutocompleteErrorEventConstructor::s_info = { "AutocompleteErrorEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAutocompleteErrorEventConstructor) };

JSAutocompleteErrorEventConstructor::JSAutocompleteErrorEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAutocompleteErrorEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSAutocompleteErrorEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("AutocompleteErrorEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSAutocompleteErrorEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSAutocompleteErrorEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSAutocompleteErrorEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAutocompleteErrorEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSAutocompleteErrorEventPrototype::s_info = { "AutocompleteErrorEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAutocompleteErrorEventPrototype) };

void JSAutocompleteErrorEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSAutocompleteErrorEventPrototypeTableValues, *this);
}

const ClassInfo JSAutocompleteErrorEvent::s_info = { "AutocompleteErrorEvent", &Base::s_info, &JSAutocompleteErrorEventTable, CREATE_METHOD_TABLE(JSAutocompleteErrorEvent) };

JSAutocompleteErrorEvent::JSAutocompleteErrorEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<AutocompleteErrorEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSAutocompleteErrorEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSAutocompleteErrorEventPrototype::create(vm, globalObject, JSAutocompleteErrorEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSAutocompleteErrorEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAutocompleteErrorEvent>(vm, globalObject);
}

bool JSAutocompleteErrorEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSAutocompleteErrorEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSAutocompleteErrorEvent, Base>(exec, JSAutocompleteErrorEventTable, thisObject, propertyName, slot);
}

EncodedJSValue jsAutocompleteErrorEventReason(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAutocompleteErrorEvent*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.reason());
    return JSValue::encode(result);
}


EncodedJSValue jsAutocompleteErrorEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSAutocompleteErrorEventPrototype* domObject = jsDynamicCast<JSAutocompleteErrorEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSAutocompleteErrorEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSAutocompleteErrorEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAutocompleteErrorEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7AutocompleteErrorEvent@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore22AutocompleteErrorEventE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, AutocompleteErrorEvent* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAutocompleteErrorEvent>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7AutocompleteErrorEvent@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore22AutocompleteErrorEventE[2];
#if COMPILER(CLANG)
    // If this fails AutocompleteErrorEvent does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(AutocompleteErrorEvent), AutocompleteErrorEvent_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // AutocompleteErrorEvent has subclasses. If AutocompleteErrorEvent has subclasses that get passed
    // to toJS() we currently require AutocompleteErrorEvent you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSAutocompleteErrorEvent>(globalObject, impl);
}


}

#endif // ENABLE(REQUEST_AUTOCOMPLETE)
