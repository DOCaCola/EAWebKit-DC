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
#include "JSBarProp.h"

#include "BarProp.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsBarPropVisible(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsBarPropConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSBarPropPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSBarPropPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSBarPropPrototype* ptr = new (NotNull, JSC::allocateCell<JSBarPropPrototype>(vm.heap)) JSBarPropPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSBarPropPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSBarPropConstructor : public DOMConstructorObject {
private:
    JSBarPropConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSBarPropConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSBarPropConstructor* ptr = new (NotNull, JSC::allocateCell<JSBarPropConstructor>(vm.heap)) JSBarPropConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSBarPropConstructor::s_info = { "BarPropConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBarPropConstructor) };

JSBarPropConstructor::JSBarPropConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSBarPropConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSBarProp::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("BarProp"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSBarPropPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBarPropConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "visible", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBarPropVisible), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSBarPropPrototype::s_info = { "BarPropPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBarPropPrototype) };

void JSBarPropPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSBarPropPrototypeTableValues, *this);
}

const ClassInfo JSBarProp::s_info = { "BarProp", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBarProp) };

JSBarProp::JSBarProp(Structure* structure, JSDOMGlobalObject* globalObject, Ref<BarProp>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSBarProp::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSBarPropPrototype::create(vm, globalObject, JSBarPropPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSBarProp::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBarProp>(vm, globalObject);
}

void JSBarProp::destroy(JSC::JSCell* cell)
{
    JSBarProp* thisObject = static_cast<JSBarProp*>(cell);
    thisObject->JSBarProp::~JSBarProp();
}

JSBarProp::~JSBarProp()
{
    releaseImpl();
}

EncodedJSValue jsBarPropVisible(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSBarProp* castedThis = jsDynamicCast<JSBarProp*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSBarPropPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "BarProp", "visible");
        return throwGetterTypeError(*exec, "BarProp", "visible");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.visible());
    return JSValue::encode(result);
}


EncodedJSValue jsBarPropConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSBarPropPrototype* domObject = jsDynamicCast<JSBarPropPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSBarProp::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSBarProp::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBarPropConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSBarPropOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsBarProp = jsCast<JSBarProp*>(handle.slot()->asCell());
    Frame* root = WTF::getPtr(jsBarProp->impl().frame());
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSBarPropOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsBarProp = jsCast<JSBarProp*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsBarProp->impl(), jsBarProp);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7BarProp@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore7BarPropE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, BarProp* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSBarProp>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7BarProp@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore7BarPropE[2];
#if COMPILER(CLANG)
    // If this fails BarProp does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(BarProp), BarProp_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // BarProp has subclasses. If BarProp has subclasses that get passed
    // to toJS() we currently require BarProp you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSBarProp>(globalObject, impl);
}

BarProp* JSBarProp::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSBarProp*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
