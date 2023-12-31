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

#include "JSIDBRequest.h"

#include "DOMError.h"
#include "IDBAny.h"
#include "IDBRequest.h"
#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include "JSDOMError.h"
#include "JSEventListener.h"
#include "JSIDBAny.h"
#include "JSIDBTransaction.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsIDBRequestResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBRequestError(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBRequestSource(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBRequestTransaction(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBRequestReadyState(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBRequestOnsuccess(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSIDBRequestOnsuccess(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsIDBRequestOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSIDBRequestOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsIDBRequestConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSIDBRequestPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSIDBRequestPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBRequestPrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBRequestPrototype>(vm.heap)) JSIDBRequestPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSIDBRequestPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSIDBRequestConstructor : public DOMConstructorObject {
private:
    JSIDBRequestConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBRequestConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBRequestConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBRequestConstructor>(vm.heap)) JSIDBRequestConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSIDBRequestConstructor::s_info = { "IDBRequestConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBRequestConstructor) };

JSIDBRequestConstructor::JSIDBRequestConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBRequestConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSIDBRequest::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("IDBRequest"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSIDBRequestPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "error", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestError), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "source", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestSource), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "transaction", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestTransaction), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "readyState", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestReadyState), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "onsuccess", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestOnsuccess), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSIDBRequestOnsuccess) },
    { "onerror", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBRequestOnerror), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSIDBRequestOnerror) },
};

const ClassInfo JSIDBRequestPrototype::s_info = { "IDBRequestPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBRequestPrototype) };

void JSIDBRequestPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSIDBRequestPrototypeTableValues, *this);
}

const ClassInfo JSIDBRequest::s_info = { "IDBRequest", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBRequest) };

JSIDBRequest::JSIDBRequest(Structure* structure, JSDOMGlobalObject* globalObject, Ref<IDBRequest>&& impl)
    : JSEventTarget(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSIDBRequest::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSIDBRequestPrototype::create(vm, globalObject, JSIDBRequestPrototype::createStructure(vm, globalObject, JSEventTarget::getPrototype(vm, globalObject)));
}

JSObject* JSIDBRequest::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBRequest>(vm, globalObject);
}

EncodedJSValue jsIDBRequestResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "result");
        return throwGetterTypeError(*exec, "IDBRequest", "result");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.result(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsIDBRequestError(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "error");
        return throwGetterTypeError(*exec, "IDBRequest", "error");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.error(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsIDBRequestSource(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "source");
        return throwGetterTypeError(*exec, "IDBRequest", "source");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.source()));
    return JSValue::encode(result);
}


EncodedJSValue jsIDBRequestTransaction(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "transaction");
        return throwGetterTypeError(*exec, "IDBRequest", "transaction");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.transaction()));
    return JSValue::encode(result);
}


EncodedJSValue jsIDBRequestReadyState(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "readyState");
        return throwGetterTypeError(*exec, "IDBRequest", "readyState");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.readyState());
    return JSValue::encode(result);
}


EncodedJSValue jsIDBRequestOnsuccess(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "onsuccess");
        return throwGetterTypeError(*exec, "IDBRequest", "onsuccess");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().successEvent));
}


EncodedJSValue jsIDBRequestOnerror(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBRequest", "onerror");
        return throwGetterTypeError(*exec, "IDBRequest", "onerror");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().errorEvent));
}


EncodedJSValue jsIDBRequestConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSIDBRequestPrototype* domObject = jsDynamicCast<JSIDBRequestPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSIDBRequest::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSIDBRequestOnsuccess(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "IDBRequest", "onsuccess");
        else
            throwSetterTypeError(*exec, "IDBRequest", "onsuccess");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().successEvent, value);
}


void setJSIDBRequestOnerror(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSIDBRequest* castedThis = jsDynamicCast<JSIDBRequest*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBRequestPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "IDBRequest", "onerror");
        else
            throwSetterTypeError(*exec, "IDBRequest", "onerror");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().errorEvent, value);
}


JSValue JSIDBRequest::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBRequestConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

void JSIDBRequest::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSIDBRequest*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSIDBRequestOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsIDBRequest = jsCast<JSIDBRequest*>(handle.slot()->asCell());
    if (jsIDBRequest->impl().hasPendingActivity())
        return true;
    if (jsIDBRequest->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBRequestOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsIDBRequest = jsCast<JSIDBRequest*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsIDBRequest->impl(), jsIDBRequest);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7IDBRequest@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore10IDBRequestE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, IDBRequest* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSIDBRequest>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7IDBRequest@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore10IDBRequestE[2];
#if COMPILER(CLANG)
    // If this fails IDBRequest does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(IDBRequest), IDBRequest_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // IDBRequest has subclasses. If IDBRequest has subclasses that get passed
    // to toJS() we currently require IDBRequest you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSIDBRequest>(globalObject, impl);
}

IDBRequest* JSIDBRequest::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSIDBRequest*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(INDEXED_DATABASE)
