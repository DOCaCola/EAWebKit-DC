// Automatically generated from C:/Webkit2016/WebKit/Source/JavaScriptCore/runtime/RegExpPrototype.cpp using C:/Webkit2016/WebKit/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex regExpPrototypeTableIndex[32] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 8, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
};

static const struct HashTableValue regExpPrototypeTableValues[9] = {
   { "compile", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoFuncCompile), (intptr_t)(2) } },
   { "exec", DontEnum|Function, RegExpExecIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoFuncExec), (intptr_t)(1) } },
   { "test", DontEnum|Function, RegExpTestIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoFuncTest), (intptr_t)(1) } },
   { "toString", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoFuncToString), (intptr_t)(0) } },
   { "global", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoGetterGlobal), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "ignoreCase", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoGetterIgnoreCase), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "multiline", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoGetterMultiline), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "source", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoGetterSource), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "flags", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(regExpProtoGetterFlags), (intptr_t)static_cast<NativeFunction>(nullptr) } },
};

static const struct HashTable regExpPrototypeTable =
    { 9, 31, true, regExpPrototypeTableValues, regExpPrototypeTableIndex };

} // namespace JSC
