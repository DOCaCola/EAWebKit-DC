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
#include "JSTreeWalker.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSNodeFilter.h"
#include "Node.h"
#include "NodeFilter.h"
#include "TreeWalker.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionParentNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionFirstChild(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionLastChild(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousSibling(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextSibling(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextNode(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTreeWalkerRoot(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTreeWalkerWhatToShow(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTreeWalkerFilter(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTreeWalkerExpandEntityReferences(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTreeWalkerCurrentNode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSTreeWalkerCurrentNode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTreeWalkerConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSTreeWalkerPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSTreeWalkerPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTreeWalkerPrototype* ptr = new (NotNull, JSC::allocateCell<JSTreeWalkerPrototype>(vm.heap)) JSTreeWalkerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTreeWalkerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSTreeWalkerConstructor : public DOMConstructorObject {
private:
    JSTreeWalkerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSTreeWalkerConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSTreeWalkerConstructor* ptr = new (NotNull, JSC::allocateCell<JSTreeWalkerConstructor>(vm.heap)) JSTreeWalkerConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSTreeWalkerConstructor::s_info = { "TreeWalkerConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTreeWalkerConstructor) };

JSTreeWalkerConstructor::JSTreeWalkerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTreeWalkerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSTreeWalker::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("TreeWalker"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSTreeWalkerPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "root", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerRoot), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "whatToShow", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerWhatToShow), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "filter", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerFilter), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "expandEntityReferences", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerExpandEntityReferences), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "currentNode", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerCurrentNode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTreeWalkerCurrentNode) },
    { "parentNode", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionParentNode), (intptr_t) (0) },
    { "firstChild", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionFirstChild), (intptr_t) (0) },
    { "lastChild", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionLastChild), (intptr_t) (0) },
    { "previousSibling", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionPreviousSibling), (intptr_t) (0) },
    { "nextSibling", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionNextSibling), (intptr_t) (0) },
    { "previousNode", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionPreviousNode), (intptr_t) (0) },
    { "nextNode", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionNextNode), (intptr_t) (0) },
};

const ClassInfo JSTreeWalkerPrototype::s_info = { "TreeWalkerPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTreeWalkerPrototype) };

void JSTreeWalkerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTreeWalkerPrototypeTableValues, *this);
}

const ClassInfo JSTreeWalker::s_info = { "TreeWalker", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTreeWalker) };

JSTreeWalker::JSTreeWalker(Structure* structure, JSDOMGlobalObject* globalObject, Ref<TreeWalker>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSTreeWalker::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSTreeWalkerPrototype::create(vm, globalObject, JSTreeWalkerPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSTreeWalker::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTreeWalker>(vm, globalObject);
}

void JSTreeWalker::destroy(JSC::JSCell* cell)
{
    JSTreeWalker* thisObject = static_cast<JSTreeWalker*>(cell);
    thisObject->JSTreeWalker::~JSTreeWalker();
}

JSTreeWalker::~JSTreeWalker()
{
    releaseImpl();
}

EncodedJSValue jsTreeWalkerRoot(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTreeWalkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TreeWalker", "root");
        return throwGetterTypeError(*exec, "TreeWalker", "root");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.root()));
    return JSValue::encode(result);
}


EncodedJSValue jsTreeWalkerWhatToShow(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTreeWalkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TreeWalker", "whatToShow");
        return throwGetterTypeError(*exec, "TreeWalker", "whatToShow");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.whatToShow());
    return JSValue::encode(result);
}


EncodedJSValue jsTreeWalkerFilter(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTreeWalkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TreeWalker", "filter");
        return throwGetterTypeError(*exec, "TreeWalker", "filter");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.filter()));
    return JSValue::encode(result);
}


EncodedJSValue jsTreeWalkerExpandEntityReferences(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTreeWalkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TreeWalker", "expandEntityReferences");
        return throwGetterTypeError(*exec, "TreeWalker", "expandEntityReferences");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.expandEntityReferences());
    return JSValue::encode(result);
}


EncodedJSValue jsTreeWalkerCurrentNode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTreeWalkerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TreeWalker", "currentNode");
        return throwGetterTypeError(*exec, "TreeWalker", "currentNode");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.currentNode()));
    return JSValue::encode(result);
}


EncodedJSValue jsTreeWalkerConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSTreeWalkerPrototype* domObject = jsDynamicCast<JSTreeWalkerPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSTreeWalker::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSTreeWalkerCurrentNode(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTreeWalkerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "TreeWalker", "currentNode");
        else
            throwSetterTypeError(*exec, "TreeWalker", "currentNode");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    Node* nativeValue = JSNode::toWrapped(value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setCurrentNode(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSTreeWalker::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTreeWalkerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionParentNode(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "parentNode");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.parentNode(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionFirstChild(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "firstChild");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.firstChild(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionLastChild(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "lastChild");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.lastChild(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousSibling(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "previousSibling");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.previousSibling(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextSibling(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "nextSibling");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.nextSibling(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousNode(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "previousNode");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.previousNode(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextNode(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSTreeWalker* castedThis = jsDynamicCast<JSTreeWalker*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "TreeWalker", "nextNode");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTreeWalker::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.nextNode(exec)));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

void JSTreeWalker::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSTreeWalker*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->visitAdditionalChildren(visitor);
}

bool JSTreeWalkerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSTreeWalkerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTreeWalker = jsCast<JSTreeWalker*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTreeWalker->impl(), jsTreeWalker);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, TreeWalker* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSTreeWalker>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to TreeWalker.
    COMPILE_ASSERT(!__is_polymorphic(TreeWalker), TreeWalker_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSTreeWalker>(globalObject, impl);
}

TreeWalker* JSTreeWalker::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTreeWalker*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
