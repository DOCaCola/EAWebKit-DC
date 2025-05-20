cmake_minimum_required(VERSION 3.14)
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)
project(LLIntOffsetsExtractor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCES
    ../../local/JavaScriptCore/llint/LLIntOffsetsExtractor.cpp
)

set(RUBY_EXECUTABLE "C:/Ruby31-x64/bin/ruby.exe")

# Define the executable target
add_executable(${PROJECT_NAME} ${SOURCES})

set(LLINTOE_PRIVATE_DEFINITIONS_CXX
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

if (NOT TARGET EABase)
    add_subdirectory(../../../EABase EABase_Build)
endif()

if (NOT TARGET JavaScriptCore)
    add_subdirectory(../../ JavaScriptCore_Build)
endif()

if (NOT TARGET WTF)
    add_subdirectory(../../../WTF WTF_Build)
endif()

target_compile_definitions(${PROJECT_NAME} PRIVATE
  $<$<COMPILE_LANGUAGE:CXX>:${LLINTOE_PRIVATE_DEFINITIONS_CXX}>
  )
target_link_libraries(${PROJECT_NAME} EABase)

target_compile_definitions(${PROJECT_NAME} PRIVATE __STD_C)

target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/DerivedSources/pc64/dev-opt)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/API)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/assembler)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/bytecode)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/debugger)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/dfg)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/disassembler)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/ForwardingHeaders)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/heap)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/interpreter)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/jit)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/parser)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/profiler)
target_include_directories(${PROJECT_NAME} PRIVATE ../../local/JavaScriptCore/runtime)
target_include_directories(${PROJECT_NAME} PRIVATE ../../../WTF/local)
target_include_directories(${PROJECT_NAME} PRIVATE ../../../WTF/local/wtf/ea)
target_include_directories(${PROJECT_NAME} PRIVATE ../../../WTF/local/wtf/ea/icu)

# Set output directories based on build type
#set(OUTPUT_DIR ${CMAKE_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE})
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR})
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR})

# Platform-specific settings
if(WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE UNICODE _UNICODE)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4) # Enable warnings
    set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/SUBSYSTEM:CONSOLE")
endif()
