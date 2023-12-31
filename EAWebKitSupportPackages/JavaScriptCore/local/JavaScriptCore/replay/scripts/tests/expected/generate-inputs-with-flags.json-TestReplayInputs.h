/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// DO NOT EDIT THIS FILE. It is automatically generated from generate-inputs-with-flags.json
// by the script: JavaScriptCore/replay/scripts/CodeGeneratorReplayInputs.py

#ifndef generate_inputs_with_flags_json_TestReplayInputs_h
#define generate_inputs_with_flags_json_TestReplayInputs_h

#if ENABLE(WEB_REPLAY)
#include "InternalNamespaceHeaderIncludeDummy.h"
#include <platform/ExternalNamespaceHeaderIncludeDummy.h>



namespace Test {
class ScalarInput1;
class ScalarInput2;
} // namespace Test

namespace JSC {
template<> struct TEST_EXPORT_MACRO InputTraits<Test::ScalarInput1> {
    static InputQueue queue() { return InputQueue::ScriptMemoizedData; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const Test::ScalarInput1&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<Test::ScalarInput1>&);
};

template<> struct TEST_EXPORT_MACRO InputTraits<Test::ScalarInput2> {
    static InputQueue queue() { return InputQueue::ScriptMemoizedData; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const Test::ScalarInput2&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<Test::ScalarInput2>&);
};

} // namespace JSC

namespace Test {
class ScalarInput1 : public NondeterministicInput<ScalarInput1> {
public:
    TEST_EXPORT_MACRO ScalarInput1(ScalarType data);
    virtual ~ScalarInput1();

    ScalarType data() const { return m_data; }
private:
    ScalarType m_data;
};

class ScalarInput2 : public NondeterministicInput<ScalarInput2> {
public:
    TEST_EXPORT_MACRO ScalarInput2(ScalarType data);
    virtual ~ScalarInput2();

    ScalarType data() const { return m_data; }
private:
    ScalarType m_data;
};
} // namespace Test

SPECIALIZE_TYPE_TRAITS_BEGIN(Test::ScalarInput1)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<Test::ScalarInput1>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(Test::ScalarInput2)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<Test::ScalarInput2>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

#define TEST_REPLAY_INPUT_NAMES_FOR_EACH(macro) \
    macro(ScalarInput1) \
    macro(ScalarInput2) \
    \
// end of TEST_REPLAY_INPUT_NAMES_FOR_EACH

#endif // ENABLE(WEB_REPLAY)

#endif // generate-inputs-with-flags.json-TestReplayInputs_h
