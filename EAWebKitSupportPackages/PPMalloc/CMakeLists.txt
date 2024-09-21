cmake_minimum_required(VERSION 3.20)

project(PPMalloc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local_*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()

file(GLOB PPMALLOC_SOURCES 
  "${LOCAL_DIR}/source/cmn/*.cpp"
  "${LOCAL_DIR}/extras/EASmallBlockAllocator.cpp"
  "${LOCAL_DIR}/extras/EASmallBlockAllocatorPool.cpp"
  "${LOCAL_DIR}/extras/EAAllocInfo.cpp"
#  "${LOCAL_DIR}/source/pc/*.cpp"
  )

file(GLOB_RECURSE PPMALLOC_HEADER
  "${LOCAL_DIR}/include/*.h"
  )

add_library(PPMalloc ${PPMALLOC_SOURCES} ${PPMALLOC_HEADER}  )

target_include_directories(PPMalloc PUBLIC "${LOCAL_DIR}/include")

if (NOT TARGET EABase)
    add_subdirectory(../EABase EABase_Build)
endif()

if (NOT TARGET EAThread)
    add_subdirectory(../EAThread EAThread_Build)
endif()

if (NOT TARGET EACallstack)
    add_subdirectory(../EACallstack EACallstack_Build)
endif()

target_link_libraries(PPMalloc PUBLIC EABase EAThread EACallstack)

target_compile_definitions(PPMalloc PRIVATE
  EASTL_CORE_ALLOCATOR_ENABLED=1
  EASTL_EASTDC_VSNPRINTF=1
  PPM_HIGH_SUPPORTED=1
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if(MSVC)
  target_compile_definitions(PPMalloc PRIVATE
    _CRT_SECURE_NO_WARNINGS
    )
endif()


if (MSVC)
target_compile_options(PPMalloc PRIVATE
    /MP
    /W4
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS /Zf -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242 
    /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()