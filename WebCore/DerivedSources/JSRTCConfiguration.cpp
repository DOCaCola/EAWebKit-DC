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

#if ENABLE(MEDIA_STREAM)

#include "JSRTCConfiguration.h"

#include "JSDOMBinding.h"
#include "JSRTCIceServer.h"
#include "RTCConfiguration.h"
#include "RTCIceServer.h"
#include <runtime/JSArray.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsRTCConfigurationIceServers(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCConfigurationIceTransports(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCConfigurationRequestIdentity(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSRTCConfigurationPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSRTCConfigurationPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRTCConfigurationPrototype* ptr = new (NotNull, JSC::allocateCell<JSRTCConfigurationPrototype>(vm.heap)) JSRTCConfigurationPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSRTCConfigurationPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSRTCConfigurationPrototypeTableValues[] =
{
    { "iceServers", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCConfigurationIceServers), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "iceTransports", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCConfigurationIceTransports), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "requestIdentity", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCConfigurationRequestIdentity), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSRTCConfigurationPrototype::s_info = { "RTCConfigurationPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCConfigurationPrototype) };

void JSRTCConfigurationPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSRTCConfigurationPrototypeTableValues, *this);
}

const ClassInfo JSRTCConfiguration::s_info = { "RTCConfiguration", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCConfiguration) };

JSRTCConfiguration::JSRTCConfiguration(Structure* structure, JSDOMGlobalObject* globalObject, Ref<RTCConfiguration>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSRTCConfiguration::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRTCConfigurationPrototype::create(vm, globalObject, JSRTCConfigurationPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSRTCConfiguration::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRTCConfiguration>(vm, globalObject);
}

void JSRTCConfiguration::destroy(JSC::JSCell* cell)
{
    JSRTCConfiguration* thisObject = static_cast<JSRTCConfiguration*>(cell);
    thisObject->JSRTCConfiguration::~JSRTCConfiguration();
}

JSRTCConfiguration::~JSRTCConfiguration()
{
    releaseImpl();
}

EncodedJSValue jsRTCConfigurationIceServers(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCConfiguration* castedThis = jsDynamicCast<JSRTCConfiguration*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCConfigurationPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCConfiguration", "iceServers");
        return throwGetterTypeError(*exec, "RTCConfiguration", "iceServers");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsArray(exec, castedThis->globalObject(), impl.iceServers());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCConfigurationIceTransports(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCConfiguration* castedThis = jsDynamicCast<JSRTCConfiguration*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCConfigurationPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCConfiguration", "iceTransports");
        return throwGetterTypeError(*exec, "RTCConfiguration", "iceTransports");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.iceTransports());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCConfigurationRequestIdentity(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCConfiguration* castedThis = jsDynamicCast<JSRTCConfiguration*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCConfigurationPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCConfiguration", "requestIdentity");
        return throwGetterTypeError(*exec, "RTCConfiguration", "requestIdentity");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.requestIdentity());
    return JSValue::encode(result);
}


bool JSRTCConfigurationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSRTCConfigurationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsRTCConfiguration = jsCast<JSRTCConfiguration*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsRTCConfiguration->impl(), jsRTCConfiguration);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7RTCConfiguration@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16RTCConfigurationE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, RTCConfiguration* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRTCConfiguration>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7RTCConfiguration@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16RTCConfigurationE[2];
#if COMPILER(CLANG)
    // If this fails RTCConfiguration does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(RTCConfiguration), RTCConfiguration_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // RTCConfiguration has subclasses. If RTCConfiguration has subclasses that get passed
    // to toJS() we currently require RTCConfiguration you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSRTCConfiguration>(globalObject, impl);
}

RTCConfiguration* JSRTCConfiguration::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSRTCConfiguration*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(MEDIA_STREAM)
