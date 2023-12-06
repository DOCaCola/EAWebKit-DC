# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.20)

# Set the project name and version
project(coreallocator)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()
#[[
file(GLOB EAASSERT_SOURCES 
  "${LOCAL_DIR}/source/*.cpp"
  "${LOCAL_DIR}/source/*.inl"
  "${LOCAL_DIR}/source/internal/*.cpp"
  "${LOCAL_DIR}/source/internal/*.inl"
  )

file(GLOB_RECURSE EAASSERT_HEADER
  "${LOCAL_DIR}/include/*.h"
  )

add_library(coreallocator ${EAASSERT_SOURCES} ${EAASSERT_HEADER}  )
]]
add_library(coreallocator INTERFACE)

target_include_directories(coreallocator INTERFACE "${LOCAL_DIR}/include")

#target_link_libraries(coreallocator PUBLIC EASTL)
#[[
target_compile_definitions(coreallocator PRIVATE
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )
]]