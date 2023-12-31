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
#include "JSDOMPlugin.h"

#include "DOMMimeType.h"
#include "DOMPlugin.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMMimeType.h"
#include "URL.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMPluginPrototypeFunctionItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMPluginPrototypeFunctionNamedItem(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDOMPluginName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMPluginFilename(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMPluginDescription(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMPluginLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMPluginConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDOMPluginPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDOMPluginPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMPluginPrototype* ptr = new (NotNull, JSC::allocateCell<JSDOMPluginPrototype>(vm.heap)) JSDOMPluginPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDOMPluginPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSDOMPluginConstructor : public DOMConstructorObject {
private:
    JSDOMPluginConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDOMPluginConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDOMPluginConstructor* ptr = new (NotNull, JSC::allocateCell<JSDOMPluginConstructor>(vm.heap)) JSDOMPluginConstructor(structure, globalObject);
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

static const struct CompactHashIndex JSDOMPluginTableIndex[17] = {
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 16 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { 3, -1 },
    { 1, -1 },
};


static const HashTableValue JSDOMPluginTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "name", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "filename", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginFilename), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "description", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginDescription), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSDOMPluginTable = { 5, 15, true, JSDOMPluginTableValues, 0, JSDOMPluginTableIndex };
const ClassInfo JSDOMPluginConstructor::s_info = { "PluginConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMPluginConstructor) };

JSDOMPluginConstructor::JSDOMPluginConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMPluginConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDOMPlugin::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("Plugin"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSDOMPluginPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMPluginPrototypeFunctionItem), (intptr_t) (0) },
    { "namedItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMPluginPrototypeFunctionNamedItem), (intptr_t) (0) },
};

const ClassInfo JSDOMPluginPrototype::s_info = { "PluginPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMPluginPrototype) };

void JSDOMPluginPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDOMPluginPrototypeTableValues, *this);
}

const ClassInfo JSDOMPlugin::s_info = { "Plugin", &Base::s_info, &JSDOMPluginTable, CREATE_METHOD_TABLE(JSDOMPlugin) };

JSDOMPlugin::JSDOMPlugin(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DOMPlugin>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDOMPlugin::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDOMPluginPrototype::create(vm, globalObject, JSDOMPluginPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDOMPlugin::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMPlugin>(vm, globalObject);
}

void JSDOMPlugin::destroy(JSC::JSCell* cell)
{
    JSDOMPlugin* thisObject = static_cast<JSDOMPlugin*>(cell);
    thisObject->JSDOMPlugin::~JSDOMPlugin();
}

JSDOMPlugin::~JSDOMPlugin()
{
    releaseImpl();
}

bool JSDOMPlugin::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSDOMPlugin*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSDOMPlugin>(exec, propertyName);
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
    return getStaticValueSlot<JSDOMPlugin, Base>(exec, JSDOMPluginTable, thisObject, propertyName, slot);
}

bool JSDOMPlugin::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSDOMPlugin*>(object);
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

EncodedJSValue jsDOMPluginName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSDOMPlugin*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMPluginFilename(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSDOMPlugin*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.filename());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMPluginDescription(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSDOMPlugin*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.description());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMPluginLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSDOMPlugin*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMPluginConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSDOMPlugin* domObject = jsDynamicCast<JSDOMPlugin*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDOMPlugin::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSDOMPlugin::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSDOMPlugin*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSDOMPlugin::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMPluginConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMPlugin* castedThis = jsDynamicCast<JSDOMPlugin*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMPlugin", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMPlugin::info());
    auto& impl = castedThis->impl();
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMPlugin* castedThis = jsDynamicCast<JSDOMPlugin*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMPlugin", "namedItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMPlugin::info());
    auto& impl = castedThis->impl();
    String name = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.namedItem(name)));
    return JSValue::encode(result);
}

bool JSDOMPluginOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMPluginOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDOMPlugin = jsCast<JSDOMPlugin*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDOMPlugin->impl(), jsDOMPlugin);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7DOMPlugin@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore9DOMPluginE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, DOMPlugin* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMPlugin>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7DOMPlugin@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore9DOMPluginE[2];
#if COMPILER(CLANG)
    // If this fails DOMPlugin does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(DOMPlugin), DOMPlugin_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // DOMPlugin has subclasses. If DOMPlugin has subclasses that get passed
    // to toJS() we currently require DOMPlugin you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSDOMPlugin>(globalObject, impl);
}

DOMPlugin* JSDOMPlugin::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDOMPlugin*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
