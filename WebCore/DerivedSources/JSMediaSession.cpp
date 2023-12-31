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

#if ENABLE(MEDIA_SESSION)

#include "JSMediaSession.h"

#include "Dictionary.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSMediaRemoteControls.h"
#include "MediaRemoteControls.h"
#include "MediaSession.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMediaSessionPrototypeFunctionSetMetadata(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaSessionPrototypeFunctionReleaseSession(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsMediaSessionKind(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaSessionControls(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaSessionConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaSessionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaSessionPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaSessionPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaSessionPrototype>(vm.heap)) JSMediaSessionPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaSessionPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaSessionConstructor : public DOMConstructorObject {
private:
    JSMediaSessionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaSessionConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaSessionConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaSessionConstructor>(vm.heap)) JSMediaSessionConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaSession(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSMediaSessionConstructor::constructJSMediaSession(ExecState* exec)
{
    auto* castedThis = jsCast<JSMediaSessionConstructor*>(exec->callee());
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    // Keep pointer to the JSString in a local so we don't need to ref the String.
    auto* kindString = exec->argument(0).toString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    auto& kind = kindString->value(exec);
    if (kind != "content" && kind != "transient" && kind != "transient-solo" && kind != "ambient")
        return throwArgumentMustBeEnumError(*exec, 0, "kind", "MediaSession", nullptr, "\"content\", \"transient\", \"transient-solo\", \"ambient\"");
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwConstructorDocumentUnavailableError(*exec, "MediaSession");
    RefPtr<MediaSession> object = MediaSession::create(*context, kind);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSMediaSessionConstructor::s_info = { "MediaSessionConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaSessionConstructor) };

JSMediaSessionConstructor::JSMediaSessionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaSessionConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaSession::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MediaSession"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSMediaSessionConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaSession;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaSessionPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaSessionConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "kind", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaSessionKind), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "controls", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaSessionControls), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "setMetadata", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaSessionPrototypeFunctionSetMetadata), (intptr_t) (1) },
    { "releaseSession", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaSessionPrototypeFunctionReleaseSession), (intptr_t) (0) },
};

const ClassInfo JSMediaSessionPrototype::s_info = { "MediaSessionPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaSessionPrototype) };

void JSMediaSessionPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaSessionPrototypeTableValues, *this);
}

const ClassInfo JSMediaSession::s_info = { "MediaSession", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaSession) };

JSMediaSession::JSMediaSession(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaSession>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSMediaSession::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaSessionPrototype::create(vm, globalObject, JSMediaSessionPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSMediaSession::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaSession>(vm, globalObject);
}

void JSMediaSession::destroy(JSC::JSCell* cell)
{
    JSMediaSession* thisObject = static_cast<JSMediaSession*>(cell);
    thisObject->JSMediaSession::~JSMediaSession();
}

JSMediaSession::~JSMediaSession()
{
    releaseImpl();
}

EncodedJSValue jsMediaSessionKind(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaSession* castedThis = jsDynamicCast<JSMediaSession*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaSessionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaSession", "kind");
        return throwGetterTypeError(*exec, "MediaSession", "kind");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.kind());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaSessionControls(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaSession* castedThis = jsDynamicCast<JSMediaSession*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaSessionPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaSession", "controls");
        return throwGetterTypeError(*exec, "MediaSession", "controls");
    }
    bool isNull = false;
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.controls(isNull)));
    if (isNull)
        return JSValue::encode(jsNull());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaSessionConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaSessionPrototype* domObject = jsDynamicCast<JSMediaSessionPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaSession::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSMediaSession::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaSessionConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaSessionPrototypeFunctionSetMetadata(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaSession* castedThis = jsDynamicCast<JSMediaSession*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaSession", "setMetadata");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaSession::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    Dictionary metadata = { exec, exec->argument(0) };
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setMetadata(metadata);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaSessionPrototypeFunctionReleaseSession(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaSession* castedThis = jsDynamicCast<JSMediaSession*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaSession", "releaseSession");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaSession::info());
    auto& impl = castedThis->impl();
    impl.releaseSession();
    return JSValue::encode(jsUndefined());
}

bool JSMediaSessionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaSessionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsMediaSession = jsCast<JSMediaSession*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaSession->impl(), jsMediaSession);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, MediaSession* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaSession>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MediaSession.
    COMPILE_ASSERT(!__is_polymorphic(MediaSession), MediaSession_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSMediaSession>(globalObject, impl);
}

MediaSession* JSMediaSession::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSMediaSession*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(MEDIA_SESSION)
