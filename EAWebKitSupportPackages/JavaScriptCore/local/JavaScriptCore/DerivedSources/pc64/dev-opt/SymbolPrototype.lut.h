// Automatically generated from /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/runtime/SymbolPrototype.cpp using /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex symbolPrototypeTableIndex[4] = {
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
};

static const struct HashTableValue symbolPrototypeTableValues[2] = {
   { "toString", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(symbolProtoFuncToString), (intptr_t)(0) } },
   { "valueOf", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(symbolProtoFuncValueOf), (intptr_t)(0) } },
};

static const struct HashTable symbolPrototypeTable =
    { 2, 3, false, symbolPrototypeTableValues, symbolPrototypeTableIndex };

} // namespace JSC
