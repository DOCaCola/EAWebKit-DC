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

#ifndef JSReadableStreamReader_h
#define JSReadableStreamReader_h

#if ENABLE(STREAMS_API)

#include "JSDOMWrapper.h"
#include "ReadableStreamReader.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSReadableStreamReader : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSReadableStreamReader* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<ReadableStreamReader>&& impl)
    {
        JSReadableStreamReader* ptr = new (NotNull, JSC::allocateCell<JSReadableStreamReader>(globalObject->vm().heap)) JSReadableStreamReader(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static ReadableStreamReader* toWrapped(JSC::JSValue);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSReadableStreamReader();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    JSC::WriteBarrier<JSC::Unknown> m_closed;
    static void visitChildren(JSCell*, JSC::SlotVisitor&);


    // Custom attributes
    JSC::JSValue closed(JSC::ExecState*) const;
    ReadableStreamReader& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    ReadableStreamReader* m_impl;
public:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
protected:
    JSReadableStreamReader(JSC::Structure*, JSDOMGlobalObject*, Ref<ReadableStreamReader>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSReadableStreamReaderOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, ReadableStreamReader*)
{
    static NeverDestroyed<JSReadableStreamReaderOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, ReadableStreamReader*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ReadableStreamReader& impl) { return toJS(exec, globalObject, &impl); }

// Custom constructor
JSC::EncodedJSValue JSC_HOST_CALL constructJSReadableStreamReader(JSC::ExecState*);


} // namespace WebCore

#endif // ENABLE(STREAMS_API)

#endif
