// Automatically generated from /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/runtime/StringPrototype.cpp using /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex stringPrototypeTableIndex[18] = {
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 16 },
    { 3, -1 },
    { 1, 17 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { 5, -1 },
};

static const struct HashTableValue stringPrototypeTableValues[7] = {
   { "match", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypeMatchCodeGenerator), (intptr_t)1 } },
   { "padStart", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypePadStartCodeGenerator), (intptr_t)1 } },
   { "padEnd", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypePadEndCodeGenerator), (intptr_t)1 } },
   { "repeat", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypeRepeatCodeGenerator), (intptr_t)1 } },
   { "replace", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypeReplaceCodeGenerator), (intptr_t)2 } },
   { "search", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypeSearchCodeGenerator), (intptr_t)1 } },
   { "split", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringPrototypeSplitCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable stringPrototypeTable =
    { 7, 15, false, stringPrototypeTableValues, stringPrototypeTableIndex };

} // namespace JSC
