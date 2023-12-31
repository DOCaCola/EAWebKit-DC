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

#if ENABLE(SPEECH_SYNTHESIS)

#include "JSSpeechSynthesis.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSpeechSynthesisUtterance.h"
#include "JSSpeechSynthesisVoice.h"
#include "SpeechSynthesis.h"
#include "SpeechSynthesisVoice.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionSpeak(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionCancel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionPause(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionResume(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionGetVoices(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsSpeechSynthesisPending(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSpeechSynthesisSpeaking(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSpeechSynthesisPaused(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSpeechSynthesisPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSpeechSynthesisPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSpeechSynthesisPrototype* ptr = new (NotNull, JSC::allocateCell<JSSpeechSynthesisPrototype>(vm.heap)) JSSpeechSynthesisPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSpeechSynthesisPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSSpeechSynthesisPrototypeTableValues[] =
{
    { "pending", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisPending), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "speaking", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisSpeaking), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "paused", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisPaused), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "speak", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionSpeak), (intptr_t) (1) },
    { "cancel", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionCancel), (intptr_t) (0) },
    { "pause", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionPause), (intptr_t) (0) },
    { "resume", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionResume), (intptr_t) (0) },
    { "getVoices", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSpeechSynthesisPrototypeFunctionGetVoices), (intptr_t) (0) },
};

const ClassInfo JSSpeechSynthesisPrototype::s_info = { "SpeechSynthesisPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSpeechSynthesisPrototype) };

void JSSpeechSynthesisPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSpeechSynthesisPrototypeTableValues, *this);
}

const ClassInfo JSSpeechSynthesis::s_info = { "SpeechSynthesis", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSpeechSynthesis) };

JSSpeechSynthesis::JSSpeechSynthesis(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SpeechSynthesis>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSSpeechSynthesis::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSpeechSynthesisPrototype::create(vm, globalObject, JSSpeechSynthesisPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSSpeechSynthesis::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSpeechSynthesis>(vm, globalObject);
}

void JSSpeechSynthesis::destroy(JSC::JSCell* cell)
{
    JSSpeechSynthesis* thisObject = static_cast<JSSpeechSynthesis*>(cell);
    thisObject->JSSpeechSynthesis::~JSSpeechSynthesis();
}

JSSpeechSynthesis::~JSSpeechSynthesis()
{
    releaseImpl();
}

EncodedJSValue jsSpeechSynthesisPending(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSpeechSynthesisPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SpeechSynthesis", "pending");
        return throwGetterTypeError(*exec, "SpeechSynthesis", "pending");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.pending());
    return JSValue::encode(result);
}


EncodedJSValue jsSpeechSynthesisSpeaking(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSpeechSynthesisPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SpeechSynthesis", "speaking");
        return throwGetterTypeError(*exec, "SpeechSynthesis", "speaking");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.speaking());
    return JSValue::encode(result);
}


EncodedJSValue jsSpeechSynthesisPaused(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSpeechSynthesisPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SpeechSynthesis", "paused");
        return throwGetterTypeError(*exec, "SpeechSynthesis", "paused");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.paused());
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionSpeak(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SpeechSynthesis", "speak");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    SpeechSynthesisUtterance* utterance = JSSpeechSynthesisUtterance::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.speak(utterance);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionCancel(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SpeechSynthesis", "cancel");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    auto& impl = castedThis->impl();
    impl.cancel();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionPause(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SpeechSynthesis", "pause");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    auto& impl = castedThis->impl();
    impl.pause();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionResume(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SpeechSynthesis", "resume");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    auto& impl = castedThis->impl();
    impl.resume();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSpeechSynthesisPrototypeFunctionGetVoices(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSpeechSynthesis* castedThis = jsDynamicCast<JSSpeechSynthesis*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SpeechSynthesis", "getVoices");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSpeechSynthesis::info());
    auto& impl = castedThis->impl();
    JSValue result = jsArray(exec, castedThis->globalObject(), impl.getVoices());
    return JSValue::encode(result);
}

bool JSSpeechSynthesisOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSpeechSynthesisOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSpeechSynthesis = jsCast<JSSpeechSynthesis*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSpeechSynthesis->impl(), jsSpeechSynthesis);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7SpeechSynthesis@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15SpeechSynthesisE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, SpeechSynthesis* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSpeechSynthesis>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7SpeechSynthesis@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15SpeechSynthesisE[2];
#if COMPILER(CLANG)
    // If this fails SpeechSynthesis does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(SpeechSynthesis), SpeechSynthesis_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // SpeechSynthesis has subclasses. If SpeechSynthesis has subclasses that get passed
    // to toJS() we currently require SpeechSynthesis you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSSpeechSynthesis>(globalObject, impl);
}

SpeechSynthesis* JSSpeechSynthesis::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSpeechSynthesis*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(SPEECH_SYNTHESIS)
