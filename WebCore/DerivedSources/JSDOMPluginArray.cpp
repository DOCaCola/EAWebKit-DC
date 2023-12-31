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
#include "JSDOMPluginArray.h"

#include "DOMPlugin.h"
#include "DOMPluginArray.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMPlugin.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMPluginArrayPrototypeFunctionItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMPluginArrayPrototypeFunctionNamedItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMPluginArrayPrototypeFunctionRefresh(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDOMPluginArrayLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMPluginArrayConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDOMPluginArrayPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDOMPluginArrayPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMPluginArrayPrototype* ptr = new (NotNull, JSC::allocateCell<JSDOMPluginArrayPrototype>(vm.heap)) JSDOMPluginArrayPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDOMPluginArrayPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSDOMPluginArrayConstructor : public DOMConstructorObject {
private:
    JSDOMPluginArrayConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDOMPluginArrayConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDOMPluginArrayConstructor* ptr = new (NotNull, JSC::allocateCell<JSDOMPluginArrayConstructor>(vm.heap)) JSDOMPluginArrayConstructor(structure, globalObject);
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

static const struct CompactHashIndex JSDOMPluginArrayTableIndex[5] = {
    { -1, -1 },
    { 0, 4 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
};


static const HashTableValue JSDOMPluginArrayTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginArrayConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginArrayLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSDOMPluginArrayTable = { 2, 3, true, JSDOMPluginArrayTableValues, 0, JSDOMPluginArrayTableIndex };
const ClassInfo JSDOMPluginArrayConstructor::s_info = { "PluginArrayConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMPluginArrayConstructor) };

JSDOMPluginArrayConstructor::JSDOMPluginArrayConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMPluginArrayConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDOMPluginArray::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("PluginArray"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSDOMPluginArrayPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMPluginArrayPrototypeFunctionItem), (intptr_t) (0) },
    { "namedItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMPluginArrayPrototypeFunctionNamedItem), (intptr_t) (0) },
    { "refresh", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMPluginArrayPrototypeFunctionRefresh), (intptr_t) (0) },
};

const ClassInfo JSDOMPluginArrayPrototype::s_info = { "PluginArrayPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMPluginArrayPrototype) };

void JSDOMPluginArrayPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDOMPluginArrayPrototypeTableValues, *this);
}

const ClassInfo JSDOMPluginArray::s_info = { "PluginArray", &Base::s_info, &JSDOMPluginArrayTable, CREATE_METHOD_TABLE(JSDOMPluginArray) };

JSDOMPluginArray::JSDOMPluginArray(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DOMPluginArray>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDOMPluginArray::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDOMPluginArrayPrototype::create(vm, globalObject, JSDOMPluginArrayPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDOMPluginArray::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMPluginArray>(vm, globalObject);
}

void JSDOMPluginArray::destroy(JSC::JSCell* cell)
{
    JSDOMPluginArray* thisObject = static_cast<JSDOMPluginArray*>(cell);
    thisObject->JSDOMPluginArray::~JSDOMPluginArray();
}

JSDOMPluginArray::~JSDOMPluginArray()
{
    releaseImpl();
}

bool JSDOMPluginArray::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSDOMPluginArray*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSDOMPluginArray>(exec, propertyName);
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
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMPluginArray, Base>(exec, JSDOMPluginArrayTable, thisObject, propertyName, slot);
}

bool JSDOMPluginArray::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSDOMPluginArray*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    Identifier propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsDOMPluginArrayLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSDOMPluginArray*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMPluginArrayConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSDOMPluginArray* domObject = jsDynamicCast<JSDOMPluginArray*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDOMPluginArray::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSDOMPluginArray::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSDOMPluginArray*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSDOMPluginArray::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMPluginArrayConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginArrayPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMPluginArray* castedThis = jsDynamicCast<JSDOMPluginArray*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMPluginArray", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMPluginArray::info());
    auto& impl = castedThis->impl();
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginArrayPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMPluginArray* castedThis = jsDynamicCast<JSDOMPluginArray*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMPluginArray", "namedItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMPluginArray::info());
    auto& impl = castedThis->impl();
    String name = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.namedItem(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginArrayPrototypeFunctionRefresh(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMPluginArray* castedThis = jsDynamicCast<JSDOMPluginArray*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMPluginArray", "refresh");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMPluginArray::info());
    auto& impl = castedThis->impl();
    bool reload = exec->argument(0).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.refresh(reload);
    return JSValue::encode(jsUndefined());
}

bool JSDOMPluginArrayOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsDOMPluginArray = jsCast<JSDOMPluginArray*>(handle.slot()->asCell());
    Frame* root = WTF::getPtr(jsDOMPluginArray->impl().frame());
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSDOMPluginArrayOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDOMPluginArray = jsCast<JSDOMPluginArray*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDOMPluginArray->impl(), jsDOMPluginArray);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7DOMPluginArray@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14DOMPluginArrayE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, DOMPluginArray* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMPluginArray>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7DOMPluginArray@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14DOMPluginArrayE[2];
#if COMPILER(CLANG)
    // If this fails DOMPluginArray does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(DOMPluginArray), DOMPluginArray_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // DOMPluginArray has subclasses. If DOMPluginArray has subclasses that get passed
    // to toJS() we currently require DOMPluginArray you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSDOMPluginArray>(globalObject, impl);
}

DOMPluginArray* JSDOMPluginArray::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDOMPluginArray*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
