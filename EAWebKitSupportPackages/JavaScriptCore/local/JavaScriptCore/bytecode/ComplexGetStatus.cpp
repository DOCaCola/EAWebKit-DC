/*
 * Copyright (C) 2014, 2015 Apple Inc. All rights reserved.
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

#include "config.h"
#include "ComplexGetStatus.h"

#include "JSCInlines.h"

namespace JSC {

ComplexGetStatus ComplexGetStatus::computeFor(
    Structure* headStructure, const ObjectPropertyConditionSet& conditionSet, UniquedStringImpl* uid)
{
    // FIXME: We should assert that we never see a structure that
    // hasImpureGetOwnPropertySlot() but for which we don't
    // newImpurePropertyFiresWatchpoints(). We're not at a point where we can do
    // that, yet.
    // https://bugs.webkit.org/show_bug.cgi?id=131810
    
    ASSERT(conditionSet.isValid());
    
    if (headStructure->takesSlowPathInDFGForImpureProperty())
        return takesSlowPath();
    
    ComplexGetStatus result;
    result.m_kind = Inlineable;
    
    if (!conditionSet.isEmpty()) {
        result.m_conditionSet = conditionSet;
        
        if (!result.m_conditionSet.structuresEnsureValidity())
            return skip();

        unsigned numberOfSlotBases =
            result.m_conditionSet.numberOfConditionsWithKind(PropertyCondition::Presence);
        RELEASE_ASSERT(numberOfSlotBases <= 1);
        if (!numberOfSlotBases) {
            // Currently we don't support misses. That's a bummer.
            // FIXME: https://bugs.webkit.org/show_bug.cgi?id=133052
            return takesSlowPath();
        }
        ObjectPropertyCondition base = result.m_conditionSet.slotBaseCondition();
        ASSERT(base.kind() == PropertyCondition::Presence);
        
        result.m_offset = base.offset();
    } else
        result.m_offset = headStructure->getConcurrently(uid);
    
    if (!isValidOffset(result.m_offset))
        return takesSlowPath();
    
    return result;
}

} // namespace JSC


