/*
 * Copyright (C) 2015 Apple, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef JSPropertyNameIterator_h
#define JSPropertyNameIterator_h

#include "JSObject.h"
#include "JSPropertyNameEnumerator.h"

namespace JSC {

class JSPropertyNameIterator : public JSNonFinalObject {
public:
    typedef JSNonFinalObject Base;

    enum class EnumerationPhase : uint32_t {
        IndexedNames,
        StructureNames,
        GenericNames,
        Done
    };

    DECLARE_EXPORT_INFO;

    static Structure* createStructure(VM& vm, JSGlobalObject* globalObject, JSValue prototype)
    {
        return Structure::create(vm, globalObject, prototype, TypeInfo(ObjectType, StructureFlags), info());
    }

    static JSPropertyNameIterator* create(ExecState*, Structure*, JSObject*);

    JSPropertyNameIterator* clone(ExecState*);
    bool next(ExecState*, JSValue&);

    JSValue iteratedValue() const { return m_iteratedObject.get(); }

    static void visitChildren(JSCell*, SlotVisitor&);

private:
    JSPropertyNameIterator(VM&, Structure*, JSObject*, JSPropertyNameEnumerator*);

    void finishCreation(VM&, JSGlobalObject*);

    static JSPropertyNameIterator* create(ExecState*, Structure*, JSObject*, JSPropertyNameEnumerator*);

    WriteBarrier<JSObject> m_iteratedObject;
    WriteBarrier<JSPropertyNameEnumerator> m_propertyNameEnumerator;
    EnumerationPhase m_enumerationPhase;
    uint32_t m_cursor;
};

}

#endif // JSPropertyNameIterator_h
