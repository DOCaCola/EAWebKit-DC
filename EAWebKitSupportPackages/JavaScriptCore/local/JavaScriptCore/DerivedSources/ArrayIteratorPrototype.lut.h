// Automatically generated from /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/runtime/ArrayIteratorPrototype.cpp using /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex arrayIteratorPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue arrayIteratorPrototypeTableValues[1] = {
   { "next", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(arrayIteratorPrototypeNextCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable arrayIteratorPrototypeTable =
    { 1, 1, false, arrayIteratorPrototypeTableValues, arrayIteratorPrototypeTableIndex };

} // namespace JSC
