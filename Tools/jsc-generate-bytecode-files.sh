#!/bin/bash

# Generates Bytecodes.h & InitBytecodes.asm


PYTHON_EXECUTABLE="/c/Python27/python"
JAVASCRIPTCORE_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore"
JavaScriptCore_SCRIPTS_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/Scripts"
DERIVEDSOURCES_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/DerivedSources/"

echo "$PYTHON_EXECUTABLE" "$JAVASCRIPTCORE_DIR/generate-bytecode-files" \
  --bytecodes_h "$DERIVEDSOURCES_DIR/Bytecodes.h" \
  --init_bytecodes_asm "$DERIVEDSOURCES_DIR/InitBytecodes.asm" \
  "$JAVASCRIPTCORE_DIR/bytecode/BytecodeList.json"