cmake_minimum_required(VERSION 3.20)

project(EASTL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local_*.*.*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

# Add the source files
file(GLOB_RECURSE EASTL_SOURCES
  "${LOCAL_DIR}/include/*.h"
  "${LOCAL_DIR}/source/*.cpp"
  )
add_library(EASTL ${EASTL_SOURCES})

target_include_directories(EASTL PRIVATE
  "${LOCAL_DIR}/include"
  "${LOCAL_DIR}/source"
  )

target_include_directories(EASTL PUBLIC
  $<$<COMPILE_LANGUAGE:CXX>:${LOCAL_DIR}/include>
  )

# Add the dependencies of the EASTL library
target_link_libraries(EASTL PUBLIC EABase)

target_compile_definitions(EASTL PRIVATE
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if(MSVC)
  target_compile_definitions(EASTL PRIVATE
    _CRT_SECURE_NO_WARNINGS
    )
endif()

if (MSVC)
target_compile_options(EASTL PRIVATE
    /MP
    /W4
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242 
    /wd4738 /wd4548 /wd4619 /wd4530 /wd4217 /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()