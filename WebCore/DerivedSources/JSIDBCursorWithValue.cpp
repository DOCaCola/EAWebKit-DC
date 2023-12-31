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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBCursorWithValue.h"

#include "IDBCursorWithValue.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsIDBCursorWithValueValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsIDBCursorWithValueConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSIDBCursorWithValuePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSIDBCursorWithValuePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBCursorWithValuePrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBCursorWithValuePrototype>(vm.heap)) JSIDBCursorWithValuePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSIDBCursorWithValuePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSIDBCursorWithValueConstructor : public DOMConstructorObject {
private:
    JSIDBCursorWithValueConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBCursorWithValueConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBCursorWithValueConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBCursorWithValueConstructor>(vm.heap)) JSIDBCursorWithValueConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSIDBCursorWithValueConstructor::s_info = { "IDBCursorWithValueConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBCursorWithValueConstructor) };

JSIDBCursorWithValueConstructor::JSIDBCursorWithValueConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBCursorWithValueConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSIDBCursorWithValue::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("IDBCursorWithValue"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSIDBCursorWithValuePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBCursorWithValueConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "value", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBCursorWithValueValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSIDBCursorWithValuePrototype::s_info = { "IDBCursorWithValuePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBCursorWithValuePrototype) };

void JSIDBCursorWithValuePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSIDBCursorWithValuePrototypeTableValues, *this);
}

const ClassInfo JSIDBCursorWithValue::s_info = { "IDBCursorWithValue", &Base::s_info, 0, CREATE_METHOD_TABLE(JSIDBCursorWithValue) };

JSIDBCursorWithValue::JSIDBCursorWithValue(Structure* structure, JSDOMGlobalObject* globalObject, Ref<IDBCursorWithValue>&& impl)
    : JSIDBCursor(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSIDBCursorWithValue::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSIDBCursorWithValuePrototype::create(vm, globalObject, JSIDBCursorWithValuePrototype::createStructure(vm, globalObject, JSIDBCursor::getPrototype(vm, globalObject)));
}

JSObject* JSIDBCursorWithValue::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBCursorWithValue>(vm, globalObject);
}

EncodedJSValue jsIDBCursorWithValueValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSIDBCursorWithValue* castedThis = jsDynamicCast<JSIDBCursorWithValue*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSIDBCursorWithValuePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "IDBCursorWithValue", "value");
        return throwGetterTypeError(*exec, "IDBCursorWithValue", "value");
    }
    auto& impl = castedThis->impl();
    JSValue result = (impl.value().hasNoValue() ? jsNull() : impl.value().jsValue());
    return JSValue::encode(result);
}


EncodedJSValue jsIDBCursorWithValueConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSIDBCursorWithValuePrototype* domObject = jsDynamicCast<JSIDBCursorWithValuePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSIDBCursorWithValue::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSIDBCursorWithValue::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBCursorWithValueConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(INDEXED_DATABASE)
