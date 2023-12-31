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

// DO NOT EDIT THIS FILE. It is automatically generated from JSInputs.json
// by the script: JavaScriptCore/replay/scripts/CodeGeneratorReplayInputs.py

#include "config.h"
#include "JSReplayInputs.h"

#if ENABLE(WEB_REPLAY)
#include "InspectorValues.h"
#include "NondeterministicInput.h"
#include <wtf/NeverDestroyed.h>

namespace JSC {
GetCurrentTime::GetCurrentTime(double currentTime)
    : NondeterministicInput<GetCurrentTime>()
    , m_currentTime(currentTime)
{
}

GetCurrentTime::~GetCurrentTime()
{
}

SetRandomSeed::SetRandomSeed(uint64_t randomSeed)
    : NondeterministicInput<SetRandomSeed>()
    , m_randomSeed(randomSeed)
{
}

SetRandomSeed::~SetRandomSeed()
{
}
} // namespace JSC

namespace JSC {
const String& InputTraits<GetCurrentTime>::type()
{
    static NeverDestroyed<const String> type(ASCIILiteral("GetCurrentTime"));
    return type;
}

void InputTraits<GetCurrentTime>::encode(EncodedValue& encodedValue, const GetCurrentTime& input)
{
    encodedValue.put<double>(ASCIILiteral("currentTime"), input.currentTime());
}

bool InputTraits<GetCurrentTime>::decode(EncodedValue& encodedValue, std::unique_ptr<GetCurrentTime>& input)
{
    double currentTime;
    if (!encodedValue.get<double>(ASCIILiteral("currentTime"), currentTime))
        return false;

    input = std::make_unique<GetCurrentTime>(currentTime);
    return true;
}

const String& InputTraits<SetRandomSeed>::type()
{
    static NeverDestroyed<const String> type(ASCIILiteral("SetRandomSeed"));
    return type;
}

void InputTraits<SetRandomSeed>::encode(EncodedValue& encodedValue, const SetRandomSeed& input)
{
    encodedValue.put<uint64_t>(ASCIILiteral("randomSeed"), input.randomSeed());
}

bool InputTraits<SetRandomSeed>::decode(EncodedValue& encodedValue, std::unique_ptr<SetRandomSeed>& input)
{
    uint64_t randomSeed;
    if (!encodedValue.get<uint64_t>(ASCIILiteral("randomSeed"), randomSeed))
        return false;

    input = std::make_unique<SetRandomSeed>(randomSeed);
    return true;
}
EncodedValue EncodingTraits<InputQueue>::encodeValue(const InputQueue& enumValue)
{
    switch (enumValue) {
    case InputQueue::EventLoopInput: return EncodedValue::createString("EventLoopInput");
    case InputQueue::LoaderMemoizedData: return EncodedValue::createString("LoaderMemoizedData");
    case InputQueue::ScriptMemoizedData: return EncodedValue::createString("ScriptMemoizedData");
    case InputQueue::Count: return EncodedValue::createString("Count");
    default: ASSERT_NOT_REACHED(); return EncodedValue::createString("Error!");
    }
}

bool EncodingTraits<InputQueue>::decodeValue(EncodedValue& encodedValue, InputQueue& enumValue)
{
    String enumString = encodedValue.convertTo<String>();
    if (enumString == "EventLoopInput") {
        enumValue = InputQueue::EventLoopInput;
        return true;
    }
    if (enumString == "LoaderMemoizedData") {
        enumValue = InputQueue::LoaderMemoizedData;
        return true;
    }
    if (enumString == "ScriptMemoizedData") {
        enumValue = InputQueue::ScriptMemoizedData;
        return true;
    }
    if (enumString == "Count") {
        enumValue = InputQueue::Count;
        return true;
    }
    return false;
}
} // namespace JSC

#endif // ENABLE(WEB_REPLAY)
