cmake_minimum_required(VERSION 3.20)

project(EACallstack)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local_*.*.*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

file(GLOB EACALLSTACK_SOURCES 
  "${LOCAL_DIR}/source/*.cpp"
  )

add_library(EACallstack ${EACALLSTACK_SOURCES})

target_include_directories(EACallstack PUBLIC "${LOCAL_DIR}/include")

target_link_libraries(EACallstack PUBLIC EABase EASTL EAIO EAStdC EAAssert)

target_compile_definitions(EACallstack PRIVATE
  $<$<CONFIG:RELEASE>:EA_SCEDBG_ENABLED=0>
  $<$<CONFIG:DEBUG>:EA_SCEDBG_ENABLED=1>
  EASTL_CORE_ALLOCATOR_ENABLED=1
  EASTL_EASTDC_VSNPRINTF=1
  UTF_USE_EAASSERT=1
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if(MSVC)
  target_compile_definitions(EACallstack PRIVATE
    _CRT_SECURE_NO_WARNINGS
    )
endif()

if (MSVC)
  target_compile_options(EACallstack PRIVATE
      /MP
      /W4
      $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
      -bigobj /FS /Zf -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242 
      /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
      )
endif()