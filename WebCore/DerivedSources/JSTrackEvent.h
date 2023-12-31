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

#ifndef JSTrackEvent_h
#define JSTrackEvent_h

#if ENABLE(VIDEO_TRACK)

#include "JSEvent.h"
#include "TrackEvent.h"

namespace WebCore {

class JSDictionary;

class JSTrackEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSTrackEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TrackEvent>&& impl)
    {
        JSTrackEvent* ptr = new (NotNull, JSC::allocateCell<JSTrackEvent>(globalObject->vm().heap)) JSTrackEvent(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue track(JSC::ExecState*) const;
    TrackEvent& impl() const
    {
        return static_cast<TrackEvent&>(Base::impl());
    }
public:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
protected:
    JSTrackEvent(JSC::Structure*, JSDOMGlobalObject*, Ref<TrackEvent>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};


bool fillTrackEventInit(TrackEventInit&, JSDictionary&);


} // namespace WebCore

#endif // ENABLE(VIDEO_TRACK)

#endif
