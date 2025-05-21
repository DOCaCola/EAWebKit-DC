#!/bin/bash

#generates CombinedDomains.json

set -e

SCRIPT_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/inspector/Scripts"
DOMAINS_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/inspector/protocol"
DERIVEDSOURCES_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/DerivedSources"
OUTPUT_DIR="$DERIVEDSOURCES_DIR"/inspector"
OUTPUT_FILE="$OUTPUT_DIR/CombinedDomains.json"
PYTHON_EXECUTABLE=/c/Python27/python

# Ensure output directory exists
mkdir -p "$OUTPUT_DIR"

echo "Generating CombinedDomains.json..."

$PYTHON_EXECUTABLE "$SCRIPT_DIR/generate-inspector-protocol-bindings.py" \
    --output "$DERIVEDSOURCES_DIR"/inspector \
    --framework JavaScriptCore ${DERIVEDSOURCES_DIR}/CombinedDomains.json

echo "Done. Output saved to: $OUTPUT_FILE"
