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
#include "JSScreen.h"

#include "JSDOMBinding.h"
#include "Screen.h"
#include <wtf/GetPtr.h>

#if ENABLE(WEB_REPLAY)
#include "MemoizedDOMResult.h"
#include <replay/InputCursor.h>
#include <wtf/NeverDestroyed.h>
#endif

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsScreenHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenColorDepth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenPixelDepth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenAvailLeft(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenAvailTop(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenAvailHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenAvailWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsScreenConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSScreenPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSScreenPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSScreenPrototype* ptr = new (NotNull, JSC::allocateCell<JSScreenPrototype>(vm.heap)) JSScreenPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSScreenPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSScreenConstructor : public DOMConstructorObject {
private:
    JSScreenConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSScreenConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSScreenConstructor* ptr = new (NotNull, JSC::allocateCell<JSScreenConstructor>(vm.heap)) JSScreenConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSScreenConstructor::s_info = { "ScreenConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSScreenConstructor) };

JSScreenConstructor::JSScreenConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSScreenConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSScreen::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("Screen"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSScreenPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "colorDepth", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenColorDepth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "pixelDepth", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenPixelDepth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "availLeft", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenAvailLeft), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "availTop", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenAvailTop), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "availHeight", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenAvailHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "availWidth", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScreenAvailWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSScreenPrototype::s_info = { "ScreenPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSScreenPrototype) };

void JSScreenPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSScreenPrototypeTableValues, *this);
}

const ClassInfo JSScreen::s_info = { "Screen", &Base::s_info, 0, CREATE_METHOD_TABLE(JSScreen) };

JSScreen::JSScreen(Structure* structure, JSDOMGlobalObject* globalObject, Ref<Screen>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSScreen::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSScreenPrototype::create(vm, globalObject, JSScreenPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSScreen::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSScreen>(vm, globalObject);
}

void JSScreen::destroy(JSC::JSCell* cell)
{
    JSScreen* thisObject = static_cast<JSScreen*>(cell);
    thisObject->JSScreen::~JSScreen();
}

JSScreen::~JSScreen()
{
    releaseImpl();
}

EncodedJSValue jsScreenHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "height");
        return throwGetterTypeError(*exec, "Screen", "height");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.height", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        unsigned memoizedResult = castedThis->impl().height();
        cursor.appendInput<MemoizedDOMResult<unsigned>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        unsigned memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<unsigned>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.height());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "width");
        return throwGetterTypeError(*exec, "Screen", "width");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.width", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        unsigned memoizedResult = castedThis->impl().width();
        cursor.appendInput<MemoizedDOMResult<unsigned>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        unsigned memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<unsigned>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.width());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenColorDepth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "colorDepth");
        return throwGetterTypeError(*exec, "Screen", "colorDepth");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.colorDepth", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        unsigned memoizedResult = castedThis->impl().colorDepth();
        cursor.appendInput<MemoizedDOMResult<unsigned>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        unsigned memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<unsigned>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.colorDepth());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenPixelDepth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "pixelDepth");
        return throwGetterTypeError(*exec, "Screen", "pixelDepth");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.pixelDepth", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        unsigned memoizedResult = castedThis->impl().pixelDepth();
        cursor.appendInput<MemoizedDOMResult<unsigned>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        unsigned memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<unsigned>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.pixelDepth());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenAvailLeft(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "availLeft");
        return throwGetterTypeError(*exec, "Screen", "availLeft");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.availLeft", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        int memoizedResult = castedThis->impl().availLeft();
        cursor.appendInput<MemoizedDOMResult<int>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        int memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<int>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.availLeft());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenAvailTop(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "availTop");
        return throwGetterTypeError(*exec, "Screen", "availTop");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.availTop", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        int memoizedResult = castedThis->impl().availTop();
        cursor.appendInput<MemoizedDOMResult<int>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        int memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<int>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.availTop());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenAvailHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "availHeight");
        return throwGetterTypeError(*exec, "Screen", "availHeight");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.availHeight", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        unsigned memoizedResult = castedThis->impl().availHeight();
        cursor.appendInput<MemoizedDOMResult<unsigned>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        unsigned memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<unsigned>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.availHeight());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenAvailWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSScreen* castedThis = jsDynamicCast<JSScreen*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSScreenPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Screen", "availWidth");
        return throwGetterTypeError(*exec, "Screen", "availWidth");
    }
#if ENABLE(WEB_REPLAY)
    JSGlobalObject* globalObject = exec->lexicalGlobalObject();
    InputCursor& cursor = globalObject->inputCursor();
    static NeverDestroyed<const AtomicString> bindingName("Screen.availWidth", AtomicString::ConstructFromLiteral);
    if (cursor.isCapturing()) {
        unsigned memoizedResult = castedThis->impl().availWidth();
        cursor.appendInput<MemoizedDOMResult<unsigned>>(bindingName.get().string(), memoizedResult, 0);
        JSValue result = jsNumber(memoizedResult);
        return JSValue::encode(result);
    }

    if (cursor.isReplaying()) {
        unsigned memoizedResult;
        MemoizedDOMResultBase* input = cursor.fetchInput<MemoizedDOMResultBase>();
        if (input && input->convertTo<unsigned>(memoizedResult)) {
            JSValue result = jsNumber(memoizedResult);
            return JSValue::encode(result);
        }
    }
#endif
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.availWidth());
    return JSValue::encode(result);
}


EncodedJSValue jsScreenConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSScreenPrototype* domObject = jsDynamicCast<JSScreenPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSScreen::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSScreen::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSScreenConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSScreenOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsScreen = jsCast<JSScreen*>(handle.slot()->asCell());
    Frame* root = WTF::getPtr(jsScreen->impl().frame());
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSScreenOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsScreen = jsCast<JSScreen*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsScreen->impl(), jsScreen);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Screen@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore6ScreenE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, Screen* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSScreen>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Screen@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore6ScreenE[2];
#if COMPILER(CLANG)
    // If this fails Screen does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Screen), Screen_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Screen has subclasses. If Screen has subclasses that get passed
    // to toJS() we currently require Screen you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSScreen>(globalObject, impl);
}

Screen* JSScreen::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSScreen*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
