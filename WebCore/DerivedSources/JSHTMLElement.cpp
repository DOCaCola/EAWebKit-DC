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
#include "JSHTMLElement.h"

#include "Element.h"
#include "ExceptionCode.h"
#include "HTMLElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSElement.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentElement(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentHTML(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionClick(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLElementTitle(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementTitle(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementLang(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementLang(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementTranslate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementTranslate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementDir(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementDir(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementTabIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementTabIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementDraggable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementDraggable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementWebkitdropzone(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementWebkitdropzone(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementHidden(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementHidden(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementInnerText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementInnerText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementOuterText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementOuterText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementContentEditable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementContentEditable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementIsContentEditable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLElementSpellcheck(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLElementSpellcheck(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLElementPrototype>(vm.heap)) JSHTMLElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLElementConstructor : public DOMConstructorObject {
private:
    JSHTMLElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLElementConstructor>(vm.heap)) JSHTMLElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLElementConstructor::s_info = { "HTMLElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLElementConstructor) };

JSHTMLElementConstructor::JSHTMLElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "title", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementTitle), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementTitle) },
    { "lang", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementLang), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementLang) },
    { "translate", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementTranslate), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementTranslate) },
    { "dir", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementDir), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementDir) },
    { "tabIndex", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementTabIndex), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementTabIndex) },
    { "draggable", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementDraggable), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementDraggable) },
    { "webkitdropzone", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementWebkitdropzone), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementWebkitdropzone) },
    { "hidden", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementHidden), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementHidden) },
    { "accessKey", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementAccessKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementAccessKey) },
    { "innerText", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementInnerText), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementInnerText) },
    { "outerText", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementOuterText), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementOuterText) },
    { "contentEditable", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementContentEditable), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementContentEditable) },
    { "isContentEditable", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementIsContentEditable), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "spellcheck", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLElementSpellcheck), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLElementSpellcheck) },
    { "insertAdjacentElement", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionInsertAdjacentElement), (intptr_t) (0) },
    { "insertAdjacentHTML", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionInsertAdjacentHTML), (intptr_t) (0) },
    { "insertAdjacentText", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionInsertAdjacentText), (intptr_t) (0) },
    { "click", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLElementPrototypeFunctionClick), (intptr_t) (0) },
};

const ClassInfo JSHTMLElementPrototype::s_info = { "HTMLElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLElementPrototype) };

void JSHTMLElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLElement::s_info = { "HTMLElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLElement) };

JSHTMLElement::JSHTMLElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLElement>&& impl)
    : JSElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLElementPrototype::create(vm, globalObject, JSHTMLElementPrototype::createStructure(vm, globalObject, JSElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLElement>(vm, globalObject);
}

EncodedJSValue jsHTMLElementTitle(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "title");
        return throwGetterTypeError(*exec, "HTMLElement", "title");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::titleAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementLang(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "lang");
        return throwGetterTypeError(*exec, "HTMLElement", "lang");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::langAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementTranslate(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "translate");
        return throwGetterTypeError(*exec, "HTMLElement", "translate");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.translate());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementDir(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "dir");
        return throwGetterTypeError(*exec, "HTMLElement", "dir");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.dir());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementTabIndex(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "tabIndex");
        return throwGetterTypeError(*exec, "HTMLElement", "tabIndex");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.tabIndex());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementDraggable(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "draggable");
        return throwGetterTypeError(*exec, "HTMLElement", "draggable");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.draggable());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementWebkitdropzone(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "webkitdropzone");
        return throwGetterTypeError(*exec, "HTMLElement", "webkitdropzone");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::webkitdropzoneAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementHidden(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "hidden");
        return throwGetterTypeError(*exec, "HTMLElement", "hidden");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::hiddenAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementAccessKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "accessKey");
        return throwGetterTypeError(*exec, "HTMLElement", "accessKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::accesskeyAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementInnerText(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "innerText");
        return throwGetterTypeError(*exec, "HTMLElement", "innerText");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.innerText());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementOuterText(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "outerText");
        return throwGetterTypeError(*exec, "HTMLElement", "outerText");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.outerText());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementContentEditable(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "contentEditable");
        return throwGetterTypeError(*exec, "HTMLElement", "contentEditable");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.contentEditable());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementIsContentEditable(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "isContentEditable");
        return throwGetterTypeError(*exec, "HTMLElement", "isContentEditable");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.isContentEditable());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementSpellcheck(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLElement", "spellcheck");
        return throwGetterTypeError(*exec, "HTMLElement", "spellcheck");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.spellcheck());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLElementPrototype* domObject = jsDynamicCast<JSHTMLElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLElementTitle(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "title");
        else
            throwSetterTypeError(*exec, "HTMLElement", "title");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::titleAttr, nativeValue);
}


void setJSHTMLElementLang(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "lang");
        else
            throwSetterTypeError(*exec, "HTMLElement", "lang");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::langAttr, nativeValue);
}


void setJSHTMLElementTranslate(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "translate");
        else
            throwSetterTypeError(*exec, "HTMLElement", "translate");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setTranslate(nativeValue);
}


void setJSHTMLElementDir(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "dir");
        else
            throwSetterTypeError(*exec, "HTMLElement", "dir");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = value.toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDir(nativeValue);
}


void setJSHTMLElementTabIndex(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "tabIndex");
        else
            throwSetterTypeError(*exec, "HTMLElement", "tabIndex");
        return;
    }
    auto& impl = castedThis->impl();
    int nativeValue = toInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setTabIndex(nativeValue);
}


void setJSHTMLElementDraggable(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "draggable");
        else
            throwSetterTypeError(*exec, "HTMLElement", "draggable");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDraggable(nativeValue);
}


void setJSHTMLElementWebkitdropzone(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "webkitdropzone");
        else
            throwSetterTypeError(*exec, "HTMLElement", "webkitdropzone");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::webkitdropzoneAttr, nativeValue);
}


void setJSHTMLElementHidden(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "hidden");
        else
            throwSetterTypeError(*exec, "HTMLElement", "hidden");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::hiddenAttr, nativeValue);
}


void setJSHTMLElementAccessKey(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "accessKey");
        else
            throwSetterTypeError(*exec, "HTMLElement", "accessKey");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::accesskeyAttr, nativeValue);
}


void setJSHTMLElementInnerText(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "innerText");
        else
            throwSetterTypeError(*exec, "HTMLElement", "innerText");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setInnerText(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLElementOuterText(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "outerText");
        else
            throwSetterTypeError(*exec, "HTMLElement", "outerText");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setOuterText(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLElementContentEditable(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "contentEditable");
        else
            throwSetterTypeError(*exec, "HTMLElement", "contentEditable");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setContentEditable(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLElementSpellcheck(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLElement", "spellcheck");
        else
            throwSetterTypeError(*exec, "HTMLElement", "spellcheck");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setSpellcheck(nativeValue);
}


JSValue JSHTMLElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentElement(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLElement", "insertAdjacentElement");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String where = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    Element* element = JSElement::toWrapped(exec->argument(1));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.insertAdjacentElement(where, element, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentHTML(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLElement", "insertAdjacentHTML");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String where = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String html = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.insertAdjacentHTML(where, html, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentText(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLElement", "insertAdjacentText");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String where = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String text = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.insertAdjacentText(where, text, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionClick(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLElement* castedThis = jsDynamicCast<JSHTMLElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLElement", "click");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLElement::info());
    auto& impl = castedThis->impl();
    impl.click();
    return JSValue::encode(jsUndefined());
}

HTMLElement* JSHTMLElement::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSHTMLElement*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
