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

#if ENABLE(VIDEO_TRACK)

#include "JSVideoTrackList.h"

#include "Element.h"
#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSNodeCustom.h"
#include "JSVideoTrack.h"
#include "VideoTrack.h"
#include "VideoTrackList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionGetTrackById(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionDispatchEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsVideoTrackListLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsVideoTrackListSelectedIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsVideoTrackListOnchange(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSVideoTrackListOnchange(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsVideoTrackListOnaddtrack(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSVideoTrackListOnaddtrack(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsVideoTrackListOnremovetrack(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSVideoTrackListOnremovetrack(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSVideoTrackListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSVideoTrackListPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSVideoTrackListPrototype* ptr = new (NotNull, JSC::allocateCell<JSVideoTrackListPrototype>(vm.heap)) JSVideoTrackListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSVideoTrackListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table */

static const struct CompactHashIndex JSVideoTrackListTableIndex[16] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
};


static const HashTableValue JSVideoTrackListTableValues[] =
{
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsVideoTrackListLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "selectedIndex", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsVideoTrackListSelectedIndex), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "onchange", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsVideoTrackListOnchange), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSVideoTrackListOnchange) },
    { "onaddtrack", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsVideoTrackListOnaddtrack), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSVideoTrackListOnaddtrack) },
    { "onremovetrack", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsVideoTrackListOnremovetrack), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSVideoTrackListOnremovetrack) },
};

static const HashTable JSVideoTrackListTable = { 5, 15, true, JSVideoTrackListTableValues, 0, JSVideoTrackListTableIndex };
/* Hash table for prototype */

static const HashTableValue JSVideoTrackListPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsVideoTrackListPrototypeFunctionItem), (intptr_t) (1) },
    { "getTrackById", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsVideoTrackListPrototypeFunctionGetTrackById), (intptr_t) (1) },
    { "addEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsVideoTrackListPrototypeFunctionAddEventListener), (intptr_t) (2) },
    { "removeEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsVideoTrackListPrototypeFunctionRemoveEventListener), (intptr_t) (2) },
    { "dispatchEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsVideoTrackListPrototypeFunctionDispatchEvent), (intptr_t) (1) },
};

const ClassInfo JSVideoTrackListPrototype::s_info = { "VideoTrackListPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSVideoTrackListPrototype) };

void JSVideoTrackListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSVideoTrackListPrototypeTableValues, *this);
}

const ClassInfo JSVideoTrackList::s_info = { "VideoTrackList", &Base::s_info, &JSVideoTrackListTable, CREATE_METHOD_TABLE(JSVideoTrackList) };

JSVideoTrackList::JSVideoTrackList(Structure* structure, JSDOMGlobalObject* globalObject, Ref<VideoTrackList>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSVideoTrackList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSVideoTrackListPrototype::create(vm, globalObject, JSVideoTrackListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSVideoTrackList::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSVideoTrackList>(vm, globalObject);
}

void JSVideoTrackList::destroy(JSC::JSCell* cell)
{
    JSVideoTrackList* thisObject = static_cast<JSVideoTrackList*>(cell);
    thisObject->JSVideoTrackList::~JSVideoTrackList();
}

JSVideoTrackList::~JSVideoTrackList()
{
    releaseImpl();
}

bool JSVideoTrackList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSVideoTrackList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSVideoTrackList>(exec, propertyName);
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
    return getStaticValueSlot<JSVideoTrackList, Base>(exec, JSVideoTrackListTable, thisObject, propertyName, slot);
}

bool JSVideoTrackList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSVideoTrackList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsVideoTrackListLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsVideoTrackListSelectedIndex(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.selectedIndex());
    return JSValue::encode(result);
}


EncodedJSValue jsVideoTrackListOnchange(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(slotBase);
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().changeEvent));
}


EncodedJSValue jsVideoTrackListOnaddtrack(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(slotBase);
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().addtrackEvent));
}


EncodedJSValue jsVideoTrackListOnremovetrack(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(slotBase);
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().removetrackEvent));
}


void setJSVideoTrackListOnchange(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().changeEvent, value);
}


void setJSVideoTrackListOnaddtrack(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().addtrackEvent, value);
}


void setJSVideoTrackListOnremovetrack(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSVideoTrackList*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().removetrackEvent, value);
}


void JSVideoTrackList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSVideoTrackList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSVideoTrackList* castedThis = jsDynamicCast<JSVideoTrackList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "VideoTrackList", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSVideoTrackList::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionGetTrackById(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSVideoTrackList* castedThis = jsDynamicCast<JSVideoTrackList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "VideoTrackList", "getTrackById");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSVideoTrackList::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    String id = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getTrackById(id)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSVideoTrackList* castedThis = jsDynamicCast<JSVideoTrackList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "VideoTrackList", "addEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSVideoTrackList::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForAdd(*exec, *asObject(listener), *castedThis), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSVideoTrackList* castedThis = jsDynamicCast<JSVideoTrackList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "VideoTrackList", "removeEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSVideoTrackList::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForRemove(*exec, *asObject(listener), *castedThis).ptr(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsVideoTrackListPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSVideoTrackList* castedThis = jsDynamicCast<JSVideoTrackList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "VideoTrackList", "dispatchEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSVideoTrackList::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event = JSEvent::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.dispatchEvent(event, ec));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSVideoTrackList::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSVideoTrackList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
    thisObject->visitAdditionalChildren(visitor);
}

bool JSVideoTrackListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsVideoTrackList = jsCast<JSVideoTrackList*>(handle.slot()->asCell());
    if (jsVideoTrackList->impl().isFiringEventListeners())
        return true;
    Element* element = WTF::getPtr(jsVideoTrackList->impl().element());
    if (!element)
        return false;
    void* root = WebCore::root(element);
    return visitor.containsOpaqueRoot(root);
}

void JSVideoTrackListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsVideoTrackList = jsCast<JSVideoTrackList*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsVideoTrackList->impl(), jsVideoTrackList);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7VideoTrackList@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14VideoTrackListE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, VideoTrackList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSVideoTrackList>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7VideoTrackList@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14VideoTrackListE[2];
#if COMPILER(CLANG)
    // If this fails VideoTrackList does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(VideoTrackList), VideoTrackList_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // VideoTrackList has subclasses. If VideoTrackList has subclasses that get passed
    // to toJS() we currently require VideoTrackList you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSVideoTrackList>(globalObject, impl);
}

VideoTrackList* JSVideoTrackList::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSVideoTrackList*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(VIDEO_TRACK)
