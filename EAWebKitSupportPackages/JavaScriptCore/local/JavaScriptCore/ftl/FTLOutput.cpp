/*
 * Copyright (C) 2013, 2014 Apple Inc. All rights reserved.
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

#include "DFGCommon.h"
#include "FTLB3Output.h"
#include "FTLOutput.h"

#if ENABLE(FTL_JIT)

namespace JSC { namespace FTL {

#if !FTL_USES_B3

Output::Output(State& state)
    : IntrinsicRepository(state.context)
    , m_function(0)
    , m_heaps(0)
    , m_builder(llvm->CreateBuilderInContext(m_context))
    , m_block(0)
    , m_nextBlock(0)
{
}

Output::~Output()
{
    llvm->DisposeBuilder(m_builder);
}

void Output::initialize(LModule module, LValue function, AbstractHeapRepository& heaps)
{
    IntrinsicRepository::initialize(module);
    m_function = function;
    m_heaps = &heaps;
}

LBasicBlock Output::appendTo(LBasicBlock block, LBasicBlock nextBlock)
{
    appendTo(block);
    return insertNewBlocksBefore(nextBlock);
}

void Output::appendTo(LBasicBlock block)
{
    m_block = block;
    
    llvm->PositionBuilderAtEnd(m_builder, block);
}

LBasicBlock Output::newBlock(const char* name)
{
    if (!m_nextBlock)
        return appendBasicBlock(m_context, m_function, name);
    return insertBasicBlock(m_context, m_nextBlock, name);
}

LValue Output::chillDiv(LValue numerator, LValue denominator)
{
    LBasicBlock unsafeDenominator = FTL_NEW_BLOCK(*this, ("ChillDiv unsafe denominator"));
    LBasicBlock continuation = FTL_NEW_BLOCK(*this, ("ChillDiv continuation"));
    LBasicBlock done = FTL_NEW_BLOCK(*this, ("ChillDiv done"));
    LBasicBlock divByZero = FTL_NEW_BLOCK(*this, ("ChillDiv divide by zero"));
    LBasicBlock notDivByZero = FTL_NEW_BLOCK(*this, ("ChillDiv not divide by zero"));
    LBasicBlock neg2ToThe31ByNeg1 = FTL_NEW_BLOCK(*this, ("ArithDiv -2^31/-1"));

    LValue adjustedDenominator = add(denominator, int32One);
    branch(
        above(adjustedDenominator, int32One),
        usually(continuation), rarely(unsafeDenominator));

    Vector<ValueFromBlock, 3> results;
    LBasicBlock lastNext = appendTo(unsafeDenominator, continuation);

    LValue neg2ToThe31 = constInt32(-2147483647-1);
    branch(isZero32(denominator), rarely(divByZero), usually(notDivByZero));

    appendTo(divByZero, notDivByZero);
    results.append(anchor(int32Zero));
    jump(done);

    appendTo(notDivByZero, neg2ToThe31ByNeg1);
    branch(equal(numerator, neg2ToThe31),
        rarely(neg2ToThe31ByNeg1), usually(continuation));

    appendTo(neg2ToThe31ByNeg1, continuation);
    results.append(anchor(neg2ToThe31));
    jump(done);

    appendTo(continuation, done);
    LValue result = div(numerator, denominator);
    results.append(anchor(result));
    jump(done);

    appendTo(done, lastNext);
    return phi(int32, results);
}

LValue Output::chillMod(LValue numerator, LValue denominator)
{
    LBasicBlock unsafeDenominator = FTL_NEW_BLOCK(*this, ("ChillMod unsafe denominator"));
    LBasicBlock continuation = FTL_NEW_BLOCK(*this, ("ChillMod continuation"));
    LBasicBlock done = FTL_NEW_BLOCK(*this, ("ChillMod done"));
    LBasicBlock divByZero = FTL_NEW_BLOCK(*this, ("ChillMod divide by zero"));
    LBasicBlock notDivByZero = FTL_NEW_BLOCK(*this, ("ChillMod not divide by zero"));
    LBasicBlock neg2ToThe31ByNeg1 = FTL_NEW_BLOCK(*this, ("ChillMod -2^31/-1"));

    LValue adjustedDenominator = add(denominator, int32One);
    branch(
        above(adjustedDenominator, int32One),
        usually(continuation), rarely(unsafeDenominator));

    Vector<ValueFromBlock, 3> results;
    LBasicBlock lastNext = appendTo(unsafeDenominator, continuation);

    LValue neg2ToThe31 = constInt32(-2147483647-1);
    branch(isZero32(denominator), rarely(divByZero), usually(notDivByZero));

    appendTo(divByZero, notDivByZero);
    results.append(anchor(int32Zero));
    jump(done);

    appendTo(notDivByZero, neg2ToThe31ByNeg1);
    branch(equal(numerator, neg2ToThe31),
        rarely(neg2ToThe31ByNeg1), usually(continuation));

    appendTo(neg2ToThe31ByNeg1, continuation);
    results.append(anchor(int32Zero));
    jump(done);

    appendTo(continuation, done);
    LValue result = mod(numerator, denominator);
    results.append(anchor(result));
    jump(done);

    appendTo(done, lastNext);
    return phi(int32, results);
}

LValue Output::sensibleDoubleToInt(LValue value)
{
    RELEASE_ASSERT(isX86());
    return call(
        int32,
        x86SSE2CvtTSD2SIIntrinsic(),
        insertElement(
            insertElement(getUndef(vectorType(doubleType, 2)), value, int32Zero),
            doubleZero, int32One));
}

LValue Output::load(TypedPointer pointer, LType refType)
{
    LValue result = get(intToPtr(pointer.value(), refType));
    pointer.heap().decorateInstruction(result, *m_heaps);
    return result;
}

void Output::store(LValue value, TypedPointer pointer, LType refType)
{
    LValue result = set(value, intToPtr(pointer.value(), refType));
    pointer.heap().decorateInstruction(result, *m_heaps);
}

LValue Output::baseIndex(LValue base, LValue index, Scale scale, ptrdiff_t offset)
{
    LValue accumulatedOffset;
        
    switch (scale) {
    case ScaleOne:
        accumulatedOffset = index;
        break;
    case ScaleTwo:
        accumulatedOffset = shl(index, intPtrOne);
        break;
    case ScaleFour:
        accumulatedOffset = shl(index, intPtrTwo);
        break;
    case ScaleEight:
    case ScalePtr:
        accumulatedOffset = shl(index, intPtrThree);
        break;
    }
        
    if (offset)
        accumulatedOffset = add(accumulatedOffset, constIntPtr(offset));
        
    return add(base, accumulatedOffset);
}

void Output::branch(LValue condition, LBasicBlock taken, Weight takenWeight, LBasicBlock notTaken, Weight notTakenWeight)
{
    LValue branch = buildCondBr(m_builder, condition, taken, notTaken);
    
    if (!takenWeight || !notTakenWeight)
        return;
    
    double total = takenWeight.value() + notTakenWeight.value();
    
    setMetadata(
        branch, profKind,
        mdNode(
            m_context, branchWeights,
            constInt32(takenWeight.scaleToTotal(total)),
            constInt32(notTakenWeight.scaleToTotal(total))));
}

void Output::check(LValue condition, WeightedTarget taken, Weight notTakenWeight)
{
    LBasicBlock continuation = FTL_NEW_BLOCK(*this, ("Output::check continuation"));
    branch(condition, taken, WeightedTarget(continuation, notTakenWeight));
    appendTo(continuation);
}

void Output::check(LValue condition, WeightedTarget taken)
{
    check(condition, taken, taken.weight().inverse());
}

#endif // !FTL_USES_B3

LValue Output::load(TypedPointer pointer, LoadType type)
{
    switch (type) {
    case Load8SignExt32:
        return load8SignExt32(pointer);
    case Load8ZeroExt32:
        return load8ZeroExt32(pointer);
    case Load16SignExt32:
        return load8SignExt32(pointer);
    case Load16ZeroExt32:
        return load8ZeroExt32(pointer);
    case Load32:
        return load32(pointer);
    case Load64:
        return load64(pointer);
    case LoadPtr:
        return loadPtr(pointer);
    case LoadFloat:
        return loadFloat(pointer);
    case LoadDouble:
        return loadDouble(pointer);
    }
    RELEASE_ASSERT_NOT_REACHED();
    return nullptr;
}

void Output::store(LValue value, TypedPointer pointer, StoreType type)
{
    switch (type) {
    case Store32As8:
        store32As8(value, pointer);
        return;
    case Store32As16:
        store32As16(value, pointer);
        return;
    case Store32:
        store32(value, pointer);
        return;
    case Store64:
        store64(value, pointer);
        return;
    case StorePtr:
        storePtr(value, pointer);
        return;
    case StoreFloat:
        storeFloat(value, pointer);
        return;
    case StoreDouble:
        storeDouble(value, pointer);
        return;
    }
    RELEASE_ASSERT_NOT_REACHED();
}

} } // namespace JSC::FTL

#endif // ENABLE(FTL_JIT)

