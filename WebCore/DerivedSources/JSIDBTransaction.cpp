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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBTransaction.h"

#include "DOMError.h"
#include "ExceptionCode.h"
#include "IDBDatabase.h"
#include "IDBObjectStore.h"
#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include "JSDOMError.h"
#include "JSEventListener.h"
#include "JSIDBDatabase.h"
#include "JSIDBObjectStore.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionObjectStore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionAbort(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsIDBTransactionMode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBTransactionDb(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBTransactionError(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBTransactionOnabort(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSIDBTransactionOnabort(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsIDBTransactionOncomplete(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSIDBTransactionOncomplete(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsIDBTransactionOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSIDBTransactionOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsIDBTransactionConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSIDBTransactionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSIDBTransactionPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBTransactionPrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBTransactionPrototype>(vm.heap)) JSIDBTransactionPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSIDBTransactionPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSIDBTransactionConstructor : public DOMConstructorObject {
private:
    JSIDBTransactionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBTransactionConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBTransactionConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBTransactionConstructor>(vm.heap)) JSIDBTransactionConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSIDBTransactionConstructor::s_info = { "IDBTransactionConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBTransactionConstructor) };

JSIDBTransactionConstructor::JSIDBTransactionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBTransactionConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSIDBTransaction::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("IDBTransaction"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSIDBTransactionPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "mode", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionMode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "db", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionDb), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "error", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionError), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "onabort", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionOnabort), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSIDBTransactionOnabort) },
    { "oncomplete", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionOncomplete), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSIDBTransactionOncomplete) },
    { "onerror", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBTransactionOnerror), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSIDBTransactionOnerror) },
    { "objectStore", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionObjectStore), (intptr_t) (1) },
    { "abort", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBTransactionPrototypeFunctionAbort), (intptr_t) (0) },
};

const ClassInfo JSIDBTransactionPrototype::s_info = { "IDBTransactionPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBTransactionPrototype) };

void JSIDBTransactionPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSIDBTransactionPrototypeTableValues, *this);
}

const ClassInfo JSIDBTransaction::s_info = { "IDBTransaction", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBTransaction) };

JSIDBTransaction::JSIDBTransaction(Structure* structure, JSDOMGlobalObject* globalObject, Ref<IDBTransaction>&& impl)
    : JSEventTarget(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSIDBTransaction::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSIDBTransactionPrototype::create(vm, globalObject, JSIDBTransactionPrototype::createStructure(vm, globalObject, JSEventTarget::getPrototype(vm, globalObject)));
}

JSObject* JSIDBTransaction::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBTransaction>(vm, globalObject);
}

EncodedJSValue jsIDBTransactionMode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBTransaction", "mode");
        return throwGetterTypeError(*exec, "IDBTransaction", "mode");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.mode());
    return JSValue::encode(result);
}


EncodedJSValue jsIDBTransactionDb(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBTransaction", "db");
        return throwGetterTypeError(*exec, "IDBTransaction", "db");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.db()));
    return JSValue::encode(result);
}


EncodedJSValue jsIDBTransactionError(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBTransaction", "error");
        return throwGetterTypeError(*exec, "IDBTransaction", "error");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.error()));
    return JSValue::encode(result);
}


EncodedJSValue jsIDBTransactionOnabort(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBTransaction", "onabort");
        return throwGetterTypeError(*exec, "IDBTransaction", "onabort");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().abortEvent));
}


EncodedJSValue jsIDBTransactionOncomplete(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBTransaction", "oncomplete");
        return throwGetterTypeError(*exec, "IDBTransaction", "oncomplete");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().completeEvent));
}


EncodedJSValue jsIDBTransactionOnerror(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBTransaction", "onerror");
        return throwGetterTypeError(*exec, "IDBTransaction", "onerror");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().errorEvent));
}


EncodedJSValue jsIDBTransactionConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSIDBTransactionPrototype* domObject = jsDynamicCast<JSIDBTransactionPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSIDBTransaction::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSIDBTransactionOnabort(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "IDBTransaction", "onabort");
        else
            throwSetterTypeError(*exec, "IDBTransaction", "onabort");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().abortEvent, value);
}


void setJSIDBTransactionOncomplete(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "IDBTransaction", "oncomplete");
        else
            throwSetterTypeError(*exec, "IDBTransaction", "oncomplete");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().completeEvent, value);
}


void setJSIDBTransactionOnerror(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBTransactionPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "IDBTransaction", "onerror");
        else
            throwSetterTypeError(*exec, "IDBTransaction", "onerror");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().errorEvent, value);
}


JSValue JSIDBTransaction::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBTransactionConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionObjectStore(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "IDBTransaction", "objectStore");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBTransaction::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String name = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.objectStore(name, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBTransactionPrototypeFunctionAbort(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSIDBTransaction* castedThis = jsDynamicCast<JSIDBTransaction*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "IDBTransaction", "abort");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBTransaction::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    impl.abort(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

void JSIDBTransaction::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSIDBTransaction*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSIDBTransactionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsIDBTransaction = jsCast<JSIDBTransaction*>(handle.slot()->asCell());
    if (jsIDBTransaction->impl().hasPendingActivity())
        return true;
    if (jsIDBTransaction->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBTransactionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsIDBTransaction = jsCast<JSIDBTransaction*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsIDBTransaction->impl(), jsIDBTransaction);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7IDBTransaction@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14IDBTransactionE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, IDBTransaction* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSIDBTransaction>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7IDBTransaction@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14IDBTransactionE[2];
#if COMPILER(CLANG)
    // If this fails IDBTransaction does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(IDBTransaction), IDBTransaction_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // IDBTransaction has subclasses. If IDBTransaction has subclasses that get passed
    // to toJS() we currently require IDBTransaction you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSIDBTransaction>(globalObject, impl);
}

IDBTransaction* JSIDBTransaction::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSIDBTransaction*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(INDEXED_DATABASE)
