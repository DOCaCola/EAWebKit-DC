#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

PERL_EXECUTABLE="perl"
PYTHON_EXECUTABLE="/c/Python27/python"
MAKE_EXECUTABLE="/c/msys64/usr/bin/make"
GPERF_EXECUTABLE="gperf"
CODE_GENERATOR_PREPROCESSOR_PATH="/c/Program Files/Microsoft Visual Studio/2022/Enterprise/VC/Tools/MSVC/14.38.33130/bin/HostX64/x64"
CODE_GENERATOR_PREPROCESSOR="cl -nologo -EP"

export PATH="$CODE_GENERATOR_PREPROCESSOR_PATH:/c/GnuWin32/bin/:$PATH"

FEATURE_DEFINES_WITH_SPACE_SEPARATOR=""


# Root directory of JavaScriptCore source
WEBCORE_DIR="$(cd "${SCRIPT_DIR}/../WebCore" && pwd)"

JAVASCRIPTCORE_DIR="$(cd "${SCRIPT_DIR}/../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore" && pwd)"
JavaScriptCore_SCRIPTS_DIR="$(cd "${SCRIPT_DIR}/../EAWebKitSupportPackages/JavaScriptCore/local/JavaScriptCore/Scripts" && pwd)"
DERIVED_SOURCES_WEBCORE_DIR="$WEBCORE_DIR/DerivedSources"

#!/bin/bash
# Generated from CMakeLists.txt custom commands

# Create directories if needed
mkdir -p "$DERIVED_SOURCES_WEBCORE_DIR"

cd "$WEBCORE_DIR"

