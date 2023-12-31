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

#if ENABLE(QUOTA)

#include "JSStorageQuota.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSStorageErrorCallback.h"
#include "JSStorageQuotaCallback.h"
#include "JSStorageUsageCallback.h"
#include "StorageQuota.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsStorageQuotaPrototypeFunctionQueryUsageAndQuota(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsStorageQuotaPrototypeFunctionRequestQuota(JSC::ExecState*);

class JSStorageQuotaPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSStorageQuotaPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSStorageQuotaPrototype* ptr = new (NotNull, JSC::allocateCell<JSStorageQuotaPrototype>(vm.heap)) JSStorageQuotaPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSStorageQuotaPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSStorageQuotaPrototypeTableValues[] =
{
    { "queryUsageAndQuota", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStorageQuotaPrototypeFunctionQueryUsageAndQuota), (intptr_t) (1) },
    { "requestQuota", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStorageQuotaPrototypeFunctionRequestQuota), (intptr_t) (1) },
};

const ClassInfo JSStorageQuotaPrototype::s_info = { "StorageQuotaPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStorageQuotaPrototype) };

void JSStorageQuotaPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSStorageQuotaPrototypeTableValues, *this);
}

const ClassInfo JSStorageQuota::s_info = { "StorageQuota", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStorageQuota) };

JSStorageQuota::JSStorageQuota(Structure* structure, JSDOMGlobalObject* globalObject, Ref<StorageQuota>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSStorageQuota::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSStorageQuotaPrototype::create(vm, globalObject, JSStorageQuotaPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSStorageQuota::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStorageQuota>(vm, globalObject);
}

void JSStorageQuota::destroy(JSC::JSCell* cell)
{
    JSStorageQuota* thisObject = static_cast<JSStorageQuota*>(cell);
    thisObject->JSStorageQuota::~JSStorageQuota();
}

JSStorageQuota::~JSStorageQuota()
{
    releaseImpl();
}

EncodedJSValue JSC_HOST_CALL jsStorageQuotaPrototypeFunctionQueryUsageAndQuota(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorageQuota* castedThis = jsDynamicCast<JSStorageQuota*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "StorageQuota", "queryUsageAndQuota");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorageQuota::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    auto* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    if (!exec->argument(0).isFunction())
        return throwArgumentMustBeFunctionError(*exec, 0, "usageCallback", "StorageQuota", "queryUsageAndQuota");
    RefPtr<StorageUsageCallback> usageCallback = JSStorageUsageCallback::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    RefPtr<StorageErrorCallback> errorCallback;
    if (!exec->argument(1).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(1).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 1, "errorCallback", "StorageQuota", "queryUsageAndQuota");
        errorCallback = JSStorageErrorCallback::create(asObject(exec->uncheckedArgument(1)), castedThis->globalObject());
    }
    impl.queryUsageAndQuota(scriptContext, usageCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsStorageQuotaPrototypeFunctionRequestQuota(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorageQuota* castedThis = jsDynamicCast<JSStorageQuota*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "StorageQuota", "requestQuota");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorageQuota::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    auto* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    unsigned long long newQuotaInBytes = toUInt64(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<StorageQuotaCallback> quotaCallback;
    if (!exec->argument(1).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(1).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 1, "quotaCallback", "StorageQuota", "requestQuota");
        quotaCallback = JSStorageQuotaCallback::create(asObject(exec->uncheckedArgument(1)), castedThis->globalObject());
    }
    RefPtr<StorageErrorCallback> errorCallback;
    if (!exec->argument(2).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(2).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 2, "errorCallback", "StorageQuota", "requestQuota");
        errorCallback = JSStorageErrorCallback::create(asObject(exec->uncheckedArgument(2)), castedThis->globalObject());
    }
    impl.requestQuota(scriptContext, newQuotaInBytes, quotaCallback, errorCallback);
    return JSValue::encode(jsUndefined());
}

bool JSStorageQuotaOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSStorageQuotaOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsStorageQuota = jsCast<JSStorageQuota*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsStorageQuota->impl(), jsStorageQuota);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, StorageQuota* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSStorageQuota>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to StorageQuota.
    COMPILE_ASSERT(!__is_polymorphic(StorageQuota), StorageQuota_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSStorageQuota>(globalObject, impl);
}

StorageQuota* JSStorageQuota::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSStorageQuota*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(QUOTA)
