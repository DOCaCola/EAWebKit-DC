#!/bin/bash

# Generates CombinedDomains.json


PYTHON_EXECUTABLE="/c/Python27/python"
JAVASCRIPTCORE_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore"
JavaScriptCore_SCRIPTS_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/Scripts"
DERIVEDSOURCES_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/DerivedSources/"
# there are more in JSC's CMakeLists.txt
JavaScriptCore_INSPECTOR_DOMAINS=(
    "$JAVASCRIPTCORE_DIR/inspector/protocol/ApplicationCache.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/CSS.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Console.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/DOM.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/DOMDebugger.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/DOMStorage.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Database.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Debugger.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/GenericTypes.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Heap.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Inspector.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/LayerTree.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Network.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/OverlayTypes.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Page.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Runtime.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/ScriptProfiler.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Timeline.json"
    "$JAVASCRIPTCORE_DIR/inspector/protocol/Worker.json"
)

OUTPUT_FILE="$DERIVEDSOURCES_DIR/CombinedDomains.json"

mkdir -p "$DERIVEDSOURCES_DIR"

"$PYTHON_EXECUTABLE" "$JavaScriptCore_SCRIPTS_DIR/generate-combined-inspector-json.py" \
  "${JavaScriptCore_INSPECTOR_DOMAINS[@]}" \
  > "$OUTPUT_FILE"