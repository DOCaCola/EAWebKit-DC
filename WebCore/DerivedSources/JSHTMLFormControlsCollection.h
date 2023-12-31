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

#ifndef JSHTMLFormControlsCollection_h
#define JSHTMLFormControlsCollection_h

#include "HTMLFormControlsCollection.h"
#include "JSHTMLCollection.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSHTMLFormControlsCollection : public JSHTMLCollection {
public:
    typedef JSHTMLCollection Base;
    static JSHTMLFormControlsCollection* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLFormControlsCollection>&& impl)
    {
        JSHTMLFormControlsCollection* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormControlsCollection>(globalObject->vm().heap)) JSHTMLFormControlsCollection(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertySlotByIndex(JSC::JSObject*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode = JSC::EnumerationMode());
    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue namedItem(JSC::ExecState*);
    HTMLFormControlsCollection& impl() const
    {
        return static_cast<HTMLFormControlsCollection&>(Base::impl());
    }
public:
    static const unsigned StructureFlags = JSC::HasImpureGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | JSC::OverridesGetPropertyNames | Base::StructureFlags;
protected:
    JSHTMLFormControlsCollection(JSC::Structure*, JSDOMGlobalObject*, Ref<HTMLFormControlsCollection>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFormControlsCollection*, JSC::PropertyName);
    static JSC::EncodedJSValue nameGetter(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
};

class JSHTMLFormControlsCollectionOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, HTMLFormControlsCollection*)
{
    static NeverDestroyed<JSHTMLFormControlsCollectionOwner> owner;
    return &owner.get();
}



} // namespace WebCore

#endif
