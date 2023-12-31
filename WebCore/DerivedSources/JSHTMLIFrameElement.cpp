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
#include "JSHTMLIFrameElement.h"

#include "DOMWindow.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "HTMLIFrameElement.h"
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLIFrameElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementFrameBorder(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementFrameBorder(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementLongDesc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementLongDesc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementMarginHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementMarginHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementMarginWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementMarginWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementSandbox(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSandbox(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementScrolling(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementScrolling(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementSrcdoc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementSrcdoc(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLIFrameElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLIFrameElementContentDocument(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLIFrameElementContentWindow(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLIFrameElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLIFrameElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLIFrameElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLIFrameElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLIFrameElementPrototype>(vm.heap)) JSHTMLIFrameElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLIFrameElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLIFrameElementConstructor : public DOMConstructorObject {
private:
    JSHTMLIFrameElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLIFrameElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLIFrameElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLIFrameElementConstructor>(vm.heap)) JSHTMLIFrameElementConstructor(structure, globalObject);
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

static const struct CompactHashIndex JSHTMLIFrameElementTableIndex[2] = {
    { 0, -1 },
    { -1, -1 },
};


static const HashTableValue JSHTMLIFrameElementTableValues[] =
{
    { "contentDocument", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentDocument), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSHTMLIFrameElementTable = { 1, 1, true, JSHTMLIFrameElementTableValues, 0, JSHTMLIFrameElementTableIndex };
const ClassInfo JSHTMLIFrameElementConstructor::s_info = { "HTMLIFrameElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLIFrameElementConstructor) };

JSHTMLIFrameElementConstructor::JSHTMLIFrameElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLIFrameElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLIFrameElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLIFrameElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLIFrameElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "align", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementAlign), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementAlign) },
    { "frameBorder", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementFrameBorder), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementFrameBorder) },
    { "height", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementHeight) },
    { "longDesc", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementLongDesc), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementLongDesc) },
    { "marginHeight", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementMarginHeight) },
    { "marginWidth", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementMarginWidth) },
    { "name", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementName) },
    { "sandbox", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSandbox), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementSandbox) },
    { "scrolling", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementScrolling), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementScrolling) },
    { "src", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSrc), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementSrc) },
    { "srcdoc", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSrcdoc), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementSrcdoc) },
    { "width", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLIFrameElementWidth) },
    { "contentWindow", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentWindow), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "getSVGDocument", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLIFrameElementPrototypeFunctionGetSVGDocument), (intptr_t) (0) },
};

const ClassInfo JSHTMLIFrameElementPrototype::s_info = { "HTMLIFrameElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLIFrameElementPrototype) };

void JSHTMLIFrameElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLIFrameElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLIFrameElement::s_info = { "HTMLIFrameElement", &Base::s_info, &JSHTMLIFrameElementTable, CREATE_METHOD_TABLE(JSHTMLIFrameElement) };

JSHTMLIFrameElement::JSHTMLIFrameElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLIFrameElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLIFrameElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLIFrameElementPrototype::create(vm, globalObject, JSHTMLIFrameElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLIFrameElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLIFrameElement>(vm, globalObject);
}

bool JSHTMLIFrameElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSHTMLIFrameElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLIFrameElement, Base>(exec, JSHTMLIFrameElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsHTMLIFrameElementAlign(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "align");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "align");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementFrameBorder(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "frameBorder");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "frameBorder");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::frameborderAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "height");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "height");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::heightAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementLongDesc(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "longDesc");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "longDesc");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::longdescAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementMarginHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "marginHeight");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "marginHeight");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::marginheightAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementMarginWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "marginWidth");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "marginWidth");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::marginwidthAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "name");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "name");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementSandbox(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "sandbox");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "sandbox");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::sandboxAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementScrolling(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "scrolling");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "scrolling");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::scrollingAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementSrc(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "src");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "src");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getURLAttribute(WebCore::HTMLNames::srcAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementSrcdoc(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "srcdoc");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "srcdoc");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::srcdocAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "width");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "width");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::widthAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementContentDocument(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLIFrameElement*>(slotBase);
    auto& impl = castedThis->impl();
    return JSValue::encode(shouldAllowAccessToNode(exec, impl.contentDocument()) ? toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.contentDocument())) : jsNull());
}


EncodedJSValue jsHTMLIFrameElementContentWindow(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLIFrameElement", "contentWindow");
        return throwGetterTypeError(*exec, "HTMLIFrameElement", "contentWindow");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.contentWindow()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLIFrameElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLIFrameElementPrototype* domObject = jsDynamicCast<JSHTMLIFrameElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLIFrameElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLIFrameElementAlign(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "align");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "align");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::alignAttr, nativeValue);
}


void setJSHTMLIFrameElementFrameBorder(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "frameBorder");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "frameBorder");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::frameborderAttr, nativeValue);
}


void setJSHTMLIFrameElementHeight(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "height");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "height");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::heightAttr, nativeValue);
}


void setJSHTMLIFrameElementLongDesc(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "longDesc");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "longDesc");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::longdescAttr, nativeValue);
}


void setJSHTMLIFrameElementMarginHeight(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "marginHeight");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "marginHeight");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::marginheightAttr, nativeValue);
}


void setJSHTMLIFrameElementMarginWidth(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "marginWidth");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "marginWidth");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::marginwidthAttr, nativeValue);
}


void setJSHTMLIFrameElementName(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "name");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "name");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLIFrameElementSandbox(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "sandbox");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "sandbox");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::sandboxAttr, nativeValue);
}


void setJSHTMLIFrameElementScrolling(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "scrolling");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "scrolling");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::scrollingAttr, nativeValue);
}


void setJSHTMLIFrameElementSrc(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "src");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "src");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::srcAttr, nativeValue);
}


void setJSHTMLIFrameElementSrcdoc(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "srcdoc");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "srcdoc");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::srcdocAttr, nativeValue);
}


void setJSHTMLIFrameElementWidth(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLIFrameElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLIFrameElement", "width");
        else
            throwSetterTypeError(*exec, "HTMLIFrameElement", "width");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::widthAttr, nativeValue);
}


JSValue JSHTMLIFrameElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLIFrameElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLIFrameElement* castedThis = jsDynamicCast<JSHTMLIFrameElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLIFrameElement", "getSVGDocument");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLIFrameElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    if (!shouldAllowAccessToNode(exec, impl.getSVGDocument(ec)))
        return JSValue::encode(jsNull());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getSVGDocument(ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}
