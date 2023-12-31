/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 * Copyright (C) 2013 Igalia S.L. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "OrderIterator.h"

#include "RenderBox.h"

namespace WebCore {

static const int cInvalidIndex = -1;

OrderIterator::OrderIterator(RenderBox& containerBox)
    : m_containerBox(containerBox)
{
    reset();
}

RenderBox* OrderIterator::first()
{
    reset();
    return next();
}

RenderBox* OrderIterator::next()
{
    int endIndex = m_orderValues.size();
    do {
        if (m_currentChild) {
            m_currentChild = m_currentChild->nextSiblingBox();
            continue;
        }

        if (m_orderIndex == endIndex)
            return nullptr;

        if (m_orderIndex != cInvalidIndex) {
            ++m_orderIndex;
            if (m_orderIndex == endIndex)
                return nullptr;
        } else
            m_orderIndex = 0;

        m_currentChild = m_containerBox.firstChildBox();
    } while (!m_currentChild || m_currentChild->style().order() != m_orderValues[m_orderIndex]);

    return m_currentChild;
}

void OrderIterator::reset()
{
    m_currentChild = nullptr;
    m_orderIndex = cInvalidIndex;
}

OrderIteratorPopulator::OrderIteratorPopulator(OrderIterator& iterator)
    : m_iterator(iterator)
{
    // Note that we don't release the memory here, we only invalidate the size
    // This avoids unneeded reallocation if the size ends up not changing.
    m_iterator.m_orderValues.shrink(0);
}

OrderIteratorPopulator::~OrderIteratorPopulator()
{
    m_iterator.reset();

    if (m_iterator.m_orderValues.size() > 1)
        removeDuplicatedOrderValues();
}

void OrderIteratorPopulator::removeDuplicatedOrderValues()
{
    auto& orderValues = m_iterator.m_orderValues;

    std::sort(orderValues.begin(), orderValues.end());
    auto nextElement = std::unique(orderValues.begin(), orderValues.end());
    orderValues.shrinkCapacity(nextElement - orderValues.begin());
}

void OrderIteratorPopulator::collectChild(const RenderBox& child)
{
    m_iterator.m_orderValues.append(child.style().order());
}


} // namespace WebCore
