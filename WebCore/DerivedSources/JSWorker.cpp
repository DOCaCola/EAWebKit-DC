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
#include "JSWorker.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEventListener.h"
#include "Worker.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsWorkerPrototypeFunctionPostMessage(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWorkerPrototypeFunctionTerminate(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsWorkerOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWorkerOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWorkerOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWorkerOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWorkerConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWorkerPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWorkerPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWorkerPrototype* ptr = new (NotNull, JSC::allocateCell<JSWorkerPrototype>(vm.heap)) JSWorkerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWorkerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWorkerConstructor : public DOMConstructorObject {
private:
    JSWorkerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWorkerConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWorkerConstructor* ptr = new (NotNull, JSC::allocateCell<JSWorkerConstructor>(vm.heap)) JSWorkerConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

const ClassInfo JSWorkerConstructor::s_info = { "WorkerConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWorkerConstructor) };

JSWorkerConstructor::JSWorkerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWorkerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWorker::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("Worker"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSWorkerConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWorker;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWorkerPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "onmessage", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerOnmessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWorkerOnmessage) },
    { "onerror", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerOnerror), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWorkerOnerror) },
    { "postMessage", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWorkerPrototypeFunctionPostMessage), (intptr_t) (1) },
    { "terminate", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWorkerPrototypeFunctionTerminate), (intptr_t) (0) },
};

const ClassInfo JSWorkerPrototype::s_info = { "WorkerPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWorkerPrototype) };

void JSWorkerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWorkerPrototypeTableValues, *this);
}

const ClassInfo JSWorker::s_info = { "Worker", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWorker) };

JSWorker::JSWorker(Structure* structure, JSDOMGlobalObject* globalObject, Ref<Worker>&& impl)
    : JSEventTarget(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSWorker::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWorkerPrototype::create(vm, globalObject, JSWorkerPrototype::createStructure(vm, globalObject, JSEventTarget::getPrototype(vm, globalObject)));
}

JSObject* JSWorker::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWorker>(vm, globalObject);
}

EncodedJSValue jsWorkerOnmessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWorker* castedThis = jsDynamicCast<JSWorker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWorkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Worker", "onmessage");
        return throwGetterTypeError(*exec, "Worker", "onmessage");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().messageEvent));
}


EncodedJSValue jsWorkerOnerror(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWorker* castedThis = jsDynamicCast<JSWorker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWorkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Worker", "onerror");
        return throwGetterTypeError(*exec, "Worker", "onerror");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().errorEvent));
}


EncodedJSValue jsWorkerConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWorkerPrototype* domObject = jsDynamicCast<JSWorkerPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWorker::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSWorkerOnmessage(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWorker* castedThis = jsDynamicCast<JSWorker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWorkerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "Worker", "onmessage");
        else
            throwSetterTypeError(*exec, "Worker", "onmessage");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().messageEvent, value);
}


void setJSWorkerOnerror(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWorker* castedThis = jsDynamicCast<JSWorker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWorkerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "Worker", "onerror");
        else
            throwSetterTypeError(*exec, "Worker", "onerror");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().errorEvent, value);
}


JSValue JSWorker::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWorkerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWorkerPrototypeFunctionPostMessage(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWorker* castedThis = jsDynamicCast<JSWorker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Worker", "postMessage");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWorker::info());
    return JSValue::encode(castedThis->postMessage(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerPrototypeFunctionTerminate(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWorker* castedThis = jsDynamicCast<JSWorker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Worker", "terminate");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWorker::info());
    auto& impl = castedThis->impl();
    impl.terminate();
    return JSValue::encode(jsUndefined());
}

bool JSWorkerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsWorker = jsCast<JSWorker*>(handle.slot()->asCell());
    if (jsWorker->impl().hasPendingActivity())
        return true;
    if (jsWorker->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWorkerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWorker = jsCast<JSWorker*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWorker->impl(), jsWorker);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Worker@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore6WorkerE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, Worker* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWorker>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Worker@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore6WorkerE[2];
#if COMPILER(CLANG)
    // If this fails Worker does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Worker), Worker_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Worker has subclasses. If Worker has subclasses that get passed
    // to toJS() we currently require Worker you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSWorker>(globalObject, impl);
}

Worker* JSWorker::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWorker*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
