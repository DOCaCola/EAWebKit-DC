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

#include "JSOESTextureHalfFloat.h"

#include "JSDOMBinding.h"
#include "OESTextureHalfFloat.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

class JSOESTextureHalfFloatPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSOESTextureHalfFloatPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSOESTextureHalfFloatPrototype* ptr = new (NotNull, JSC::allocateCell<JSOESTextureHalfFloatPrototype>(vm.heap)) JSOESTextureHalfFloatPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSOESTextureHalfFloatPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSOESTextureHalfFloatPrototypeTableValues[] =
{
    { "HALF_FLOAT_OES", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x8D61), (intptr_t) (0) },
};

const ClassInfo JSOESTextureHalfFloatPrototype::s_info = { "OESTextureHalfFloatPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESTextureHalfFloatPrototype) };

void JSOESTextureHalfFloatPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSOESTextureHalfFloatPrototypeTableValues, *this);
}

const ClassInfo JSOESTextureHalfFloat::s_info = { "OESTextureHalfFloat", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESTextureHalfFloat) };

JSOESTextureHalfFloat::JSOESTextureHalfFloat(Structure* structure, JSDOMGlobalObject* globalObject, Ref<OESTextureHalfFloat>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSOESTextureHalfFloat::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSOESTextureHalfFloatPrototype::create(vm, globalObject, JSOESTextureHalfFloatPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSOESTextureHalfFloat::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOESTextureHalfFloat>(vm, globalObject);
}

void JSOESTextureHalfFloat::destroy(JSC::JSCell* cell)
{
    JSOESTextureHalfFloat* thisObject = static_cast<JSOESTextureHalfFloat*>(cell);
    thisObject->JSOESTextureHalfFloat::~JSOESTextureHalfFloat();
}

JSOESTextureHalfFloat::~JSOESTextureHalfFloat()
{
    releaseImpl();
}

bool JSOESTextureHalfFloatOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsOESTextureHalfFloat = jsCast<JSOESTextureHalfFloat*>(handle.slot()->asCell());
    WebGLRenderingContextBase* root = WTF::getPtr(jsOESTextureHalfFloat->impl().context());
    return visitor.containsOpaqueRoot(root);
}

void JSOESTextureHalfFloatOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsOESTextureHalfFloat = jsCast<JSOESTextureHalfFloat*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsOESTextureHalfFloat->impl(), jsOESTextureHalfFloat);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7OESTextureHalfFloat@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore19OESTextureHalfFloatE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, OESTextureHalfFloat* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSOESTextureHalfFloat>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7OESTextureHalfFloat@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore19OESTextureHalfFloatE[2];
#if COMPILER(CLANG)
    // If this fails OESTextureHalfFloat does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(OESTextureHalfFloat), OESTextureHalfFloat_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // OESTextureHalfFloat has subclasses. If OESTextureHalfFloat has subclasses that get passed
    // to toJS() we currently require OESTextureHalfFloat you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSOESTextureHalfFloat>(globalObject, impl);
}

OESTextureHalfFloat* JSOESTextureHalfFloat::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSOESTextureHalfFloat*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
