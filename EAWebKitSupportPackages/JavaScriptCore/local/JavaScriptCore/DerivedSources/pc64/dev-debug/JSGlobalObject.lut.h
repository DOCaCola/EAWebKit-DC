// Automatically generated from C:/Webkit2016/WebKit/Source/JavaScriptCore/runtime/JSGlobalObject.cpp using C:/Webkit2016/WebKit/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex globalObjectTableIndex[34] = {
    { -1, -1 },
    { 8, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, 33 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, 32 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { 5, -1 },
};

static const struct HashTableValue globalObjectTableValues[9] = {
   { "parseFloat", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncParseFloat), (intptr_t)(1) } },
   { "isNaN", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncIsNaN), (intptr_t)(1) } },
   { "isFinite", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncIsFinite), (intptr_t)(1) } },
   { "escape", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncEscape), (intptr_t)(1) } },
   { "unescape", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncUnescape), (intptr_t)(1) } },
   { "decodeURI", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncDecodeURI), (intptr_t)(1) } },
   { "decodeURIComponent", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncDecodeURIComponent), (intptr_t)(1) } },
   { "encodeURI", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncEncodeURI), (intptr_t)(1) } },
   { "encodeURIComponent", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(globalFuncEncodeURIComponent), (intptr_t)(1) } },
};

static const struct HashTable globalObjectTable =
    { 9, 31, false, globalObjectTableValues, globalObjectTableIndex };

} // namespace JSC
