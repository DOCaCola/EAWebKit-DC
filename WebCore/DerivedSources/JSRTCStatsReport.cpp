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

#include "JSRTCStatsReport.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSRTCStatsReport.h"
#include "RTCStatsReport.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsRTCStatsReportPrototypeFunctionStat(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRTCStatsReportPrototypeFunctionNames(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsRTCStatsReportTimestamp(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCStatsReportId(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCStatsReportType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCStatsReportLocal(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCStatsReportRemote(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSRTCStatsReportPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSRTCStatsReportPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRTCStatsReportPrototype* ptr = new (NotNull, JSC::allocateCell<JSRTCStatsReportPrototype>(vm.heap)) JSRTCStatsReportPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSRTCStatsReportPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSRTCStatsReportPrototypeTableValues[] =
{
    { "timestamp", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCStatsReportTimestamp), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "id", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCStatsReportId), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCStatsReportType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "local", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCStatsReportLocal), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "remote", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCStatsReportRemote), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "stat", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCStatsReportPrototypeFunctionStat), (intptr_t) (1) },
    { "names", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCStatsReportPrototypeFunctionNames), (intptr_t) (0) },
};

const ClassInfo JSRTCStatsReportPrototype::s_info = { "RTCStatsReportPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCStatsReportPrototype) };

void JSRTCStatsReportPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSRTCStatsReportPrototypeTableValues, *this);
}

const ClassInfo JSRTCStatsReport::s_info = { "RTCStatsReport", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCStatsReport) };

JSRTCStatsReport::JSRTCStatsReport(Structure* structure, JSDOMGlobalObject* globalObject, Ref<RTCStatsReport>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSRTCStatsReport::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRTCStatsReportPrototype::create(vm, globalObject, JSRTCStatsReportPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSRTCStatsReport::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRTCStatsReport>(vm, globalObject);
}

void JSRTCStatsReport::destroy(JSC::JSCell* cell)
{
    JSRTCStatsReport* thisObject = static_cast<JSRTCStatsReport*>(cell);
    thisObject->JSRTCStatsReport::~JSRTCStatsReport();
}

JSRTCStatsReport::~JSRTCStatsReport()
{
    releaseImpl();
}

EncodedJSValue jsRTCStatsReportTimestamp(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCStatsReportPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCStatsReport", "timestamp");
        return throwGetterTypeError(*exec, "RTCStatsReport", "timestamp");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsDateOrNull(exec, impl.timestamp());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCStatsReportId(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCStatsReportPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCStatsReport", "id");
        return throwGetterTypeError(*exec, "RTCStatsReport", "id");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.id());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCStatsReportType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCStatsReportPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCStatsReport", "type");
        return throwGetterTypeError(*exec, "RTCStatsReport", "type");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCStatsReportLocal(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCStatsReportPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCStatsReport", "local");
        return throwGetterTypeError(*exec, "RTCStatsReport", "local");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.local()));
    return JSValue::encode(result);
}


EncodedJSValue jsRTCStatsReportRemote(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCStatsReportPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCStatsReport", "remote");
        return throwGetterTypeError(*exec, "RTCStatsReport", "remote");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.remote()));
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsRTCStatsReportPrototypeFunctionStat(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "RTCStatsReport", "stat");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCStatsReport::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    String name = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsStringWithCache(exec, impl.stat(name));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsRTCStatsReportPrototypeFunctionNames(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSRTCStatsReport* castedThis = jsDynamicCast<JSRTCStatsReport*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "RTCStatsReport", "names");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCStatsReport::info());
    auto& impl = castedThis->impl();
    JSValue result = jsArray(exec, castedThis->globalObject(), impl.names());
    return JSValue::encode(result);
}

bool JSRTCStatsReportOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSRTCStatsReportOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsRTCStatsReport = jsCast<JSRTCStatsReport*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsRTCStatsReport->impl(), jsRTCStatsReport);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, RTCStatsReport* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRTCStatsReport>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to RTCStatsReport.
    COMPILE_ASSERT(!__is_polymorphic(RTCStatsReport), RTCStatsReport_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSRTCStatsReport>(globalObject, impl);
}

RTCStatsReport* JSRTCStatsReport::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSRTCStatsReport*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(MEDIA_STREAM)
