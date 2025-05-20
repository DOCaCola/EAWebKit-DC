#!/bin/bash

# === Set directories (edit these to match your environment) ===

# Root directory of JavaScriptCore source
XSRCROOT="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore"

# Root of the destination/build output directory (first ARGV)
XDSTROOT="/c/tmp/BuildOutput"

# Build configuration (fourth ARGV, e.g., Debug or Release)
BUILD_CONFIG="Release"

# Architecture suffix (third ARGV, e.g., 64 or empty string)
ARCH_SUFFIX=""

# === Derived directories and files ===
BUILD_PRODUCTS_DIR="${XDSTROOT}/obj${BUILD_CONFIG}"
DERIVED_SOURCES_DIR="${BUILD_PRODUCTS_DIR}/JavaScriptCore/DerivedSources"
OFFLINE_ASM="${XSRCROOT}/offlineasm/asm.rb"
LLINT_ASM="${XSRCROOT}/llint/LowLevelInterpreter.asm"
OFFSETS_EXTRACTOR="${BUILD_PRODUCTS_DIR}/LLIntOffsetsExtractor/LLIntOffsetsExtractor${ARCH_SUFFIX}.exe"
OUTPUT_FILE="${DERIVED_SOURCES_DIR}/LowLevelInterpreterWin.asm"

# === Create DerivedSources dir if it doesn't exist ===
mkdir -p "${DERIVED_SOURCES_DIR}"

# === Create dummy .asm file ===
echo "END" > "${OUTPUT_FILE}"

# === Run the Ruby offline assembler ===
ruby "${OFFLINE_ASM}" -I. "${LLINT_ASM}" "${OFFSETS_EXTRACTOR}" "${OUTPUT_FILE}"

# === Check success ===
if [ $? -ne 0 ]; then
    echo "Error: Failed to generate ${OUTPUT_FILE}"
    exit 1
fi

echo "Successfully generated ${OUTPUT_FILE}"
