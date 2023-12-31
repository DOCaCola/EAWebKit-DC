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

#if ENABLE(WEBGL)

#include "JSOESTextureHalfFloatLinear.h"

#include "JSDOMBinding.h"
#include "OESTextureHalfFloatLinear.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

class JSOESTextureHalfFloatLinearPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSOESTextureHalfFloatLinearPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSOESTextureHalfFloatLinearPrototype* ptr = new (NotNull, JSC::allocateCell<JSOESTextureHalfFloatLinearPrototype>(vm.heap)) JSOESTextureHalfFloatLinearPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSOESTextureHalfFloatLinearPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSOESTextureHalfFloatLinearPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

const ClassInfo JSOESTextureHalfFloatLinearPrototype::s_info = { "OESTextureHalfFloatLinearPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESTextureHalfFloatLinearPrototype) };

void JSOESTextureHalfFloatLinearPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSOESTextureHalfFloatLinearPrototypeTableValues, *this);
}

const ClassInfo JSOESTextureHalfFloatLinear::s_info = { "OESTextureHalfFloatLinear", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESTextureHalfFloatLinear) };

JSOESTextureHalfFloatLinear::JSOESTextureHalfFloatLinear(Structure* structure, JSDOMGlobalObject* globalObject, Ref<OESTextureHalfFloatLinear>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSOESTextureHalfFloatLinear::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSOESTextureHalfFloatLinearPrototype::create(vm, globalObject, JSOESTextureHalfFloatLinearPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSOESTextureHalfFloatLinear::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOESTextureHalfFloatLinear>(vm, globalObject);
}

void JSOESTextureHalfFloatLinear::destroy(JSC::JSCell* cell)
{
    JSOESTextureHalfFloatLinear* thisObject = static_cast<JSOESTextureHalfFloatLinear*>(cell);
    thisObject->JSOESTextureHalfFloatLinear::~JSOESTextureHalfFloatLinear();
}

JSOESTextureHalfFloatLinear::~JSOESTextureHalfFloatLinear()
{
    releaseImpl();
}

bool JSOESTextureHalfFloatLinearOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsOESTextureHalfFloatLinear = jsCast<JSOESTextureHalfFloatLinear*>(handle.slot()->asCell());
    WebGLRenderingContextBase* root = WTF::getPtr(jsOESTextureHalfFloatLinear->impl().context());
    return visitor.containsOpaqueRoot(root);
}

void JSOESTextureHalfFloatLinearOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsOESTextureHalfFloatLinear = jsCast<JSOESTextureHalfFloatLinear*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsOESTextureHalfFloatLinear->impl(), jsOESTextureHalfFloatLinear);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7OESTextureHalfFloatLinear@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore25OESTextureHalfFloatLinearE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, OESTextureHalfFloatLinear* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSOESTextureHalfFloatLinear>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7OESTextureHalfFloatLinear@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore25OESTextureHalfFloatLinearE[2];
#if COMPILER(CLANG)
    // If this fails OESTextureHalfFloatLinear does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(OESTextureHalfFloatLinear), OESTextureHalfFloatLinear_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // OESTextureHalfFloatLinear has subclasses. If OESTextureHalfFloatLinear has subclasses that get passed
    // to toJS() we currently require OESTextureHalfFloatLinear you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSOESTextureHalfFloatLinear>(globalObject, impl);
}

OESTextureHalfFloatLinear* JSOESTextureHalfFloatLinear::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSOESTextureHalfFloatLinear*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
