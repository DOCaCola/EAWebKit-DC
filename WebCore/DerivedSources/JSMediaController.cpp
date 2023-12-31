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

#if ENABLE(VIDEO)

#include "JSMediaController.h"

#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSTimeRanges.h"
#include "MediaController.h"
#include "TimeRanges.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionPlay(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionPause(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionUnpause(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionDispatchEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsMediaControllerBuffered(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaControllerSeekable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaControllerDuration(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaControllerCurrentTime(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSMediaControllerCurrentTime(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMediaControllerPaused(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaControllerPlayed(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaControllerPlaybackState(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaControllerDefaultPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSMediaControllerDefaultPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMediaControllerPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSMediaControllerPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMediaControllerVolume(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSMediaControllerVolume(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMediaControllerMuted(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSMediaControllerMuted(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMediaControllerConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaControllerPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaControllerPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaControllerPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaControllerPrototype>(vm.heap)) JSMediaControllerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaControllerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaControllerConstructor : public DOMConstructorObject {
private:
    JSMediaControllerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaControllerConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaControllerConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaControllerConstructor>(vm.heap)) JSMediaControllerConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaController(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSMediaControllerConstructor::constructJSMediaController(ExecState* exec)
{
    auto* castedThis = jsCast<JSMediaControllerConstructor*>(exec->callee());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwConstructorDocumentUnavailableError(*exec, "MediaController");
    RefPtr<MediaController> object = MediaController::create(*context);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSMediaControllerConstructor::s_info = { "MediaControllerConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaControllerConstructor) };

JSMediaControllerConstructor::JSMediaControllerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaControllerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaController::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MediaController"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSMediaControllerConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaController;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaControllerPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "buffered", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerBuffered), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "seekable", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerSeekable), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "duration", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerDuration), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "currentTime", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerCurrentTime), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMediaControllerCurrentTime) },
    { "paused", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPaused), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "played", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPlayed), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "playbackState", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPlaybackState), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "defaultPlaybackRate", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerDefaultPlaybackRate), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMediaControllerDefaultPlaybackRate) },
    { "playbackRate", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPlaybackRate), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMediaControllerPlaybackRate) },
    { "volume", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerVolume), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMediaControllerVolume) },
    { "muted", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerMuted), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMediaControllerMuted) },
    { "play", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionPlay), (intptr_t) (0) },
    { "pause", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionPause), (intptr_t) (0) },
    { "unpause", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionUnpause), (intptr_t) (0) },
    { "addEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionAddEventListener), (intptr_t) (2) },
    { "removeEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionRemoveEventListener), (intptr_t) (2) },
    { "dispatchEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionDispatchEvent), (intptr_t) (1) },
};

const ClassInfo JSMediaControllerPrototype::s_info = { "MediaControllerPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaControllerPrototype) };

void JSMediaControllerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaControllerPrototypeTableValues, *this);
}

const ClassInfo JSMediaController::s_info = { "MediaController", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaController) };

JSMediaController::JSMediaController(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaController>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSMediaController::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaControllerPrototype::create(vm, globalObject, JSMediaControllerPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSMediaController::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaController>(vm, globalObject);
}

void JSMediaController::destroy(JSC::JSCell* cell)
{
    JSMediaController* thisObject = static_cast<JSMediaController*>(cell);
    thisObject->JSMediaController::~JSMediaController();
}

JSMediaController::~JSMediaController()
{
    releaseImpl();
}

EncodedJSValue jsMediaControllerBuffered(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "buffered");
        return throwGetterTypeError(*exec, "MediaController", "buffered");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.buffered()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerSeekable(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "seekable");
        return throwGetterTypeError(*exec, "MediaController", "seekable");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.seekable()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerDuration(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "duration");
        return throwGetterTypeError(*exec, "MediaController", "duration");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.duration());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerCurrentTime(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "currentTime");
        return throwGetterTypeError(*exec, "MediaController", "currentTime");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.currentTime());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerPaused(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "paused");
        return throwGetterTypeError(*exec, "MediaController", "paused");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.paused());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerPlayed(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "played");
        return throwGetterTypeError(*exec, "MediaController", "played");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.played()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerPlaybackState(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "playbackState");
        return throwGetterTypeError(*exec, "MediaController", "playbackState");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.playbackState());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerDefaultPlaybackRate(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "defaultPlaybackRate");
        return throwGetterTypeError(*exec, "MediaController", "defaultPlaybackRate");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.defaultPlaybackRate());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerPlaybackRate(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "playbackRate");
        return throwGetterTypeError(*exec, "MediaController", "playbackRate");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.playbackRate());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerVolume(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "volume");
        return throwGetterTypeError(*exec, "MediaController", "volume");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.volume());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerMuted(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaController", "muted");
        return throwGetterTypeError(*exec, "MediaController", "muted");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.muted());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControllerConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaControllerPrototype* domObject = jsDynamicCast<JSMediaControllerPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaController::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSMediaControllerCurrentTime(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "MediaController", "currentTime");
        else
            throwSetterTypeError(*exec, "MediaController", "currentTime");
        return;
    }
    auto& impl = castedThis->impl();
    double nativeValue = value.toNumber(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setCurrentTime(nativeValue);
}


void setJSMediaControllerDefaultPlaybackRate(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "MediaController", "defaultPlaybackRate");
        else
            throwSetterTypeError(*exec, "MediaController", "defaultPlaybackRate");
        return;
    }
    auto& impl = castedThis->impl();
    double nativeValue = value.toNumber(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDefaultPlaybackRate(nativeValue);
}


void setJSMediaControllerPlaybackRate(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "MediaController", "playbackRate");
        else
            throwSetterTypeError(*exec, "MediaController", "playbackRate");
        return;
    }
    auto& impl = castedThis->impl();
    double nativeValue = value.toNumber(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setPlaybackRate(nativeValue);
}


void setJSMediaControllerVolume(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "MediaController", "volume");
        else
            throwSetterTypeError(*exec, "MediaController", "volume");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue = value.toNumber(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setVolume(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSMediaControllerMuted(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaControllerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "MediaController", "muted");
        else
            throwSetterTypeError(*exec, "MediaController", "muted");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setMuted(nativeValue);
}


JSValue JSMediaController::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaControllerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionPlay(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaController", "play");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    auto& impl = castedThis->impl();
    impl.play();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionPause(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaController", "pause");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    auto& impl = castedThis->impl();
    impl.pause();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionUnpause(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaController", "unpause");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    auto& impl = castedThis->impl();
    impl.unpause();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaController", "addEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForAdd(*exec, *asObject(listener), *castedThis), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaController", "removeEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForRemove(*exec, *asObject(listener), *castedThis).ptr(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaController* castedThis = jsDynamicCast<JSMediaController*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaController", "dispatchEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
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

void JSMediaController::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSMediaController*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSMediaControllerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsMediaController = jsCast<JSMediaController*>(handle.slot()->asCell());
    if (jsMediaController->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaControllerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsMediaController = jsCast<JSMediaController*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaController->impl(), jsMediaController);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MediaController@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15MediaControllerE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, MediaController* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaController>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MediaController@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15MediaControllerE[2];
#if COMPILER(CLANG)
    // If this fails MediaController does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MediaController), MediaController_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MediaController has subclasses. If MediaController has subclasses that get passed
    // to toJS() we currently require MediaController you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSMediaController>(globalObject, impl);
}

MediaController* JSMediaController::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSMediaController*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(VIDEO)