# InspectorOverlayPage
${PYTHON_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/inline-and-minify-stylesheets-and-scripts.py ${WEBCORE_DIR}/inspector/InspectorOverlayPage.html ${DERIVED_SOURCES_WEBCORE_DIR}/InspectorOverlayPage.combined.html
${PERL_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/xxd.pl InspectorOverlayPage_html ${DERIVED_SOURCES_WEBCORE_DIR}/InspectorOverlayPage.combined.html ${DERIVED_SOURCES_WEBCORE_DIR}/InspectorOverlayPage.h

# CommandLineAPIModuleSource
#${CMAKE_COMMAND} -E echo "//# sourceURL=__InjectedScript_CommandLineAPIModuleSource.js" > ${DERIVED_SOURCES_WEBCORE_DIR}/CommandLineAPIModuleSource.min.js
${PYTHON_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/jsmin.py < ${WEBCORE_DIR}/inspector/CommandLineAPIModuleSource.js >> ${DERIVED_SOURCES_WEBCORE_DIR}/CommandLineAPIModuleSource.min.js
${PERL_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/xxd.pl CommandLineAPIModuleSource_js ${DERIVED_SOURCES_WEBCORE_DIR}/CommandLineAPIModuleSource.min.js ${DERIVED_SOURCES_WEBCORE_DIR}/CommandLineAPIModuleSource.h

# HTTPHeaderNames
${PYTHON_EXECUTABLE} ${WEBCORE_DIR}/platform/network/create-http-header-name-table ${WEBCORE_DIR}/platform/network/HTTPHeaderNames.in "${GPERF_EXECUTABLE}"

cd "$DERIVED_SOURCES_WEBCORE_DIR"
# CSSPropertyNames
${PERL_EXECUTABLE} -ne "print" ${WEBCORE_DIR}/css/CSSProperties.json > CSSProperties.json
${PERL_EXECUTABLE} ${WEBCORE_DIR}/css/makeprop.pl --defines "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR}" --gperf-executable "${GPERF_EXECUTABLE}"

# CSSValueKeywords
WebCore_CSS_VALUE_KEYWORDS="
  ${WEBCORE_DIR}/css/CSSValueKeywords.in
  ${WEBCORE_DIR}/css/SVGCSSValueKeywords.in
"

${PERL_EXECUTABLE} -ne "print" ${WebCore_CSS_VALUE_KEYWORDS} > ${DERIVED_SOURCES_WEBCORE_DIR}/CSSValueKeywords.in
${PERL_EXECUTABLE} ${WEBCORE_DIR}/css/makevalues.pl --defines "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR}" --preprocessor "${CODE_GENERATOR_PREPROCESSOR}"

# SelectorPseudoClassAndCompatibilityElementMap
${PYTHON_EXECUTABLE} ${WEBCORE_DIR}/css/makeSelectorPseudoClassAndCompatibilityElementMap.py ${WEBCORE_DIR}/css/SelectorPseudoClassAndCompatibilityElementMap.in "${GPERF_EXECUTABLE}" "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR}"

# SelectorPseudoElementTypeMap
${PYTHON_EXECUTABLE} ${WEBCORE_DIR}/css/makeSelectorPseudoElementsMap.py ${WEBCORE_DIR}/css/SelectorPseudoElementTypeMap.in "${GPERF_EXECUTABLE}" "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR}"

# XMLViewerCSS
${PYTHON_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/cssmin.py < ${WEBCORE_DIR}/xml/XMLViewer.css > ${DERIVED_SOURCES_WEBCORE_DIR}/XMLViewer.min.css
${PERL_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/xxd.pl XMLViewer_css ${DERIVED_SOURCES_WEBCORE_DIR}/XMLViewer.min.css ${DERIVED_SOURCES_WEBCORE_DIR}/XMLViewerCSS.h

# XMLViewerJS
${PYTHON_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/jsmin.py < ${WEBCORE_DIR}/xml/XMLViewer.js > ${DERIVED_SOURCES_WEBCORE_DIR}/XMLViewer.min.js
${PERL_EXECUTABLE} ${JavaScriptCore_SCRIPTS_DIR}/xxd.pl XMLViewer_js ${DERIVED_SOURCES_WEBCORE_DIR}/XMLViewer.min.js ${DERIVED_SOURCES_WEBCORE_DIR}/XMLViewerJS.h

# HTMLEntityTable
${PYTHON_EXECUTABLE} ${WEBCORE_DIR}/html/parser/create-html-entity-table -o ${DERIVED_SOURCES_WEBCORE_DIR}/HTMLEntityTable.cpp ${WEBCORE_DIR}/html/parser/HTMLEntityNames.in

# DOMJITAbstractHeapRepository
${RUBY_EXECUTABLE} ${WEBCORE_DIR}/domjit/generate-abstract-heap.rb ${WEBCORE_DIR}/domjit/DOMJITAbstractHeapRepository.yaml ${DERIVED_SOURCES_WEBCORE_DIR}/DOMJITAbstractHeapRepository.h

# UserAgentStyleSheets
${PERL_EXECUTABLE} ${WEBCORE_DIR}/css/make-css-file-arrays.pl --defines "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR}" --preprocessor "${CODE_GENERATOR_PREPROCESSOR}" ${DERIVED_SOURCES_WEBCORE_DIR}/UserAgentStyleSheets.h ${DERIVED_SOURCES_WEBCORE_DIR}/UserAgentStyleSheetsData.cpp ${WebCore_USER_AGENT_STYLE_SHEETS}

# PlugInsResources
${PERL_EXECUTABLE} ${WEBCORE_DIR}/css/make-css-file-arrays.pl --defines "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR}" --preprocessor "${CODE_GENERATOR_PREPROCESSOR}" ${DERIVED_SOURCES_WEBCORE_DIR}/PlugInsResources.h ${DERIVED_SOURCES_WEBCORE_DIR}/PlugInsResourcesData.cpp ${WebCore_PLUG_INS_RESOURCES}

# WebReplayInputs
# CSSValueKeywords

WebCore_WEB_REPLAY_INPUTS="
  ${WEBCORE_DIR}/replay/WebInputs.json
  ${JAVASCRIPTCORE_DIR}/replay/JSInputs.json
"

${PYTHON_EXECUTABLE} ${JAVASCRIPTCORE_DIR}/replay/scripts/CodeGeneratorReplayInputs.py --outputDir ${DERIVED_SOURCES_WEBCORE_DIR}/ --framework WebCore ${WebCore_WEB_REPLAY_INPUTS}
