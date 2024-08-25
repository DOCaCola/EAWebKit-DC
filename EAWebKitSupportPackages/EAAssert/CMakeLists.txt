cmake_minimum_required(VERSION 3.20)

project(EAAssert)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local_*.*.*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

file(GLOB EAASSERT_SOURCES 
  "${LOCAL_DIR}/source/*.cpp"
  )

add_library(EAAssert ${EAASSERT_SOURCES})

target_include_directories(EAAssert PUBLIC "${LOCAL_DIR}/include")

target_link_libraries(EAAssert PUBLIC EABase)

target_compile_definitions(EAAssert PRIVATE
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if (MSVC)
  target_compile_options(EAAssert PRIVATE
      /MP
      /W4
      $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
      -bigobj /FS /Zf -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242 
      /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
      )
endif()