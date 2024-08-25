cmake_minimum_required(VERSION 3.20)

project(EABase)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local_*.*.*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

add_library(EABase INTERFACE)

target_include_directories(EABase INTERFACE
  $<$<OR:$<COMPILE_LANGUAGE:C>,$<COMPILE_LANGUAGE:CXX>>:${LOCAL_DIR}/include/Common>
  )
