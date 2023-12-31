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

#include "JSWebGLRenderbuffer.h"

#include "JSDOMBinding.h"
#include "WebGLRenderbuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebGLRenderbufferConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebGLRenderbufferPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebGLRenderbufferPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLRenderbufferPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLRenderbufferPrototype>(vm.heap)) JSWebGLRenderbufferPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLRenderbufferPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebGLRenderbufferConstructor : public DOMConstructorObject {
private:
    JSWebGLRenderbufferConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLRenderbufferConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLRenderbufferConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLRenderbufferConstructor>(vm.heap)) JSWebGLRenderbufferConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSWebGLRenderbufferConstructor::s_info = { "WebGLRenderbufferConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLRenderbufferConstructor) };

JSWebGLRenderbufferConstructor::JSWebGLRenderbufferConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLRenderbufferConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebGLRenderbuffer::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebGLRenderbuffer"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSWebGLRenderbufferPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLRenderbufferConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSWebGLRenderbufferPrototype::s_info = { "WebGLRenderbufferPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLRenderbufferPrototype) };

void JSWebGLRenderbufferPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebGLRenderbufferPrototypeTableValues, *this);
}

const ClassInfo JSWebGLRenderbuffer::s_info = { "WebGLRenderbuffer", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLRenderbuffer) };

JSWebGLRenderbuffer::JSWebGLRenderbuffer(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGLRenderbuffer>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSWebGLRenderbuffer::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLRenderbufferPrototype::create(vm, globalObject, JSWebGLRenderbufferPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSWebGLRenderbuffer::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLRenderbuffer>(vm, globalObject);
}

void JSWebGLRenderbuffer::destroy(JSC::JSCell* cell)
{
    JSWebGLRenderbuffer* thisObject = static_cast<JSWebGLRenderbuffer*>(cell);
    thisObject->JSWebGLRenderbuffer::~JSWebGLRenderbuffer();
}

JSWebGLRenderbuffer::~JSWebGLRenderbuffer()
{
    releaseImpl();
}

EncodedJSValue jsWebGLRenderbufferConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebGLRenderbufferPrototype* domObject = jsDynamicCast<JSWebGLRenderbufferPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebGLRenderbuffer::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebGLRenderbuffer::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLRenderbufferConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSWebGLRenderbufferOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLRenderbufferOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWebGLRenderbuffer = jsCast<JSWebGLRenderbuffer*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLRenderbuffer->impl(), jsWebGLRenderbuffer);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLRenderbuffer@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore17WebGLRenderbufferE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WebGLRenderbuffer* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLRenderbuffer>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLRenderbuffer@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore17WebGLRenderbufferE[2];
#if COMPILER(CLANG)
    // If this fails WebGLRenderbuffer does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLRenderbuffer), WebGLRenderbuffer_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLRenderbuffer has subclasses. If WebGLRenderbuffer has subclasses that get passed
    // to toJS() we currently require WebGLRenderbuffer you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSWebGLRenderbuffer>(globalObject, impl);
}

WebGLRenderbuffer* JSWebGLRenderbuffer::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWebGLRenderbuffer*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
