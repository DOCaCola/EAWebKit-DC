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
#include "JSHTMLFrameElement.h"

#include "DOMWindow.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "HTMLFrameElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "JSSVGDocument.h"
#include "SVGDocument.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFrameElementPrototypeFunctionGetSVGDocument(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLFrameElementFrameBorder(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementFrameBorder(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementLongDesc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementLongDesc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementMarginHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementMarginHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementMarginWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementMarginWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementNoResize(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementNoResize(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementScrolling(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementScrolling(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementContentDocument(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLFrameElementContentWindow(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLFrameElementLocation(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLFrameElementLocation(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLFrameElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLFrameElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLFrameElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLFrameElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLFrameElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLFrameElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLFrameElementPrototype>(vm.heap)) JSHTMLFrameElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLFrameElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLFrameElementConstructor : public DOMConstructorObject {
private:
    JSHTMLFrameElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLFrameElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLFrameElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLFrameElementConstructor>(vm.heap)) JSHTMLFrameElementConstructor(structure, globalObject);
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

static const struct CompactHashIndex JSHTMLFrameElementTableIndex[5] = {
    { 0, 4 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
};


static const HashTableValue JSHTMLFrameElementTableValues[] =
{
    { "contentDocument", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementContentDocument), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "location", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementLocation), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementLocation) },
};

static const HashTable JSHTMLFrameElementTable = { 2, 3, true, JSHTMLFrameElementTableValues, 0, JSHTMLFrameElementTableIndex };
const ClassInfo JSHTMLFrameElementConstructor::s_info = { "HTMLFrameElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLFrameElementConstructor) };

JSHTMLFrameElementConstructor::JSHTMLFrameElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLFrameElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLFrameElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLFrameElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFrameElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "frameBorder", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementFrameBorder), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementFrameBorder) },
    { "longDesc", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementLongDesc), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementLongDesc) },
    { "marginHeight", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementMarginHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementMarginHeight) },
    { "marginWidth", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementMarginWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementMarginWidth) },
    { "name", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementName) },
    { "noResize", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementNoResize), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementNoResize) },
    { "scrolling", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementScrolling), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementScrolling) },
    { "src", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementSrc), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLFrameElementSrc) },
    { "contentWindow", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementContentWindow), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFrameElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "getSVGDocument", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLFrameElementPrototypeFunctionGetSVGDocument), (intptr_t) (0) },
};

const ClassInfo JSHTMLFrameElementPrototype::s_info = { "HTMLFrameElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLFrameElementPrototype) };

void JSHTMLFrameElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLFrameElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLFrameElement::s_info = { "HTMLFrameElement", &Base::s_info, &JSHTMLFrameElementTable, CREATE_METHOD_TABLE(JSHTMLFrameElement) };

JSHTMLFrameElement::JSHTMLFrameElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLFrameElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLFrameElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLFrameElementPrototype::create(vm, globalObject, JSHTMLFrameElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLFrameElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFrameElement>(vm, globalObject);
}

bool JSHTMLFrameElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSHTMLFrameElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLFrameElement, Base>(exec, JSHTMLFrameElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsHTMLFrameElementFrameBorder(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "frameBorder");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "frameBorder");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::frameborderAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementLongDesc(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "longDesc");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "longDesc");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::longdescAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementMarginHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "marginHeight");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "marginHeight");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::marginheightAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementMarginWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "marginWidth");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "marginWidth");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::marginwidthAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "name");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "name");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementNoResize(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "noResize");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "noResize");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::noresizeAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementScrolling(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "scrolling");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "scrolling");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::scrollingAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementSrc(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "src");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "src");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getURLAttribute(WebCore::HTMLNames::srcAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementContentDocument(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLFrameElement*>(slotBase);
    auto& impl = castedThis->impl();
    return JSValue::encode(shouldAllowAccessToNode(exec, impl.contentDocument()) ? toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.contentDocument())) : jsNull());
}


EncodedJSValue jsHTMLFrameElementContentWindow(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "contentWindow");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "contentWindow");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.contentWindow()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementLocation(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLFrameElement*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.location());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "width");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "width");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.width());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLFrameElement", "height");
        return throwGetterTypeError(*exec, "HTMLFrameElement", "height");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.height());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLFrameElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLFrameElementPrototype* domObject = jsDynamicCast<JSHTMLFrameElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLFrameElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLFrameElementFrameBorder(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "frameBorder");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "frameBorder");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::frameborderAttr, nativeValue);
}


void setJSHTMLFrameElementLongDesc(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "longDesc");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "longDesc");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::longdescAttr, nativeValue);
}


void setJSHTMLFrameElementMarginHeight(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "marginHeight");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "marginHeight");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::marginheightAttr, nativeValue);
}


void setJSHTMLFrameElementMarginWidth(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "marginWidth");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "marginWidth");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::marginwidthAttr, nativeValue);
}


void setJSHTMLFrameElementName(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "name");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "name");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLFrameElementNoResize(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "noResize");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "noResize");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::noresizeAttr, nativeValue);
}


void setJSHTMLFrameElementScrolling(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "scrolling");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "scrolling");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::scrollingAttr, nativeValue);
}


void setJSHTMLFrameElementSrc(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLFrameElement", "src");
        else
            throwSetterTypeError(*exec, "HTMLFrameElement", "src");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::srcAttr, nativeValue);
}


void setJSHTMLFrameElementLocation(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLFrameElement*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    castedThis->setLocation(exec, value);
}


JSValue JSHTMLFrameElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFrameElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLFrameElementPrototypeFunctionGetSVGDocument(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLFrameElement* castedThis = jsDynamicCast<JSHTMLFrameElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLFrameElement", "getSVGDocument");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLFrameElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    if (!shouldAllowAccessToNode(exec, impl.getSVGDocument(ec)))
        return JSValue::encode(jsNull());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getSVGDocument(ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}
