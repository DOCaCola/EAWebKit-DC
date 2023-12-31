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
#include "JSCSSValueList.h"

#include "CSSValue.h"
#include "CSSValueList.h"
#include "ExceptionCode.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCSSValueListPrototypeFunctionItem(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsCSSValueListLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCSSValueListConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSCSSValueListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSCSSValueListPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSValueListPrototype* ptr = new (NotNull, JSC::allocateCell<JSCSSValueListPrototype>(vm.heap)) JSCSSValueListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSCSSValueListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSCSSValueListConstructor : public DOMConstructorObject {
private:
    JSCSSValueListConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCSSValueListConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCSSValueListConstructor* ptr = new (NotNull, JSC::allocateCell<JSCSSValueListConstructor>(vm.heap)) JSCSSValueListConstructor(structure, globalObject);
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

static const struct CompactHashIndex JSCSSValueListTableIndex[5] = {
    { -1, -1 },
    { 0, 4 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
};


static const HashTableValue JSCSSValueListTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSValueListConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSValueListLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSCSSValueListTable = { 2, 3, true, JSCSSValueListTableValues, 0, JSCSSValueListTableIndex };
const ClassInfo JSCSSValueListConstructor::s_info = { "CSSValueListConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSValueListConstructor) };

JSCSSValueListConstructor::JSCSSValueListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCSSValueListConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCSSValueList::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("CSSValueList"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSCSSValueListPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCSSValueListPrototypeFunctionItem), (intptr_t) (0) },
};

const ClassInfo JSCSSValueListPrototype::s_info = { "CSSValueListPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSValueListPrototype) };

void JSCSSValueListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSCSSValueListPrototypeTableValues, *this);
}

const ClassInfo JSCSSValueList::s_info = { "CSSValueList", &Base::s_info, &JSCSSValueListTable, CREATE_METHOD_TABLE(JSCSSValueList) };

JSCSSValueList::JSCSSValueList(Structure* structure, JSDOMGlobalObject* globalObject, Ref<CSSValueList>&& impl)
    : JSCSSValue(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSCSSValueList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCSSValueListPrototype::create(vm, globalObject, JSCSSValueListPrototype::createStructure(vm, globalObject, JSCSSValue::getPrototype(vm, globalObject)));
}

JSObject* JSCSSValueList::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSValueList>(vm, globalObject);
}

bool JSCSSValueList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSCSSValueList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSCSSValueList>(exec, propertyName);
    if (entry) {
        slot.setCacheableCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    Optional<uint32_t> optionalIndex = parseIndex(propertyName);
    if (optionalIndex && optionalIndex.value() < thisObject->impl().length()) {
        unsigned index = optionalIndex.value();
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return getStaticValueSlot<JSCSSValueList, Base>(exec, JSCSSValueListTable, thisObject, propertyName, slot);
}

bool JSCSSValueList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSCSSValueList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsCSSValueListLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSCSSValueList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsCSSValueListConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSCSSValueList* domObject = jsDynamicCast<JSCSSValueList*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSCSSValueList::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSCSSValueList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSCSSValueList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSCSSValueList::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSValueListConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCSSValueListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSCSSValueList* castedThis = jsDynamicCast<JSCSSValueList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "CSSValueList", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCSSValueList::info());
    auto& impl = castedThis->impl();
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}


}
