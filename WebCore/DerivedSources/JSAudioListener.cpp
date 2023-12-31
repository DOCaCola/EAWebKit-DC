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

#if ENABLE(WEB_AUDIO)

#include "JSAudioListener.h"

#include "AudioListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetOrientation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetVelocity(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsAudioListenerDopplerFactor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSAudioListenerDopplerFactor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsAudioListenerSpeedOfSound(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSAudioListenerSpeedOfSound(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsAudioListenerConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSAudioListenerPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSAudioListenerPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioListenerPrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioListenerPrototype>(vm.heap)) JSAudioListenerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSAudioListenerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSAudioListenerConstructor : public DOMConstructorObject {
private:
    JSAudioListenerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioListenerConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioListenerConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioListenerConstructor>(vm.heap)) JSAudioListenerConstructor(structure, globalObject);
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

static const struct CompactHashIndex JSAudioListenerTableIndex[4] = {
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { 0, -1 },
};


static const HashTableValue JSAudioListenerTableValues[] =
{
    { "dopplerFactor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerDopplerFactor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSAudioListenerDopplerFactor) },
    { "speedOfSound", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerSpeedOfSound), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSAudioListenerSpeedOfSound) },
};

static const HashTable JSAudioListenerTable = { 2, 3, true, JSAudioListenerTableValues, 0, JSAudioListenerTableIndex };
const ClassInfo JSAudioListenerConstructor::s_info = { "AudioListenerConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAudioListenerConstructor) };

JSAudioListenerConstructor::JSAudioListenerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioListenerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSAudioListener::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("AudioListener"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSAudioListenerPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "setPosition", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetPosition), (intptr_t) (3) },
    { "setOrientation", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetOrientation), (intptr_t) (6) },
    { "setVelocity", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetVelocity), (intptr_t) (3) },
};

const ClassInfo JSAudioListenerPrototype::s_info = { "AudioListenerPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAudioListenerPrototype) };

void JSAudioListenerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSAudioListenerPrototypeTableValues, *this);
}

const ClassInfo JSAudioListener::s_info = { "AudioListener", &Base::s_info, &JSAudioListenerTable, CREATE_METHOD_TABLE(JSAudioListener) };

JSAudioListener::JSAudioListener(Structure* structure, JSDOMGlobalObject* globalObject, Ref<AudioListener>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSAudioListener::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSAudioListenerPrototype::create(vm, globalObject, JSAudioListenerPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSAudioListener::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioListener>(vm, globalObject);
}

void JSAudioListener::destroy(JSC::JSCell* cell)
{
    JSAudioListener* thisObject = static_cast<JSAudioListener*>(cell);
    thisObject->JSAudioListener::~JSAudioListener();
}

JSAudioListener::~JSAudioListener()
{
    releaseImpl();
}

bool JSAudioListener::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSAudioListener*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSAudioListener, Base>(exec, JSAudioListenerTable, thisObject, propertyName, slot);
}

EncodedJSValue jsAudioListenerDopplerFactor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioListener*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.dopplerFactor());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioListenerSpeedOfSound(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioListener*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.speedOfSound());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioListenerConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSAudioListenerPrototype* domObject = jsDynamicCast<JSAudioListenerPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSAudioListener::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSAudioListenerDopplerFactor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioListener*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDopplerFactor(nativeValue);
}


void setJSAudioListenerSpeedOfSound(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioListener*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setSpeedOfSound(nativeValue);
}


JSValue JSAudioListener::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioListenerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetPosition(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSAudioListener* castedThis = jsDynamicCast<JSAudioListener*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "AudioListener", "setPosition");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSAudioListener::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 3))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x = exec->argument(0).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float y = exec->argument(1).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float z = exec->argument(2).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setPosition(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetOrientation(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSAudioListener* castedThis = jsDynamicCast<JSAudioListener*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "AudioListener", "setOrientation");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSAudioListener::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 6))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x = exec->argument(0).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float y = exec->argument(1).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float z = exec->argument(2).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float xUp = exec->argument(3).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float yUp = exec->argument(4).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float zUp = exec->argument(5).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setOrientation(x, y, z, xUp, yUp, zUp);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetVelocity(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSAudioListener* castedThis = jsDynamicCast<JSAudioListener*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "AudioListener", "setVelocity");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSAudioListener::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 3))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x = exec->argument(0).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float y = exec->argument(1).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float z = exec->argument(2).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setVelocity(x, y, z);
    return JSValue::encode(jsUndefined());
}

bool JSAudioListenerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSAudioListenerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsAudioListener = jsCast<JSAudioListener*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsAudioListener->impl(), jsAudioListener);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, AudioListener* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAudioListener>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to AudioListener.
    COMPILE_ASSERT(!__is_polymorphic(AudioListener), AudioListener_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSAudioListener>(globalObject, impl);
}

AudioListener* JSAudioListener::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSAudioListener*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEB_AUDIO)
