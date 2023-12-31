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
#include "JSSVGRenderingIntent.h"

#include "JSDOMBinding.h"
#include "SVGRenderingIntent.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGRenderingIntentConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGRenderingIntentPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGRenderingIntentPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGRenderingIntentPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGRenderingIntentPrototype>(vm.heap)) JSSVGRenderingIntentPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGRenderingIntentPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGRenderingIntentConstructor : public DOMConstructorObject {
private:
    JSSVGRenderingIntentConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGRenderingIntentConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGRenderingIntentConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGRenderingIntentConstructor>(vm.heap)) JSSVGRenderingIntentConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table for constructor */

static const HashTableValue JSSVGRenderingIntentConstructorTableValues[] =
{
    { "RENDERING_INTENT_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "RENDERING_INTENT_AUTO", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "RENDERING_INTENT_PERCEPTUAL", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "RENDERING_INTENT_RELATIVE_COLORIMETRIC", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "RENDERING_INTENT_SATURATION", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "RENDERING_INTENT_ABSOLUTE_COLORIMETRIC", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
};


COMPILE_ASSERT(0 == SVGRenderingIntent::RENDERING_INTENT_UNKNOWN, SVGRenderingIntentEnumRENDERING_INTENT_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGRenderingIntent::RENDERING_INTENT_AUTO, SVGRenderingIntentEnumRENDERING_INTENT_AUTOIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGRenderingIntent::RENDERING_INTENT_PERCEPTUAL, SVGRenderingIntentEnumRENDERING_INTENT_PERCEPTUALIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == SVGRenderingIntent::RENDERING_INTENT_RELATIVE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_RELATIVE_COLORIMETRICIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == SVGRenderingIntent::RENDERING_INTENT_SATURATION, SVGRenderingIntentEnumRENDERING_INTENT_SATURATIONIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == SVGRenderingIntent::RENDERING_INTENT_ABSOLUTE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_ABSOLUTE_COLORIMETRICIsWrongUseDoNotCheckConstants);

const ClassInfo JSSVGRenderingIntentConstructor::s_info = { "SVGRenderingIntentConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGRenderingIntentConstructor) };

JSSVGRenderingIntentConstructor::JSSVGRenderingIntentConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGRenderingIntentConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGRenderingIntent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGRenderingIntent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSSVGRenderingIntentConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSSVGRenderingIntentPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "RENDERING_INTENT_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "RENDERING_INTENT_AUTO", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "RENDERING_INTENT_PERCEPTUAL", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "RENDERING_INTENT_RELATIVE_COLORIMETRIC", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "RENDERING_INTENT_SATURATION", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "RENDERING_INTENT_ABSOLUTE_COLORIMETRIC", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
};

const ClassInfo JSSVGRenderingIntentPrototype::s_info = { "SVGRenderingIntentPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGRenderingIntentPrototype) };

void JSSVGRenderingIntentPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGRenderingIntentPrototypeTableValues, *this);
}

const ClassInfo JSSVGRenderingIntent::s_info = { "SVGRenderingIntent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGRenderingIntent) };

JSSVGRenderingIntent::JSSVGRenderingIntent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGRenderingIntent>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSSVGRenderingIntent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGRenderingIntentPrototype::create(vm, globalObject, JSSVGRenderingIntentPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSSVGRenderingIntent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGRenderingIntent>(vm, globalObject);
}

void JSSVGRenderingIntent::destroy(JSC::JSCell* cell)
{
    JSSVGRenderingIntent* thisObject = static_cast<JSSVGRenderingIntent*>(cell);
    thisObject->JSSVGRenderingIntent::~JSSVGRenderingIntent();
}

JSSVGRenderingIntent::~JSSVGRenderingIntent()
{
    releaseImpl();
}

EncodedJSValue jsSVGRenderingIntentConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGRenderingIntentPrototype* domObject = jsDynamicCast<JSSVGRenderingIntentPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGRenderingIntent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGRenderingIntent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGRenderingIntentConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSSVGRenderingIntentOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGRenderingIntentOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSVGRenderingIntent = jsCast<JSSVGRenderingIntent*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGRenderingIntent->impl(), jsSVGRenderingIntent);
}

SVGRenderingIntent* JSSVGRenderingIntent::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSVGRenderingIntent*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
