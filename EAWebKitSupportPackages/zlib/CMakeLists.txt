cmake_minimum_required(VERSION 3.20)

project(zlib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*.*.*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

# Add the source files of the EASTL library
file(GLOB_RECURSE ZLIB_SOURCES "${LOCAL_DIR}/install/*.c")
add_library(zlib ${ZLIB_SOURCES})

# Add the include directories of the EASTL library
target_include_directories(zlib PUBLIC "${LOCAL_DIR}/include" "${LOCAL_DIR}/install")

target_compile_definitions(zlib PUBLIC
  MY_ZCALLOC
  Z_PREFIX=1
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if(MSVC)
  target_compile_definitions(EAStdC PRIVATE
    _CRT_SECURE_NO_WARNINGS
    )
endif()

if (MSVC)
target_compile_options(zlib PRIVATE
    /MP
    /W4
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS /Zf -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254
    /wd4210 /wd4244 /wd4255 /wd4127 /wd4131 /wd4574 /wd4365 /wd4242 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819 
    )
endif()