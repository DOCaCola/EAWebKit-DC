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
#include "JSSVGAnimatedAngle.h"

#include "JSDOMBinding.h"
#include "JSSVGAngle.h"
#include "SVGAngle.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGAnimatedAngleBaseVal(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGAnimatedAngleAnimVal(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGAnimatedAngleConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGAnimatedAnglePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGAnimatedAnglePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGAnimatedAnglePrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGAnimatedAnglePrototype>(vm.heap)) JSSVGAnimatedAnglePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGAnimatedAnglePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGAnimatedAngleConstructor : public DOMConstructorObject {
private:
    JSSVGAnimatedAngleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAnimatedAngleConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAnimatedAngleConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGAnimatedAngleConstructor>(vm.heap)) JSSVGAnimatedAngleConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGAnimatedAngleConstructor::s_info = { "SVGAnimatedAngleConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimatedAngleConstructor) };

JSSVGAnimatedAngleConstructor::JSSVGAnimatedAngleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimatedAngleConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAnimatedAngle::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGAnimatedAngle"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedAnglePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedAngleConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "baseVal", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedAngleBaseVal), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "animVal", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedAngleAnimVal), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGAnimatedAnglePrototype::s_info = { "SVGAnimatedAnglePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimatedAnglePrototype) };

void JSSVGAnimatedAnglePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGAnimatedAnglePrototypeTableValues, *this);
}

const ClassInfo JSSVGAnimatedAngle::s_info = { "SVGAnimatedAngle", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimatedAngle) };

JSSVGAnimatedAngle::JSSVGAnimatedAngle(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGAnimatedAngle>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSSVGAnimatedAngle::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAnimatedAnglePrototype::create(vm, globalObject, JSSVGAnimatedAnglePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSSVGAnimatedAngle::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedAngle>(vm, globalObject);
}

void JSSVGAnimatedAngle::destroy(JSC::JSCell* cell)
{
    JSSVGAnimatedAngle* thisObject = static_cast<JSSVGAnimatedAngle*>(cell);
    thisObject->JSSVGAnimatedAngle::~JSSVGAnimatedAngle();
}

JSSVGAnimatedAngle::~JSSVGAnimatedAngle()
{
    releaseImpl();
}

EncodedJSValue jsSVGAnimatedAngleBaseVal(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGAnimatedAngle* castedThis = jsDynamicCast<JSSVGAnimatedAngle*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGAnimatedAnglePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGAnimatedAngle", "baseVal");
        return throwGetterTypeError(*exec, "SVGAnimatedAngle", "baseVal");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGPropertyTearOff<SVGAngle>*>(impl.baseVal())));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGAnimatedAngleAnimVal(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGAnimatedAngle* castedThis = jsDynamicCast<JSSVGAnimatedAngle*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGAnimatedAnglePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGAnimatedAngle", "animVal");
        return throwGetterTypeError(*exec, "SVGAnimatedAngle", "animVal");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGPropertyTearOff<SVGAngle>*>(impl.animVal())));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGAnimatedAngleConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGAnimatedAnglePrototype* domObject = jsDynamicCast<JSSVGAnimatedAnglePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGAnimatedAngle::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGAnimatedAngle::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedAngleConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSSVGAnimatedAngleOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGAnimatedAngleOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSVGAnimatedAngle = jsCast<JSSVGAnimatedAngle*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGAnimatedAngle->impl(), jsSVGAnimatedAngle);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, SVGAnimatedAngle* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGAnimatedAngle>(globalObject, impl))
        return result;
    return createNewWrapper<JSSVGAnimatedAngle>(globalObject, impl);
}

SVGAnimatedAngle* JSSVGAnimatedAngle::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSVGAnimatedAngle*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
