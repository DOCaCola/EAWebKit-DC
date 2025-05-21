#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

PYTHON_EXECUTABLE="/c/Python27/python"
MAKE_EXECUTABLE="/c/msys64/usr/bin/make"


# Root directory of JavaScriptCore source
JAVASCRIPTCORE_DIR="$(cd "${SCRIPT_DIR}/../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore" && pwd)"

JavaScriptCore_SCRIPTS_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/Scripts"
DERIVEDSOURCES_DIR="../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/DerivedSources/"

mkdir -p "$DERIVEDSOURCES_DIR"

cd "$DERIVEDSOURCES_DIR"

"$MAKE_EXECUTABLE" -f "$JAVASCRIPTCORE_DIR/DerivedSources.make" \
  JavaScriptCore="$JAVASCRIPTCORE_DIR" \
  PYTHON="$PYTHON_EXECUTABLE"