// Automatically generated from /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/wasm/js/WebAssemblyPrototype.cpp using /c/FleetOperationsNX/EAWebKit-DC/EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex prototypeTableWebAssemblyIndex[4] = {
    { -1, -1 },
    { 1, -1 },
    { 0, -1 },
    { -1, -1 },
};

static const struct HashTableValue prototypeTableWebAssemblyValues[2] = {
   { "validate", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyFunctionValidate), (intptr_t)(1) } },
   { "compile", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(webAssemblyFunctionCompile), (intptr_t)(1) } },
};

static const struct HashTable prototypeTableWebAssembly =
    { 2, 3, false, prototypeTableWebAssemblyValues, prototypeTableWebAssemblyIndex };

} // namespace JSC
