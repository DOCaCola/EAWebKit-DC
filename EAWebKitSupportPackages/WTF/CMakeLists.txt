cmake_minimum_required(VERSION 3.20)

project(WTF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()

# Add source files
file(GLOB WTF_SOURCES 
  "${LOCAL_DIR}/wtf/*.cpp"
  "${LOCAL_DIR}/wtf/dtoa/*.cc"
  "${LOCAL_DIR}/wtf/text/*.cpp"
  "${LOCAL_DIR}/wtf/text/icu/*.cpp"
  "${LOCAL_DIR}/wtf/threads/*.cpp"
  "${LOCAL_DIR}/wtf/unicode/UTF8.cpp"
  "${LOCAL_DIR}/wtf/unicode/ea/*.cpp"
  "${LOCAL_DIR}/wtf/ea/*.cpp"
  )

list(FILTER WTF_SOURCES EXCLUDE REGEX "/wtf/[^/]*(Win|Posix|CF|Pthreads)\\.cpp$")
list(REMOVE_ITEM WTF_SOURCES
  "${LOCAL_DIR}/wtf/Atomics.cpp"
  "${LOCAL_DIR}/wtf/FastMalloc.cpp"
  "${LOCAL_DIR}/wtf/mbmalloc.cpp"
  "${LOCAL_DIR}/wtf/StackStats.cpp"
  "${LOCAL_DIR}/wtf/TCSystemAlloc.cpp")

add_library(WTF ${WTF_SOURCES})

target_include_directories(WTF PRIVATE
  "${LOCAL_DIR}/"
  "${LOCAL_DIR}/wtf/"
  "${LOCAL_DIR}/wtf/ea/"
  "${LOCAL_DIR}/wtf/ea/icu/"
  "${LOCAL_DIR}/wtf/text/"
  "${LOCAL_DIR}/wtf/text/icu/"
  "${LOCAL_DIR}/wtf/threads/"
  "${LOCAL_DIR}/wtf/unicode/"
  )

target_include_directories(WTF INTERFACE
  $<$<COMPILE_LANGUAGE:CXX>:
    "${LOCAL_DIR}/"
    "${LOCAL_DIR}/wtf/ea/"
    "${LOCAL_DIR}/wtf/ea/icu/"
  >
  )

target_link_libraries(WTF PUBLIC EABase)

if (MSVC)
  target_compile_options(WTF PRIVATE
      /MP
      -W0
      /fp:precise
      /fp:except-
      /TP
      /vmg    #<!-- Fix issue when a member function pointer is created before defining the class -->
      $<$<CONFIG:DEBUG>:-Ot>
    )
endif()

target_compile_definitions(WTF PRIVATE
  BUILDING_WTF
  BUILDING_EA__=1
  BUILDING_EA__
  _LIB
  _CRT_SECURE_NO_WARNINGS
  __STD_C
  _UNICODE
  _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES=1
  _HAS_EXCEPTIONS=0
  JS_NO_EXPORT
  $<$<PLATFORM_ID:Windows>:NOMINMAX=1>
  $<$<PLATFORM_ID:Windows>:EAWEBKIT_PLATFORM_HEADER=<windows.h>>
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  $<$<CONFIG:RelWithDebInfo>:EA_DEBUG>
  )

#  <property name="runtime.defines" if="${EAWebKit.ENABLE_LEAN_AND_MEAN}">
#  ${property.value}
#  ENABLE_SVG=0
#</property>

#<property name="runtime.defines" if="!${OpenSourceDll}">
#  ${property.value}
#  WTF_USE_DIRTYSDK=0
#  WTF_USE_EATEXT=0
#</property>

if (MSVC)
target_compile_options(WTF PRIVATE
    /MP
    /W0
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    /vmg -bigobj /FS /Zf /fp:except- -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242
    /wd4530 /wd4996 /wd4275 /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()