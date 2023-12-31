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
#include "JSStorage.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "Storage.h"
#include "URL.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionKey(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionGetItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionSetItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionRemoveItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionClear(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsStorageLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsStorageConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSStoragePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSStoragePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSStoragePrototype* ptr = new (NotNull, JSC::allocateCell<JSStoragePrototype>(vm.heap)) JSStoragePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSStoragePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSStorageConstructor : public DOMConstructorObject {
private:
    JSStorageConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSStorageConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSStorageConstructor* ptr = new (NotNull, JSC::allocateCell<JSStorageConstructor>(vm.heap)) JSStorageConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSStorageTableIndex[5] = {
    { -1, -1 },
    { 0, 4 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
};


static const HashTableValue JSStorageTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "length", DontDelete | DontEnum | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSStorageTable = { 2, 3, true, JSStorageTableValues, 0, JSStorageTableIndex };
const ClassInfo JSStorageConstructor::s_info = { "StorageConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStorageConstructor) };

JSStorageConstructor::JSStorageConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSStorageConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSStorage::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("Storage"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSStoragePrototypeTableValues[] =
{
    { "key", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStoragePrototypeFunctionKey), (intptr_t) (1) },
    { "getItem", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStoragePrototypeFunctionGetItem), (intptr_t) (1) },
    { "setItem", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStoragePrototypeFunctionSetItem), (intptr_t) (2) },
    { "removeItem", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStoragePrototypeFunctionRemoveItem), (intptr_t) (1) },
    { "clear", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStoragePrototypeFunctionClear), (intptr_t) (0) },
};

const ClassInfo JSStoragePrototype::s_info = { "StoragePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStoragePrototype) };

void JSStoragePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSStoragePrototypeTableValues, *this);
}

const ClassInfo JSStorage::s_info = { "Storage", &Base::s_info, &JSStorageTable, CREATE_METHOD_TABLE(JSStorage) };

JSStorage::JSStorage(Structure* structure, JSDOMGlobalObject* globalObject, Ref<Storage>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSStorage::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSStoragePrototype::create(vm, globalObject, JSStoragePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSStorage::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStorage>(vm, globalObject);
}

void JSStorage::destroy(JSC::JSCell* cell)
{
    JSStorage* thisObject = static_cast<JSStorage*>(cell);
    thisObject->JSStorage::~JSStorage();
}

JSStorage::~JSStorage()
{
    releaseImpl();
}

bool JSStorage::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSStorage*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSStorage>(exec, propertyName);
    if (entry) {
        slot.setCacheableCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSStorage, Base>(exec, JSStorageTable, thisObject, propertyName, slot);
}

bool JSStorage::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSStorage*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Identifier propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsStorageLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSStorage*>(slotBase);
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsStorageConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSStorage* domObject = jsDynamicCast<JSStorage*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSStorage::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSStorage::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    auto* thisObject = jsCast<JSStorage*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::put(thisObject, exec, propertyName, value, slot);
}

void JSStorage::putByIndex(JSCell* cell, ExecState* exec, unsigned index, JSValue value, bool shouldThrow)
{
    auto* thisObject = jsCast<JSStorage*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Identifier propertyName = Identifier::from(exec, index);
    PutPropertySlot slot(thisObject, shouldThrow);
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::putByIndex(cell, exec, index, value, shouldThrow);
}

JSValue JSStorage::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSStorageConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionKey(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorage* castedThis = jsDynamicCast<JSStorage*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Storage", "key");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorage::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsStringOrNull(exec, impl.key(index, ec));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionGetItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorage* castedThis = jsDynamicCast<JSStorage*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Storage", "getItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorage::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String key = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsStringOrNull(exec, impl.getItem(key, ec));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionSetItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorage* castedThis = jsDynamicCast<JSStorage*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Storage", "setItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorage::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 2))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String key = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String data = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setItem(key, data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionRemoveItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorage* castedThis = jsDynamicCast<JSStorage*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Storage", "removeItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorage::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String key = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.removeItem(key, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsStoragePrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorage* castedThis = jsDynamicCast<JSStorage*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Storage", "clear");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorage::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    impl.clear(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

bool JSStorageOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsStorage = jsCast<JSStorage*>(handle.slot()->asCell());
    Frame* root = WTF::getPtr(jsStorage->impl().frame());
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSStorageOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsStorage = jsCast<JSStorage*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsStorage->impl(), jsStorage);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, Storage* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSStorage>(globalObject, impl))
        return result;
    return createNewWrapper<JSStorage>(globalObject, impl);
}

Storage* JSStorage::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSStorage*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
