// Automatically generated from C:/Webkit2016/WebKit/Source/JavaScriptCore/runtime/ObjectConstructor.cpp using C:/Webkit2016/WebKit/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex objectConstructorTableIndex[34] = {
    { 1, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { 8, -1 },
    { 14, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { 11, -1 },
    { 15, -1 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 12, -1 },
    { 5, -1 },
    { -1, -1 },
    { -1, -1 },
    { 9, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, 32 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
    { 13, -1 },
    { -1, -1 },
    { 3, 33 },
    { 6, -1 },
};

static const struct HashTableValue objectConstructorTableValues[16] = {
   { "getPrototypeOf", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetPrototypeOf), (intptr_t)(1) } },
   { "setPrototypeOf", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorSetPrototypeOf), (intptr_t)(2) } },
   { "getOwnPropertyDescriptor", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetOwnPropertyDescriptor), (intptr_t)(2) } },
   { "getOwnPropertyNames", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetOwnPropertyNames), (intptr_t)(1) } },
   { "keys", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorKeys), (intptr_t)(1) } },
   { "defineProperty", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorDefineProperty), (intptr_t)(3) } },
   { "defineProperties", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorDefineProperties), (intptr_t)(2) } },
   { "create", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorCreate), (intptr_t)(2) } },
   { "seal", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorSeal), (intptr_t)(1) } },
   { "freeze", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorFreeze), (intptr_t)(1) } },
   { "preventExtensions", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorPreventExtensions), (intptr_t)(1) } },
   { "isSealed", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIsSealed), (intptr_t)(1) } },
   { "isFrozen", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIsFrozen), (intptr_t)(1) } },
   { "isExtensible", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIsExtensible), (intptr_t)(1) } },
   { "is", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIs), (intptr_t)(2) } },
   { "assign", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(objectConstructorAssignCodeGenerator), (intptr_t)2 } },
};

static const struct HashTable objectConstructorTable =
    { 16, 31, false, objectConstructorTableValues, objectConstructorTableIndex };

} // namespace JSC
