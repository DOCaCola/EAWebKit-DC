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

#if ENABLE(SPEECH_SYNTHESIS)

#include "JSSpeechSynthesisEvent.h"

#include "JSDOMBinding.h"
#include "SpeechSynthesisEvent.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSpeechSynthesisEventCharIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSpeechSynthesisEventElapsedTime(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSpeechSynthesisEventName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSpeechSynthesisEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSpeechSynthesisEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSpeechSynthesisEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSpeechSynthesisEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSSpeechSynthesisEventPrototype>(vm.heap)) JSSpeechSynthesisEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSpeechSynthesisEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSpeechSynthesisEventConstructor : public DOMConstructorObject {
private:
    JSSpeechSynthesisEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSpeechSynthesisEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSpeechSynthesisEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSSpeechSynthesisEventConstructor>(vm.heap)) JSSpeechSynthesisEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSpeechSynthesisEventConstructor::s_info = { "SpeechSynthesisEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSpeechSynthesisEventConstructor) };

JSSpeechSynthesisEventConstructor::JSSpeechSynthesisEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSpeechSynthesisEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSpeechSynthesisEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SpeechSynthesisEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSpeechSynthesisEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "charIndex", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisEventCharIndex), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "elapsedTime", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisEventElapsedTime), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "name", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechSynthesisEventName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSpeechSynthesisEventPrototype::s_info = { "SpeechSynthesisEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSpeechSynthesisEventPrototype) };

void JSSpeechSynthesisEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSpeechSynthesisEventPrototypeTableValues, *this);
}

const ClassInfo JSSpeechSynthesisEvent::s_info = { "SpeechSynthesisEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSpeechSynthesisEvent) };

JSSpeechSynthesisEvent::JSSpeechSynthesisEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SpeechSynthesisEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSpeechSynthesisEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSpeechSynthesisEventPrototype::create(vm, globalObject, JSSpeechSynthesisEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSSpeechSynthesisEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSpeechSynthesisEvent>(vm, globalObject);
}

EncodedJSValue jsSpeechSynthesisEventCharIndex(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSpeechSynthesisEvent* castedThis = jsDynamicCast<JSSpeechSynthesisEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSpeechSynthesisEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SpeechSynthesisEvent", "charIndex");
        return throwGetterTypeError(*exec, "SpeechSynthesisEvent", "charIndex");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.charIndex());
    return JSValue::encode(result);
}


EncodedJSValue jsSpeechSynthesisEventElapsedTime(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSpeechSynthesisEvent* castedThis = jsDynamicCast<JSSpeechSynthesisEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSpeechSynthesisEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SpeechSynthesisEvent", "elapsedTime");
        return throwGetterTypeError(*exec, "SpeechSynthesisEvent", "elapsedTime");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.elapsedTime());
    return JSValue::encode(result);
}


EncodedJSValue jsSpeechSynthesisEventName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSpeechSynthesisEvent* castedThis = jsDynamicCast<JSSpeechSynthesisEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSpeechSynthesisEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SpeechSynthesisEvent", "name");
        return throwGetterTypeError(*exec, "SpeechSynthesisEvent", "name");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return JSValue::encode(result);
}


EncodedJSValue jsSpeechSynthesisEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSpeechSynthesisEventPrototype* domObject = jsDynamicCast<JSSpeechSynthesisEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSpeechSynthesisEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSpeechSynthesisEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSpeechSynthesisEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SPEECH_SYNTHESIS)
