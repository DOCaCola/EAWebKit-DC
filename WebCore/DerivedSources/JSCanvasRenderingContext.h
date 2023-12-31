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

#ifndef JSCanvasRenderingContext_h
#define JSCanvasRenderingContext_h

#include "CanvasRenderingContext.h"
#include "JSDOMWrapper.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSCanvasRenderingContext : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSCanvasRenderingContext* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<CanvasRenderingContext>&& impl)
    {
        JSCanvasRenderingContext* ptr = new (NotNull, JSC::allocateCell<JSCanvasRenderingContext>(globalObject->vm().heap)) JSCanvasRenderingContext(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static CanvasRenderingContext* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSCanvasRenderingContext();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void visitChildren(JSCell*, JSC::SlotVisitor&);
    void visitAdditionalChildren(JSC::SlotVisitor&);

    CanvasRenderingContext& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    CanvasRenderingContext* m_impl;
protected:
    JSCanvasRenderingContext(JSC::Structure*, JSDOMGlobalObject*, Ref<CanvasRenderingContext>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSCanvasRenderingContextOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, CanvasRenderingContext*)
{
    static NeverDestroyed<JSCanvasRenderingContextOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, CanvasRenderingContext*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, CanvasRenderingContext& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif
