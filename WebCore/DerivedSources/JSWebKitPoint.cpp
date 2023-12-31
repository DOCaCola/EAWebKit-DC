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
#include "JSWebKitPoint.h"

#include "JSDOMBinding.h"
#include "WebKitPoint.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebKitPointX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebKitPointX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebKitPointY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebKitPointY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebKitPointConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebKitPointPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebKitPointPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitPointPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitPointPrototype>(vm.heap)) JSWebKitPointPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebKitPointPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebKitPointConstructor : public DOMConstructorObject {
private:
    JSWebKitPointConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitPointConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitPointConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebKitPointConstructor>(vm.heap)) JSWebKitPointConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

const ClassInfo JSWebKitPointConstructor::s_info = { "WebKitPointConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitPointConstructor) };

JSWebKitPointConstructor::JSWebKitPointConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitPointConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitPoint::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebKitPoint"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSWebKitPointConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebKitPoint;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebKitPointPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitPointConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitPointX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebKitPointX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitPointY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebKitPointY) },
};

const ClassInfo JSWebKitPointPrototype::s_info = { "WebKitPointPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitPointPrototype) };

void JSWebKitPointPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebKitPointPrototypeTableValues, *this);
}

const ClassInfo JSWebKitPoint::s_info = { "WebKitPoint", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitPoint) };

JSWebKitPoint::JSWebKitPoint(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebKitPoint>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSWebKitPoint::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitPointPrototype::create(vm, globalObject, JSWebKitPointPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSWebKitPoint::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitPoint>(vm, globalObject);
}

void JSWebKitPoint::destroy(JSC::JSCell* cell)
{
    JSWebKitPoint* thisObject = static_cast<JSWebKitPoint*>(cell);
    thisObject->JSWebKitPoint::~JSWebKitPoint();
}

JSWebKitPoint::~JSWebKitPoint()
{
    releaseImpl();
}

EncodedJSValue jsWebKitPointX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebKitPoint* castedThis = jsDynamicCast<JSWebKitPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitPointPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebKitPoint", "x");
        return throwGetterTypeError(*exec, "WebKitPoint", "x");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitPointY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebKitPoint* castedThis = jsDynamicCast<JSWebKitPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitPointPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebKitPoint", "y");
        return throwGetterTypeError(*exec, "WebKitPoint", "y");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitPointConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebKitPointPrototype* domObject = jsDynamicCast<JSWebKitPointPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebKitPoint::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSWebKitPointX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebKitPoint* castedThis = jsDynamicCast<JSWebKitPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitPointPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebKitPoint", "x");
        else
            throwSetterTypeError(*exec, "WebKitPoint", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX(nativeValue);
}


void setJSWebKitPointY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebKitPoint* castedThis = jsDynamicCast<JSWebKitPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitPointPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebKitPoint", "y");
        else
            throwSetterTypeError(*exec, "WebKitPoint", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY(nativeValue);
}


JSValue JSWebKitPoint::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitPointConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSWebKitPointOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebKitPointOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWebKitPoint = jsCast<JSWebKitPoint*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebKitPoint->impl(), jsWebKitPoint);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WebKitPoint* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebKitPoint>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to WebKitPoint.
    COMPILE_ASSERT(!__is_polymorphic(WebKitPoint), WebKitPoint_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSWebKitPoint>(globalObject, impl);
}

WebKitPoint* JSWebKitPoint::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWebKitPoint*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
