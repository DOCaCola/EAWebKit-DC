#!/bin/bash
set -e

: "${PYTHON_EXECUTABLE:=/c/Python27/python}"
: "${RUBY_EXECUTABLE:=ruby}"
: "${JAVASCRIPTCORE_DIR:=../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore}"
: "${DERIVED_SOURCES_JAVASCRIPTCORE_DIR:=../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/DerivedSources}"
: "${LLINT_ASM:=../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore}"

# script
GENERATE_BYTECODE_SCRIPT="${JAVASCRIPTCORE_DIR}/generate-bytecode-files"
# in
BYTECODE_LIST_JSON="${JAVASCRIPTCORE_DIR}/bytecode/BytecodeList.json"
#out
BYTECODES_H="${DERIVED_SOURCES_JAVASCRIPTCORE_DIR}/Bytecodes.h"
INIT_BYTECODES_ASM="${DERIVED_SOURCES_JAVASCRIPTCORE_DIR}/InitBytecodes.asm"

# script
OFFSET_EXTRACTOR_SCRIPT="${JAVASCRIPTCORE_DIR}/offlineasm/generate_offset_extractor.rb"
#in
LOW_LEVEL_INTERPRETER_ASM="${JAVASCRIPTCORE_DIR}/llint/LowLevelInterpreter.asm"
# out
LLINT_OFFSETS_H="${DERIVED_SOURCES_JAVASCRIPTCORE_DIR}/LLIntDesiredOffsets.h"

echo "$GENERATE_BYTECODE_SCRIPT"
# Generate Bytecodes.h and InitBytecodes.asm
echo "Generating Bytecodes.h and InitBytecodes.asm..."
"$PYTHON_EXECUTABLE" "$GENERATE_BYTECODE_SCRIPT" \
  --bytecodes_h "$BYTECODES_H" \
  --init_bytecodes_asm "$INIT_BYTECODES_ASM" \
  "$BYTECODE_LIST_JSON"

# Generate LLIntDesiredOffsets.h
echo "Generating LLIntDesiredOffsets.h..."
"$RUBY_EXECUTABLE" "$OFFSET_EXTRACTOR_SCRIPT" \
  -I"$DERIVED_SOURCES_JAVASCRIPTCORE_DIR/" \
  "$LOW_LEVEL_INTERPRETER_ASM" \
  "$LLINT_OFFSETS_H"
