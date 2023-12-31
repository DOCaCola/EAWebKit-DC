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
#include "JSDOMWindowCSS.h"

#include "DOMWindowCSS.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports(JSC::ExecState*);

class JSDOMWindowCSSPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDOMWindowCSSPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMWindowCSSPrototype* ptr = new (NotNull, JSC::allocateCell<JSDOMWindowCSSPrototype>(vm.heap)) JSDOMWindowCSSPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDOMWindowCSSPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSDOMWindowCSSPrototypeTableValues[] =
{
    { "supports", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMWindowCSSPrototypeFunctionSupports), (intptr_t) (2) },
};

const ClassInfo JSDOMWindowCSSPrototype::s_info = { "CSSPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMWindowCSSPrototype) };

void JSDOMWindowCSSPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDOMWindowCSSPrototypeTableValues, *this);
}

const ClassInfo JSDOMWindowCSS::s_info = { "CSS", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMWindowCSS) };

JSDOMWindowCSS::JSDOMWindowCSS(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DOMWindowCSS>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDOMWindowCSS::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDOMWindowCSSPrototype::create(vm, globalObject, JSDOMWindowCSSPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDOMWindowCSS::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMWindowCSS>(vm, globalObject);
}

void JSDOMWindowCSS::destroy(JSC::JSCell* cell)
{
    JSDOMWindowCSS* thisObject = static_cast<JSDOMWindowCSS*>(cell);
    thisObject->JSDOMWindowCSS::~JSDOMWindowCSS();
}

JSDOMWindowCSS::~JSDOMWindowCSS()
{
    releaseImpl();
}

static EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports1(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMWindowCSS* castedThis = jsDynamicCast<JSDOMWindowCSS*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMWindowCSS", "supports");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMWindowCSS::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 2))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    String property = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String value = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.supports(property, value));
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports2(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMWindowCSS* castedThis = jsDynamicCast<JSDOMWindowCSS*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMWindowCSS", "supports");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMWindowCSS::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    String conditionText = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.supports(conditionText));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMWindowCSSPrototypeFunctionSupports(ExecState* exec)
{
    size_t argsCount = std::min<size_t>(2, exec->argumentCount());
    if (argsCount == 2)
        return jsDOMWindowCSSPrototypeFunctionSupports1(exec);
    if (argsCount == 1)
        return jsDOMWindowCSSPrototypeFunctionSupports2(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

bool JSDOMWindowCSSOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMWindowCSSOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDOMWindowCSS = jsCast<JSDOMWindowCSS*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDOMWindowCSS->impl(), jsDOMWindowCSS);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, DOMWindowCSS* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMWindowCSS>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMWindowCSS.
    COMPILE_ASSERT(!__is_polymorphic(DOMWindowCSS), DOMWindowCSS_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSDOMWindowCSS>(globalObject, impl);
}

DOMWindowCSS* JSDOMWindowCSS::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDOMWindowCSS*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
