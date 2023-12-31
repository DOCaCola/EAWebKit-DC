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
#include "JSStyleMedia.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "StyleMedia.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsStyleMediaPrototypeFunctionMatchMedium(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsStyleMediaType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSStyleMediaPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSStyleMediaPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSStyleMediaPrototype* ptr = new (NotNull, JSC::allocateCell<JSStyleMediaPrototype>(vm.heap)) JSStyleMediaPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSStyleMediaPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSStyleMediaPrototypeTableValues[] =
{
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleMediaType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "matchMedium", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStyleMediaPrototypeFunctionMatchMedium), (intptr_t) (0) },
};

const ClassInfo JSStyleMediaPrototype::s_info = { "StyleMediaPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStyleMediaPrototype) };

void JSStyleMediaPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSStyleMediaPrototypeTableValues, *this);
}

const ClassInfo JSStyleMedia::s_info = { "StyleMedia", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStyleMedia) };

JSStyleMedia::JSStyleMedia(Structure* structure, JSDOMGlobalObject* globalObject, Ref<StyleMedia>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSStyleMedia::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSStyleMediaPrototype::create(vm, globalObject, JSStyleMediaPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSStyleMedia::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStyleMedia>(vm, globalObject);
}

void JSStyleMedia::destroy(JSC::JSCell* cell)
{
    JSStyleMedia* thisObject = static_cast<JSStyleMedia*>(cell);
    thisObject->JSStyleMedia::~JSStyleMedia();
}

JSStyleMedia::~JSStyleMedia()
{
    releaseImpl();
}

EncodedJSValue jsStyleMediaType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSStyleMedia* castedThis = jsDynamicCast<JSStyleMedia*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSStyleMediaPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "StyleMedia", "type");
        return throwGetterTypeError(*exec, "StyleMedia", "type");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsStyleMediaPrototypeFunctionMatchMedium(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStyleMedia* castedThis = jsDynamicCast<JSStyleMedia*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "StyleMedia", "matchMedium");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStyleMedia::info());
    auto& impl = castedThis->impl();
    String mediaquery = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.matchMedium(mediaquery));
    return JSValue::encode(result);
}

bool JSStyleMediaOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsStyleMedia = jsCast<JSStyleMedia*>(handle.slot()->asCell());
    Frame* root = WTF::getPtr(jsStyleMedia->impl().frame());
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSStyleMediaOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsStyleMedia = jsCast<JSStyleMedia*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsStyleMedia->impl(), jsStyleMedia);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7StyleMedia@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore10StyleMediaE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, StyleMedia* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSStyleMedia>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7StyleMedia@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore10StyleMediaE[2];
#if COMPILER(CLANG)
    // If this fails StyleMedia does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(StyleMedia), StyleMedia_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // StyleMedia has subclasses. If StyleMedia has subclasses that get passed
    // to toJS() we currently require StyleMedia you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSStyleMedia>(globalObject, impl);
}

StyleMedia* JSStyleMedia::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSStyleMedia*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
