/*
 *  Copyright (C) 2003, 2007, 2009, 2012 Apple Inc. All rights reserved.
 * Copyright (C) 2016 Electronic Arts, Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 *
 */

#include "config.h"
#include "CommonIdentifiers.h"
//+EAWebKitChange
//04/14/2016  this provides a definition for BytecodeIntrinsicNode, which is necissary for the MSVC compiler to get the right size of the member function pointer if not using the /vmg compiler flag (see validation below)
#include "Nodes.h"  
//-EAWebKitChange

#include "BuiltinNames.h"
#include "IdentifierInlines.h"
#include "JSCBuiltins.h"
#include "PrivateName.h"

//+EAWebKitChange
//04/14/2016 added some validation regarding sizeof member function pointers, which MSVC can get wrong
//issue is described here https://social.msdn.microsoft.com/Forums/vstudio/en-US/72343dd4-3a43-46e8-889e-73dc4d8e9432/discrepancy-with-sizeof-in-template?forum=vcgeneral
#if defined(EA_PLATFORM_WIN64)
//pc64 these are the values if we have a proper definition of the member function pointer JSC::RegisterID * (__cdecl JSC::BytecodeIntrinsicNode::*)(JSC::BytecodeGenerator &, JSC::RegisterID *)
//static_assert(sizeof(WTF::KeyValuePair<WTF::RefPtr<WTF::UniquedStringImpl>, JSC::RegisterID * (__cdecl JSC::BytecodeIntrinsicNode::*)(JSC::BytecodeGenerator &, JSC::RegisterID *)>) == 24, "Size not expected");
//static_assert(sizeof(WTF::RefPtr<WTF::UniquedStringImpl>) == 8, "Size not expected");
//static_assert(sizeof(JSC::RegisterID * (__cdecl JSC::BytecodeIntrinsicNode::*)(JSC::BytecodeGenerator &, JSC::RegisterID *)) == 16, "Size not expected");

//pc64 these are the values we will have if compiling with /vmg which is the current plan
static_assert(sizeof(WTF::KeyValuePair<WTF::RefPtr<WTF::UniquedStringImpl>, JSC::RegisterID * (__cdecl JSC::BytecodeIntrinsicNode::*)(JSC::BytecodeGenerator &, JSC::RegisterID *)>) == 32, "Size not expected");
static_assert(sizeof(WTF::RefPtr<WTF::UniquedStringImpl>) == 8, "Size not expected");
static_assert(sizeof(JSC::RegisterID * (__cdecl JSC::BytecodeIntrinsicNode::*)(JSC::BytecodeGenerator &, JSC::RegisterID *)) == 24, "Size not expected");
#endif
//-EAWebKitChange

namespace JSC {

#define INITIALIZE_PROPERTY_NAME(name) , name(Identifier::fromString(vm, #name))
#define INITIALIZE_KEYWORD(name) , name##Keyword(Identifier::fromString(vm, #name))
#define INITIALIZE_PRIVATE_NAME(name) , name##PrivateName(m_builtinNames->name##PrivateName())
#define INITIALIZE_SYMBOL(name) , name##Symbol(m_builtinNames->name##Symbol())

CommonIdentifiers::CommonIdentifiers(VM* vm)
    : nullIdentifier()
    , emptyIdentifier(Identifier::EmptyIdentifier)
    , underscoreProto(Identifier::fromString(vm, "__proto__"))
    , thisIdentifier(Identifier::fromString(vm, "this"))
    , useStrictIdentifier(Identifier::fromString(vm, "use strict"))
    , timesIdentifier(Identifier::fromString(vm, "*"))
    , m_builtinNames(new BuiltinNames(vm, this))
    JSC_COMMON_IDENTIFIERS_EACH_KEYWORD(INITIALIZE_KEYWORD)
    JSC_COMMON_IDENTIFIERS_EACH_PROPERTY_NAME(INITIALIZE_PROPERTY_NAME)
    JSC_COMMON_PRIVATE_IDENTIFIERS_EACH_PROPERTY_NAME(INITIALIZE_PRIVATE_NAME)
    JSC_COMMON_PRIVATE_IDENTIFIERS_EACH_WELL_KNOWN_SYMBOL(INITIALIZE_SYMBOL)
    , m_bytecodeIntrinsicRegistry(*this)
{
}

CommonIdentifiers::~CommonIdentifiers()
{
}

bool CommonIdentifiers::isPrivateName(SymbolImpl& uid) const
{
    return m_builtinNames->isPrivateName(uid);
}

bool CommonIdentifiers::isPrivateName(UniquedStringImpl& uid) const
{
    return m_builtinNames->isPrivateName(uid);
}

bool CommonIdentifiers::isPrivateName(const Identifier& ident) const
{
    return m_builtinNames->isPrivateName(ident);
}

const Identifier* CommonIdentifiers::getPrivateName(const Identifier& ident) const
{
    return m_builtinNames->getPrivateName(ident);
}
    
Identifier CommonIdentifiers::getPublicName(const Identifier& ident) const
{
    return m_builtinNames->getPublicName(ident);
}


} // namespace JSC
