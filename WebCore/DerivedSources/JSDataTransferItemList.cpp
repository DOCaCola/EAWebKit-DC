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

#if ENABLE(DATA_TRANSFER_ITEMS)

#include "JSDataTransferItemList.h"

#include "DataTransferItem.h"
#include "DataTransferItemList.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDataTransferItem.h"
#include "JSFile.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionClear(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDataTransferItemListLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDataTransferItemListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDataTransferItemListPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDataTransferItemListPrototype* ptr = new (NotNull, JSC::allocateCell<JSDataTransferItemListPrototype>(vm.heap)) JSDataTransferItemListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDataTransferItemListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table */

static const struct CompactHashIndex JSDataTransferItemListTableIndex[4] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
};


static const HashTableValue JSDataTransferItemListTableValues[] =
{
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemListLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSDataTransferItemListTable = { 1, 3, true, JSDataTransferItemListTableValues, 0, JSDataTransferItemListTableIndex };
/* Hash table for prototype */

static const HashTableValue JSDataTransferItemListPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemListPrototypeFunctionItem), (intptr_t) (0) },
    { "clear", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemListPrototypeFunctionClear), (intptr_t) (0) },
    { "add", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemListPrototypeFunctionAdd), (intptr_t) (1) },
};

const ClassInfo JSDataTransferItemListPrototype::s_info = { "DataTransferItemListPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDataTransferItemListPrototype) };

void JSDataTransferItemListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDataTransferItemListPrototypeTableValues, *this);
}

const ClassInfo JSDataTransferItemList::s_info = { "DataTransferItemList", &Base::s_info, &JSDataTransferItemListTable, CREATE_METHOD_TABLE(JSDataTransferItemList) };

JSDataTransferItemList::JSDataTransferItemList(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DataTransferItemList>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDataTransferItemList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDataTransferItemListPrototype::create(vm, globalObject, JSDataTransferItemListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDataTransferItemList::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDataTransferItemList>(vm, globalObject);
}

void JSDataTransferItemList::destroy(JSC::JSCell* cell)
{
    JSDataTransferItemList* thisObject = static_cast<JSDataTransferItemList*>(cell);
    thisObject->JSDataTransferItemList::~JSDataTransferItemList();
}

JSDataTransferItemList::~JSDataTransferItemList()
{
    releaseImpl();
}

bool JSDataTransferItemList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSDataTransferItemList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSDataTransferItemList>(exec, propertyName);
    if (entry) {
        slot.setCacheableCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    Optional<uint32_t> optionalIndex = parseIndex(propertyName);
    if (optionalIndex && optionalIndex.value() < thisObject->impl().length()) {
        unsigned index = optionalIndex.value();
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return getStaticValueSlot<JSDataTransferItemList, Base>(exec, JSDataTransferItemListTable, thisObject, propertyName, slot);
}

bool JSDataTransferItemList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSDataTransferItemList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsDataTransferItemListLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSDataTransferItemList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


void JSDataTransferItemList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSDataTransferItemList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDataTransferItemList* castedThis = jsDynamicCast<JSDataTransferItemList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DataTransferItemList", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    auto& impl = castedThis->impl();
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDataTransferItemList* castedThis = jsDynamicCast<JSDataTransferItemList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DataTransferItemList", "clear");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    auto& impl = castedThis->impl();
    impl.clear();
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd1(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDataTransferItemList* castedThis = jsDynamicCast<JSDataTransferItemList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DataTransferItemList", "add");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    File* file = JSFile::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.add(file);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd2(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDataTransferItemList* castedThis = jsDynamicCast<JSDataTransferItemList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DataTransferItemList", "add");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String data = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String type = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.add(data, type, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd(ExecState* exec)
{
    size_t argsCount = std::min<size_t>(2, exec->argumentCount());
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSFile::info())))))
        return jsDataTransferItemListPrototypeFunctionAdd1(exec);
    if (argsCount == 0 || argsCount == 1 || argsCount == 2)
        return jsDataTransferItemListPrototypeFunctionAdd2(exec);
    return throwVMTypeError(exec);
}

bool JSDataTransferItemListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDataTransferItemListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDataTransferItemList = jsCast<JSDataTransferItemList*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDataTransferItemList->impl(), jsDataTransferItemList);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, DataTransferItemList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDataTransferItemList>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DataTransferItemList.
    COMPILE_ASSERT(!__is_polymorphic(DataTransferItemList), DataTransferItemList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSDataTransferItemList>(globalObject, impl);
}

DataTransferItemList* JSDataTransferItemList::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDataTransferItemList*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(DATA_TRANSFER_ITEMS)
