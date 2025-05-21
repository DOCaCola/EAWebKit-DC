#!/bin/bash

# Generates CombinedDomains.json


PYTHON_EXECUTABLE="/c/Python27/python"
JAVASCRIPTCORE_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore"
JavaScriptCore_SCRIPTS_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/Scripts"
DERIVEDSOURCES_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/DerivedSources/"

JavaScriptCore_BUILTINS_SOURCES="
$JAVASCRIPTCORE_DIR/builtins/ArrayConstructor.js
$JAVASCRIPTCORE_DIR/builtins/ArrayIteratorPrototype.js
$JAVASCRIPTCORE_DIR/builtins/ArrayPrototype.js
$JAVASCRIPTCORE_DIR/builtins/AsyncFunctionPrototype.js
$JAVASCRIPTCORE_DIR/builtins/DatePrototype.js
$JAVASCRIPTCORE_DIR/builtins/FunctionPrototype.js
$JAVASCRIPTCORE_DIR/builtins/GeneratorPrototype.js
$JAVASCRIPTCORE_DIR/builtins/GlobalObject.js
$JAVASCRIPTCORE_DIR/builtins/GlobalOperations.js
$JAVASCRIPTCORE_DIR/builtins/InspectorInstrumentationObject.js
$JAVASCRIPTCORE_DIR/builtins/InternalPromiseConstructor.js
$JAVASCRIPTCORE_DIR/builtins/IteratorHelpers.js
$JAVASCRIPTCORE_DIR/builtins/IteratorPrototype.js
$JAVASCRIPTCORE_DIR/builtins/MapPrototype.js
$JAVASCRIPTCORE_DIR/builtins/ModuleLoaderPrototype.js
$JAVASCRIPTCORE_DIR/builtins/NumberConstructor.js
$JAVASCRIPTCORE_DIR/builtins/NumberPrototype.js
$JAVASCRIPTCORE_DIR/builtins/ObjectConstructor.js
$JAVASCRIPTCORE_DIR/builtins/PromiseConstructor.js
$JAVASCRIPTCORE_DIR/builtins/PromiseOperations.js
$JAVASCRIPTCORE_DIR/builtins/PromisePrototype.js
$JAVASCRIPTCORE_DIR/builtins/ReflectObject.js
$JAVASCRIPTCORE_DIR/builtins/RegExpPrototype.js
$JAVASCRIPTCORE_DIR/builtins/SetPrototype.js
$JAVASCRIPTCORE_DIR/builtins/StringConstructor.js
$JAVASCRIPTCORE_DIR/builtins/StringIteratorPrototype.js
$JAVASCRIPTCORE_DIR/builtins/StringPrototype.js
$JAVASCRIPTCORE_DIR/builtins/TypedArrayConstructor.js
$JAVASCRIPTCORE_DIR/builtins/TypedArrayPrototype.js
"

OUTPUT_FILE="$DERIVEDSOURCES_DIR/CombinedDomains.json"

mkdir -p "$DERIVEDSOURCES_DIR"

"$PYTHON_EXECUTABLE" "$JavaScriptCore_SCRIPTS_DIR/generate-js-builtins.py" \
  --framework JavaScriptCore --output-directory "$DERIVEDSOURCES_DIR" \
  --combined $JavaScriptCore_BUILTINS_SOURCES