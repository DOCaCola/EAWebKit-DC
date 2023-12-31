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

#include "JSWebGLVertexArrayObjectOES.h"

#include "JSDOMBinding.h"
#include "WebGLVertexArrayObjectOES.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

class JSWebGLVertexArrayObjectOESPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebGLVertexArrayObjectOESPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLVertexArrayObjectOESPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLVertexArrayObjectOESPrototype>(vm.heap)) JSWebGLVertexArrayObjectOESPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLVertexArrayObjectOESPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSWebGLVertexArrayObjectOESPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

const ClassInfo JSWebGLVertexArrayObjectOESPrototype::s_info = { "WebGLVertexArrayObjectOESPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLVertexArrayObjectOESPrototype) };

void JSWebGLVertexArrayObjectOESPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebGLVertexArrayObjectOESPrototypeTableValues, *this);
}

const ClassInfo JSWebGLVertexArrayObjectOES::s_info = { "WebGLVertexArrayObjectOES", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLVertexArrayObjectOES) };

JSWebGLVertexArrayObjectOES::JSWebGLVertexArrayObjectOES(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGLVertexArrayObjectOES>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSWebGLVertexArrayObjectOES::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLVertexArrayObjectOESPrototype::create(vm, globalObject, JSWebGLVertexArrayObjectOESPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSWebGLVertexArrayObjectOES::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLVertexArrayObjectOES>(vm, globalObject);
}

void JSWebGLVertexArrayObjectOES::destroy(JSC::JSCell* cell)
{
    JSWebGLVertexArrayObjectOES* thisObject = static_cast<JSWebGLVertexArrayObjectOES*>(cell);
    thisObject->JSWebGLVertexArrayObjectOES::~JSWebGLVertexArrayObjectOES();
}

JSWebGLVertexArrayObjectOES::~JSWebGLVertexArrayObjectOES()
{
    releaseImpl();
}

bool JSWebGLVertexArrayObjectOESOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLVertexArrayObjectOESOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWebGLVertexArrayObjectOES = jsCast<JSWebGLVertexArrayObjectOES*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLVertexArrayObjectOES->impl(), jsWebGLVertexArrayObjectOES);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLVertexArrayObjectOES@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore25WebGLVertexArrayObjectOESE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WebGLVertexArrayObjectOES* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLVertexArrayObjectOES>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLVertexArrayObjectOES@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore25WebGLVertexArrayObjectOESE[2];
#if COMPILER(CLANG)
    // If this fails WebGLVertexArrayObjectOES does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLVertexArrayObjectOES), WebGLVertexArrayObjectOES_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLVertexArrayObjectOES has subclasses. If WebGLVertexArrayObjectOES has subclasses that get passed
    // to toJS() we currently require WebGLVertexArrayObjectOES you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSWebGLVertexArrayObjectOES>(globalObject, impl);
}

WebGLVertexArrayObjectOES* JSWebGLVertexArrayObjectOES::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWebGLVertexArrayObjectOES*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
