cmake_minimum_required(VERSION 3.28)

project(
  JavaScriptCore
  LANGUAGES C CXX ASM_MASM
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local")
if(!LOCAL_DIR)
  # Print an error message if no subdirectory is found
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

get_filename_component (LOCAL_DIR_NAME ${LOCAL_DIR} NAME)

# Add source files

set (DerivedSourcesConfig $<$<CONFIG:DEBUG>:dev-debug>$<$<CONFIG:RELEASE>:dev-opt>)

if(WIN32 AND CMAKE_SIZEOF_VOID_P EQUAL 8)
  #Windows 64bit
  set(CONFIG_SYSTEM pc64)
else()
   message(FATAL_ERROR "Platform not supported by build files")
endif()

set(DerivedSourcesPath "${LOCAL_DIR_NAME}/JavaScriptCore/DerivedSources/${CONFIG_SYSTEM}/${DerivedSourcesConfig}")
set(DerivedSourcesDir "${CMAKE_CURRENT_SOURCE_DIR}/${DerivedSourcesPath}")

file(GLOB JAVASCRIPTCORE_SOURCES 
  "${LOCAL_DIR}/JavaScriptCore/*.h"
  #"${LOCAL_DIR}/JavaScriptCore/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/API/*.h"
  "${LOCAL_DIR}/JavaScriptCore/API/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/bindings/*.h"
  "${LOCAL_DIR}/JavaScriptCore/bindings/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/builtins/*.h"
  "${LOCAL_DIR}/JavaScriptCore/builtins/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/bytecode/*.h"
  "${LOCAL_DIR}/JavaScriptCore/bytecode/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/bytecompiler/*.h"
  "${LOCAL_DIR}/JavaScriptCore/bytecompiler/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/debugger/*.h"
  "${LOCAL_DIR}/JavaScriptCore/debugger/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/dfg/*.h"
  "${LOCAL_DIR}/JavaScriptCore/dfg/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/ftl/*.h"
  "${LOCAL_DIR}/JavaScriptCore/ftl/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/heap/*.h"
  "${LOCAL_DIR}/JavaScriptCore/heap/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/*.h"
  "${LOCAL_DIR}/JavaScriptCore/inspector/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/agents/*.h"
  "${LOCAL_DIR}/JavaScriptCore/inspector/agents/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/interpreter/*.h"
  "${LOCAL_DIR}/JavaScriptCore/interpreter/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/jit/*.h"
  "${LOCAL_DIR}/JavaScriptCore/jit/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/llint/*.h"
  "${LOCAL_DIR}/JavaScriptCore/llint/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/parser/*.h"
  "${LOCAL_DIR}/JavaScriptCore/parser/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/profiler/*.h"
  "${LOCAL_DIR}/JavaScriptCore/profiler/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/runtime/*.h"
  "${LOCAL_DIR}/JavaScriptCore/runtime/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/tools/*.h"
  "${LOCAL_DIR}/JavaScriptCore/tools/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/wasm/*.h"
  "${LOCAL_DIR}/JavaScriptCore/wasm/*.cpp"
  "${LOCAL_DIR}/JavaScriptCore/yarr/*.h"
  "${LOCAL_DIR}/JavaScriptCore/yarr/*.cpp"
  )

#file(GLOB_RECURSE JAVASCRIPTCORE_SOURCES_HEADER
#  "${LOCAL_DIR}/*.h"
#  )

list(APPEND JAVASCRIPTCORE_SOURCES ${JAVASCRIPTCORE_SOURCES_HEADER})
list(REMOVE_DUPLICATES JAVASCRIPTCORE_SOURCES)

list(APPEND JAVASCRIPTCORE_SOURCES
  "${LOCAL_DIR}/JavaScriptCore/assembler/LinkBuffer.cpp"
  "${LOCAL_DIR}/JavaScriptCore/assembler/MacroAssembler.cpp"
  "${LOCAL_DIR}/JavaScriptCore/assembler/MacroAssemblerX86Common.cpp"

  "${LOCAL_DIR}/JavaScriptCore/disassembler/Disassembler.cpp"
  "${LOCAL_DIR}/JavaScriptCore/disassembler/LLVMDisassembler.cpp"
  "${LOCAL_DIR}/JavaScriptCore/disassembler/X86Disassembler.cpp"

  "${DerivedSourcesDir}/InspectorBackendDispatchers.cpp"
  "${DerivedSourcesDir}/InspectorFrontendDispatchers.cpp"
  "${DerivedSourcesDir}/InspectorProtocolObjects.cpp"
  "${DerivedSourcesDir}/JSCBuiltins.cpp"

  "${LOCAL_DIR}/JavaScriptCore/jit/JITStubsMSVC64.asm"
  "${DerivedSourcesDir}/LowLevelInterpreterWin.asm"
  )

list(REMOVE_ITEM JAVASCRIPTCORE_SOURCES
  "${LOCAL_DIR}/JavaScriptCore/API/JSRemoteInspector.cpp"
  "${LOCAL_DIR}/JavaScriptCore/API/JSProfilerPrivate.cpp"
  "${LOCAL_DIR}/JavaScriptCore/API/JSStringRefBSTR.cpp"
  "${LOCAL_DIR}/JavaScriptCore/API/JSStringRefCF.cpp"
  "${LOCAL_DIR}/JavaScriptCore/bytecode/SamplingTool.cpp"
  "${LOCAL_DIR}/JavaScriptCore/ftl/FTLCommonValues.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/EventLoop.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/JSGlobalObjectConsoleClient.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/JSGlobalObjectInspectorController.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/JSGlobalObjectScriptDebugServer.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/agents/JSGlobalObjectConsoleAgent.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/agents/JSGlobalObjectDebuggerAgent.cpp"
  "${LOCAL_DIR}/JavaScriptCore/inspector/agents/JSGlobalObjectRuntimeAgent.cpp"
  "${LOCAL_DIR}/JavaScriptCore/jit/ExecutableAllocatorFixedVMPool.cpp"
  "${LOCAL_DIR}/JavaScriptCore/llint/LLIntOffsetsExtractor.cpp"
  "${LOCAL_DIR}/JavaScriptCore/runtime/BundlePath.cpp"
  "${LOCAL_DIR}/JavaScriptCore/runtime/JSGlobalObjectDebuggable.cpp"
  "${LOCAL_DIR}/JavaScriptCore/runtime/WatchdogMac.cpp"
  "${LOCAL_DIR}/JavaScriptCore/llint/LLIntOffsetsExtractor.cpp"
  )


#list(SORT JAVASCRIPTCORE_SOURCES COMPARE NATURAL)
#message(FATAL_ERROR ${JAVASCRIPTCORE_SOURCES})
add_library(JavaScriptCore ${JAVASCRIPTCORE_SOURCES})

set(JAVASCRIPTCORE_INCLUDE_PRIVATE_CXX 
  "${LOCAL_DIR}/"
  "${LOCAL_DIR}/JavaScriptCore/"
  "${LOCAL_DIR}/JavaScriptCore/API"
  "${LOCAL_DIR}/JavaScriptCore/ForwardingHeaders/"
  "${LOCAL_DIR}/JavaScriptCore/ForwardingHeaders/JavaScriptCore"
  "${LOCAL_DIR}/JavaScriptCore/assembler"
  "${LOCAL_DIR}/JavaScriptCore/bindings"
  "${LOCAL_DIR}/JavaScriptCore/builtins"
  "${LOCAL_DIR}/JavaScriptCore/bytecode"
  "${LOCAL_DIR}/JavaScriptCore/bytecompiler"
  "${LOCAL_DIR}/JavaScriptCore/debugger"
  "${LOCAL_DIR}/JavaScriptCore/dfg"
  "${LOCAL_DIR}/JavaScriptCore/disassembler"
  "${LOCAL_DIR}/JavaScriptCore/ftl"
  "${LOCAL_DIR}/JavaScriptCore/heap"
  "${LOCAL_DIR}/JavaScriptCore/inspector"
  "${LOCAL_DIR}/JavaScriptCore/inspector/agents"
  "${LOCAL_DIR}/JavaScriptCore/interpreter"
  "${LOCAL_DIR}/JavaScriptCore/jit"
  "${LOCAL_DIR}/JavaScriptCore/llint"
  "${LOCAL_DIR}/JavaScriptCore/llvm"
  "${LOCAL_DIR}/JavaScriptCore/parser"
  "${LOCAL_DIR}/JavaScriptCore/profiler"
  "${LOCAL_DIR}/JavaScriptCore/runtime"
  "${LOCAL_DIR}/JavaScriptCore/tools"
  "${LOCAL_DIR}/JavaScriptCore/wasm"
  "${LOCAL_DIR}/JavaScriptCore/yarr"
  "${DerivedSourcesDir}"
  )

target_include_directories(JavaScriptCore PRIVATE
  $<$<COMPILE_LANGUAGE:CXX>:${JAVASCRIPTCORE_INCLUDE_PRIVATE_CXX}>
  )

set(JAVASCRIPTCORE_INCLUDE_PUBLIC_CXX
  "${LOCAL_DIR}/JavaScriptCore"
  "${LOCAL_DIR}/JavaScriptCore/API"
  "${LOCAL_DIR}"
  "${LOCAL_DIR}/JavaScriptCore/assembler"
  "${LOCAL_DIR}/JavaScriptCore/bindings"
  "${LOCAL_DIR}/JavaScriptCore/bytecode"
  "${LOCAL_DIR}/JavaScriptCore/bytecompiler"
  "${LOCAL_DIR}/JavaScriptCore/debugger"
  "${LOCAL_DIR}/JavaScriptCore/dfg"
  "${LOCAL_DIR}/JavaScriptCore/heap"
  "${LOCAL_DIR}/JavaScriptCore/inspector"
  "${LOCAL_DIR}/JavaScriptCore/interpreter"
  "${LOCAL_DIR}/JavaScriptCore/disassembler"
  "${LOCAL_DIR}/JavaScriptCore/llint"
  "${LOCAL_DIR}/JavaScriptCore/jit"
  "${LOCAL_DIR}/JavaScriptCore/parser"
  "${LOCAL_DIR}/JavaScriptCore/profiler"
  "${LOCAL_DIR}/JavaScriptCore/runtime"
  "${LOCAL_DIR}/JavaScriptCore/yarr"
  "${LOCAL_DIR}/JavaScriptCore/ForwardingHeaders"
  "${DerivedSourcesDir}"
  )

target_include_directories(JavaScriptCore PUBLIC
  $<$<COMPILE_LANGUAGE:CXX>:${JAVASCRIPTCORE_INCLUDE_PUBLIC_CXX}>
  )

target_link_libraries(JavaScriptCore EABase EASTL WTF)

set(JAVASCRIPTCORE_PRIVATE_DEFINITIONS_CXX
    BUILDING_EA__
    BUILDING_EA__=1
    BUILDING_JavaScriptCore
    JS_NO_EXPORT
    NOMINMAX
    UNICODE
    $<$<PLATFORM_ID:Windows>:EAWEBKIT_PLATFORM_HEADER=<windows.h$<ANGLE-R>>
    $<$<CONFIG:RELEASE>:NDEBUG>
    $<$<CONFIG:DEBUG>:EA_DEBUG>
    $<$<CONFIG:RelWithDebInfo>:EA_DEBUG>
  )

target_compile_definitions(JavaScriptCore PRIVATE
  $<$<COMPILE_LANGUAGE:CXX>:${JAVASCRIPTCORE_PRIVATE_DEFINITIONS_CXX}>
  )

if(MSVC)
  target_compile_definitions(JavaScriptCore PRIVATE
    _CRT_SECURE_NO_WARNINGS
    _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES=1
    )
endif()

if (MSVC)
  target_compile_options(JavaScriptCore PRIVATE
    $<$<COMPILE_LANGUAGE:CXX>:
      /MP
      /W0
      /fp:precise
      /fp:except-
      /TP
      /vmg    #<!-- Fix issue when a member function pointer is created before defining the class -->
      $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
      -bigobj /FS /Zf /fp:except- -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242
      /wd4530 /wd4996 /wd4275 /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    >

    $<$<COMPILE_LANGUAGE:ASM_MASM>:
      /Zi
      /WX
      /W2
    >
    )

  # Create path for MASM output as pre-build step. Otherwise MASM will fail
  get_target_property(target_name JavaScriptCore NAME)
  get_target_property(target_binary_dir JavaScriptCore BINARY_DIR)

  set(dir_path "${target_binary_dir}/${target_name}.dir/$<CONFIG>/${DerivedSourcesPath}")

  add_custom_command(TARGET JavaScriptCore PRE_BUILD
                     COMMAND ${CMAKE_COMMAND} -E make_directory ${dir_path})

endif()
