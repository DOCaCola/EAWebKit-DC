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

#if ENABLE(ENCRYPTED_MEDIA) || ENABLE(ENCRYPTED_MEDIA_V2)

#include "JSMediaKeyError.h"

#include "JSDOMBinding.h"
#include "MediaKeyError.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsMediaKeyErrorCode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
#if ENABLE(ENCRYPTED_MEDIA_V2)
JSC::EncodedJSValue jsMediaKeyErrorSystemCode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
#endif
JSC::EncodedJSValue jsMediaKeyErrorConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaKeyErrorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaKeyErrorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaKeyErrorPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyErrorPrototype>(vm.heap)) JSMediaKeyErrorPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaKeyErrorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaKeyErrorConstructor : public DOMConstructorObject {
private:
    JSMediaKeyErrorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaKeyErrorConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaKeyErrorConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyErrorConstructor>(vm.heap)) JSMediaKeyErrorConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSMediaKeyErrorTableIndex[4] = {
    { -1, -1 },
    { 0, -1 },
    { 1, -1 },
    { -1, -1 },
};


static const HashTableValue JSMediaKeyErrorTableValues[] =
{
    { "code", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaKeyErrorCode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
#if ENABLE(ENCRYPTED_MEDIA_V2)
    { "systemCode", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaKeyErrorSystemCode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
#else
    { 0, 0, NoIntrinsic, 0, 0 },
#endif
};

static const HashTable JSMediaKeyErrorTable = { 2, 3, true, JSMediaKeyErrorTableValues, 0, JSMediaKeyErrorTableIndex };
/* Hash table for constructor */

static const HashTableValue JSMediaKeyErrorConstructorTableValues[] =
{
    { "MEDIA_KEYERR_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "MEDIA_KEYERR_CLIENT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "MEDIA_KEYERR_SERVICE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "MEDIA_KEYERR_OUTPUT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "MEDIA_KEYERR_HARDWARECHANGE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "MEDIA_KEYERR_DOMAIN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
};


COMPILE_ASSERT(1 == MediaKeyError::MEDIA_KEYERR_UNKNOWN, MediaKeyErrorEnumMEDIA_KEYERR_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == MediaKeyError::MEDIA_KEYERR_CLIENT, MediaKeyErrorEnumMEDIA_KEYERR_CLIENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == MediaKeyError::MEDIA_KEYERR_SERVICE, MediaKeyErrorEnumMEDIA_KEYERR_SERVICEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == MediaKeyError::MEDIA_KEYERR_OUTPUT, MediaKeyErrorEnumMEDIA_KEYERR_OUTPUTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == MediaKeyError::MEDIA_KEYERR_HARDWARECHANGE, MediaKeyErrorEnumMEDIA_KEYERR_HARDWARECHANGEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == MediaKeyError::MEDIA_KEYERR_DOMAIN, MediaKeyErrorEnumMEDIA_KEYERR_DOMAINIsWrongUseDoNotCheckConstants);

const ClassInfo JSMediaKeyErrorConstructor::s_info = { "WebKitMediaKeyErrorConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaKeyErrorConstructor) };

JSMediaKeyErrorConstructor::JSMediaKeyErrorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaKeyErrorConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaKeyError::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebKitMediaKeyError"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSMediaKeyErrorConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSMediaKeyErrorPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaKeyErrorConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "MEDIA_KEYERR_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "MEDIA_KEYERR_CLIENT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "MEDIA_KEYERR_SERVICE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "MEDIA_KEYERR_OUTPUT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "MEDIA_KEYERR_HARDWARECHANGE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "MEDIA_KEYERR_DOMAIN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
};

const ClassInfo JSMediaKeyErrorPrototype::s_info = { "WebKitMediaKeyErrorPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaKeyErrorPrototype) };

void JSMediaKeyErrorPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaKeyErrorPrototypeTableValues, *this);
}

const ClassInfo JSMediaKeyError::s_info = { "WebKitMediaKeyError", &Base::s_info, &JSMediaKeyErrorTable, CREATE_METHOD_TABLE(JSMediaKeyError) };

JSMediaKeyError::JSMediaKeyError(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaKeyError>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSMediaKeyError::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaKeyErrorPrototype::create(vm, globalObject, JSMediaKeyErrorPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSMediaKeyError::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaKeyError>(vm, globalObject);
}

void JSMediaKeyError::destroy(JSC::JSCell* cell)
{
    JSMediaKeyError* thisObject = static_cast<JSMediaKeyError*>(cell);
    thisObject->JSMediaKeyError::~JSMediaKeyError();
}

JSMediaKeyError::~JSMediaKeyError()
{
    releaseImpl();
}

bool JSMediaKeyError::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSMediaKeyError*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaKeyError, Base>(exec, JSMediaKeyErrorTable, thisObject, propertyName, slot);
}

EncodedJSValue jsMediaKeyErrorCode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSMediaKeyError*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.code());
    return JSValue::encode(result);
}


#if ENABLE(ENCRYPTED_MEDIA_V2)
EncodedJSValue jsMediaKeyErrorSystemCode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSMediaKeyError*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.systemCode());
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsMediaKeyErrorConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaKeyErrorPrototype* domObject = jsDynamicCast<JSMediaKeyErrorPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaKeyError::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSMediaKeyError::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaKeyErrorConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSMediaKeyErrorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaKeyErrorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsMediaKeyError = jsCast<JSMediaKeyError*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaKeyError->impl(), jsMediaKeyError);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, MediaKeyError* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaKeyError>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MediaKeyError.
    COMPILE_ASSERT(!__is_polymorphic(MediaKeyError), MediaKeyError_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSMediaKeyError>(globalObject, impl);
}

MediaKeyError* JSMediaKeyError::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSMediaKeyError*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(ENCRYPTED_MEDIA) || ENABLE(ENCRYPTED_MEDIA_V2)
