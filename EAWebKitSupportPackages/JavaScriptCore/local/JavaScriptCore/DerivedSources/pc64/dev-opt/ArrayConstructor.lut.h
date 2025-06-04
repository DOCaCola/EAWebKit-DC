// Automatically generated from C:/Webkit2016/WebKit/Source/JavaScriptCore/runtime/ArrayConstructor.cpp using C:/Webkit2016/WebKit/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex arrayConstructorTableIndex[8] = {
    { -1, -1 },
    { 0, -1 },
    { 2, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
};

static const struct HashTableValue arrayConstructorTableValues[3] = {
   { "isArray", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(arrayConstructorIsArray), (intptr_t)(1) } },
   { "of", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(arrayConstructorOfCodeGenerator), (intptr_t)0 } },
   { "from", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(arrayConstructorFromCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable arrayConstructorTable =
    { 3, 7, false, arrayConstructorTableValues, arrayConstructorTableIndex };

} // namespace JSC
