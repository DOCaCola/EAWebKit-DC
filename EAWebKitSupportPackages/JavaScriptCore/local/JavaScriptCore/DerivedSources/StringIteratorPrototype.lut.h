// Automatically generated from /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/runtime/StringIteratorPrototype.cpp using /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex stringIteratorPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue stringIteratorPrototypeTableValues[1] = {
   { "next", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringIteratorPrototypeNextCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable stringIteratorPrototypeTable =
    { 1, 1, false, stringIteratorPrototypeTableValues, stringIteratorPrototypeTableIndex };

} // namespace JSC
