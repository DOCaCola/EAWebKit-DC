cmake_minimum_required(VERSION 3.20)

project(SQLite)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

add_library(SQLite 
  "${LOCAL_DIR}/include/sqlite3.h"
  "${LOCAL_DIR}/include/sqlite3ext.h"
  "${LOCAL_DIR}/source/sqlite3.c"
  )

# Add the include directories of the EASTL library
target_include_directories(SQLite PUBLIC "${LOCAL_DIR}/include")

target_compile_definitions(SQLite PUBLIC
  SQLITE_ENABLE_MEMORY_MANAGEMENT
  SQLITE_OS_MYWIN
  SQLITE_OS_OTHER
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  $<$<CONFIG:RelWithDebInfo>:EA_DEBUG>
  )

if (MSVC)
target_compile_options(SQLite PRIVATE
    /MP
    /W4
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS /Zf -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254
    /wd4306 /wd4206 /wd4245 /wd4701 /wd4706 /wd4244 /wd4255 /wd4127 /wd4626 /wd4625 /wd4574 /wd4365 /wd4242 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()