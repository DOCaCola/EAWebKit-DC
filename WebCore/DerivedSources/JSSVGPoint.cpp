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
#include "JSSVGPoint.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGMatrix.h"
#include "JSSVGPoint.h"
#include "SVGPoint.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGPointPrototypeFunctionMatrixTransform(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsSVGPointX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPointX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPointY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPointY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPointConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPointPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPointPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPointPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPointPrototype>(vm.heap)) JSSVGPointPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPointPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPointConstructor : public DOMConstructorObject {
private:
    JSSVGPointConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPointConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPointConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPointConstructor>(vm.heap)) JSSVGPointConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPointConstructor::s_info = { "SVGPointConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPointConstructor) };

JSSVGPointConstructor::JSSVGPointConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPointConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPoint::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPoint"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPointPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPointX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPointY) },
    { "matrixTransform", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGPointPrototypeFunctionMatrixTransform), (intptr_t) (1) },
};

const ClassInfo JSSVGPointPrototype::s_info = { "SVGPointPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPointPrototype) };

void JSSVGPointPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPointPrototypeTableValues, *this);
}

const ClassInfo JSSVGPoint::s_info = { "SVGPoint", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPoint) };

JSSVGPoint::JSSVGPoint(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPropertyTearOff<SVGPoint>>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSSVGPoint::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPointPrototype::create(vm, globalObject, JSSVGPointPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSSVGPoint::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPoint>(vm, globalObject);
}

void JSSVGPoint::destroy(JSC::JSCell* cell)
{
    JSSVGPoint* thisObject = static_cast<JSSVGPoint*>(cell);
    thisObject->JSSVGPoint::~JSSVGPoint();
}

JSSVGPoint::~JSSVGPoint()
{
    releaseImpl();
}

EncodedJSValue jsSVGPointX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPoint* castedThis = jsDynamicCast<JSSVGPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPointPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPoint", "x");
        return throwGetterTypeError(*exec, "SVGPoint", "x");
    }
    SVGPoint& impl = castedThis->impl().propertyReference();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPointY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPoint* castedThis = jsDynamicCast<JSSVGPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPointPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPoint", "y");
        return throwGetterTypeError(*exec, "SVGPoint", "y");
    }
    SVGPoint& impl = castedThis->impl().propertyReference();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPointConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPointPrototype* domObject = jsDynamicCast<JSSVGPointPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPoint::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPointX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPoint* castedThis = jsDynamicCast<JSSVGPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPointPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPoint", "x");
        else
            throwSetterTypeError(*exec, "SVGPoint", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGPoint& podImpl = impl.propertyReference();
    podImpl.setX(nativeValue);
    impl.commitChange();
}


void setJSSVGPointY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPoint* castedThis = jsDynamicCast<JSSVGPoint*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPointPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPoint", "y");
        else
            throwSetterTypeError(*exec, "SVGPoint", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGPoint& podImpl = impl.propertyReference();
    podImpl.setY(nativeValue);
    impl.commitChange();
}


JSValue JSSVGPoint::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPointConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGPointPrototypeFunctionMatrixTransform(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSVGPoint* castedThis = jsDynamicCast<JSSVGPoint*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SVGPoint", "matrixTransform");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGPoint::info());
    auto& impl = castedThis->impl();
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    SVGPoint& podImpl = impl.propertyReference();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    if (!exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSSVGMatrix::info()))
        return throwArgumentTypeError(*exec, 0, "matrix", "SVGPoint", "matrixTransform", "SVGMatrix");
    SVGPropertyTearOff<SVGMatrix>* matrix = JSSVGMatrix::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    if (!matrix) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGPoint>::create(podImpl.matrixTransform(matrix->propertyReference()))));
    return JSValue::encode(result);
}

bool JSSVGPointOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGPointOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSVGPoint = jsCast<JSSVGPoint*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGPoint->impl(), jsSVGPoint);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<SVGPoint>* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGPoint, SVGPropertyTearOff<SVGPoint>>(globalObject, impl))
        return result;
    return createNewWrapper<JSSVGPoint, SVGPropertyTearOff<SVGPoint>>(globalObject, impl);
}

SVGPropertyTearOff<SVGPoint>* JSSVGPoint::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSVGPoint*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
