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

#ifndef JSWebGL2RenderingContext_h
#define JSWebGL2RenderingContext_h

#if ENABLE(WEBGL2)

#include "JSWebGLRenderingContextBase.h"
#include "WebGL2RenderingContext.h"

namespace WebCore {

class JSWebGL2RenderingContext : public JSWebGLRenderingContextBase {
public:
    typedef JSWebGLRenderingContextBase Base;
    static JSWebGL2RenderingContext* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGL2RenderingContext>&& impl)
    {
        JSWebGL2RenderingContext* ptr = new (NotNull, JSC::allocateCell<JSWebGL2RenderingContext>(globalObject->vm().heap)) JSWebGL2RenderingContext(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);
    void visitAdditionalChildren(JSC::SlotVisitor&);


    // Custom functions
    JSC::JSValue getInternalformatParameter(JSC::ExecState*);
    JSC::JSValue getQueryParameter(JSC::ExecState*);
    JSC::JSValue getSamplerParameter(JSC::ExecState*);
    JSC::JSValue getSyncParameter(JSC::ExecState*);
    JSC::JSValue getIndexedParameter(JSC::ExecState*);
    JSC::JSValue getActiveUniformBlockParameter(JSC::ExecState*);
    JSC::JSValue getActiveUniformBlockName(JSC::ExecState*);
    WebGL2RenderingContext& impl() const
    {
        return static_cast<WebGL2RenderingContext&>(Base::impl());
    }
protected:
    JSWebGL2RenderingContext(JSC::Structure*, JSDOMGlobalObject*, Ref<WebGL2RenderingContext>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif // ENABLE(WEBGL2)

#endif
