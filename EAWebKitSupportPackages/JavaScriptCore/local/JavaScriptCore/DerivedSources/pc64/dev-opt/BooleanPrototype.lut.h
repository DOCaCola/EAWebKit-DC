// Automatically generated from /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/runtime/BooleanPrototype.cpp using /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex booleanPrototypeTableIndex[4] = {
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
};

static const struct HashTableValue booleanPrototypeTableValues[2] = {
   { "toString", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(booleanProtoFuncToString), (intptr_t)(0) } },
   { "valueOf", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(booleanProtoFuncValueOf), (intptr_t)(0) } },
};

static const struct HashTable booleanPrototypeTable =
    { 2, 3, false, booleanPrototypeTableValues, booleanPrototypeTableIndex };

} // namespace JSC
