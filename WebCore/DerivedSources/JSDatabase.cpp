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
#include "JSDatabase.h"

#include "Database.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSQLTransactionCallback.h"
#include "JSSQLTransactionErrorCallback.h"
#include "JSVoidCallback.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionChangeVersion(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionTransaction(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionReadTransaction(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDatabaseVersion(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDatabasePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDatabasePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDatabasePrototype* ptr = new (NotNull, JSC::allocateCell<JSDatabasePrototype>(vm.heap)) JSDatabasePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDatabasePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSDatabasePrototypeTableValues[] =
{
    { "version", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDatabaseVersion), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "changeVersion", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDatabasePrototypeFunctionChangeVersion), (intptr_t) (2) },
    { "transaction", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDatabasePrototypeFunctionTransaction), (intptr_t) (1) },
    { "readTransaction", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDatabasePrototypeFunctionReadTransaction), (intptr_t) (1) },
};

const ClassInfo JSDatabasePrototype::s_info = { "DatabasePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDatabasePrototype) };

void JSDatabasePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDatabasePrototypeTableValues, *this);
}

const ClassInfo JSDatabase::s_info = { "Database", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDatabase) };

JSDatabase::JSDatabase(Structure* structure, JSDOMGlobalObject* globalObject, Ref<Database>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDatabase::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDatabasePrototype::create(vm, globalObject, JSDatabasePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDatabase::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDatabase>(vm, globalObject);
}

void JSDatabase::destroy(JSC::JSCell* cell)
{
    JSDatabase* thisObject = static_cast<JSDatabase*>(cell);
    thisObject->JSDatabase::~JSDatabase();
}

JSDatabase::~JSDatabase()
{
    releaseImpl();
}

EncodedJSValue jsDatabaseVersion(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDatabase* castedThis = jsDynamicCast<JSDatabase*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDatabasePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Database", "version");
        return throwGetterTypeError(*exec, "Database", "version");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.version());
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionChangeVersion(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDatabase* castedThis = jsDynamicCast<JSDatabase*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Database", "changeVersion");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDatabase::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 2))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    String oldVersion = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String newVersion = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<SQLTransactionCallback> callback;
    if (!exec->argument(2).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(2).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 2, "callback", "Database", "changeVersion");
        callback = JSSQLTransactionCallback::create(asObject(exec->uncheckedArgument(2)), castedThis->globalObject());
    }
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (!exec->argument(3).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(3).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 3, "errorCallback", "Database", "changeVersion");
        errorCallback = JSSQLTransactionErrorCallback::create(asObject(exec->uncheckedArgument(3)), castedThis->globalObject());
    }
    RefPtr<VoidCallback> successCallback;
    if (!exec->argument(4).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(4).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 4, "successCallback", "Database", "changeVersion");
        successCallback = JSVoidCallback::create(asObject(exec->uncheckedArgument(4)), castedThis->globalObject());
    }
    impl.changeVersion(oldVersion, newVersion, callback, errorCallback, successCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionTransaction(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDatabase* castedThis = jsDynamicCast<JSDatabase*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Database", "transaction");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDatabase::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (!exec->argument(0).isFunction())
        return throwArgumentMustBeFunctionError(*exec, 0, "callback", "Database", "transaction");
    RefPtr<SQLTransactionCallback> callback = JSSQLTransactionCallback::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (!exec->argument(1).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(1).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 1, "errorCallback", "Database", "transaction");
        errorCallback = JSSQLTransactionErrorCallback::create(asObject(exec->uncheckedArgument(1)), castedThis->globalObject());
    }
    RefPtr<VoidCallback> successCallback;
    if (!exec->argument(2).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(2).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 2, "successCallback", "Database", "transaction");
        successCallback = JSVoidCallback::create(asObject(exec->uncheckedArgument(2)), castedThis->globalObject());
    }
    impl.transaction(callback, errorCallback, successCallback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDatabasePrototypeFunctionReadTransaction(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDatabase* castedThis = jsDynamicCast<JSDatabase*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Database", "readTransaction");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDatabase::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (!exec->argument(0).isFunction())
        return throwArgumentMustBeFunctionError(*exec, 0, "callback", "Database", "readTransaction");
    RefPtr<SQLTransactionCallback> callback = JSSQLTransactionCallback::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (!exec->argument(1).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(1).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 1, "errorCallback", "Database", "readTransaction");
        errorCallback = JSSQLTransactionErrorCallback::create(asObject(exec->uncheckedArgument(1)), castedThis->globalObject());
    }
    RefPtr<VoidCallback> successCallback;
    if (!exec->argument(2).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(2).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 2, "successCallback", "Database", "readTransaction");
        successCallback = JSVoidCallback::create(asObject(exec->uncheckedArgument(2)), castedThis->globalObject());
    }
    impl.readTransaction(callback, errorCallback, successCallback);
    return JSValue::encode(jsUndefined());
}

bool JSDatabaseOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDatabaseOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDatabase = jsCast<JSDatabase*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDatabase->impl(), jsDatabase);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Database@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore8DatabaseE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, Database* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDatabase>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Database@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore8DatabaseE[2];
#if COMPILER(CLANG)
    // If this fails Database does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Database), Database_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Database has subclasses. If Database has subclasses that get passed
    // to toJS() we currently require Database you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSDatabase>(globalObject, impl);
}

Database* JSDatabase::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDatabase*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
