cmake_minimum_required(VERSION 3.20)

project(EAText)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()

file(GLOB EAASSERT_SOURCES 
  "${LOCAL_DIR}/source/*.cpp"
  "${LOCAL_DIR}/source/*.inl"
  "${LOCAL_DIR}/source/internal/*.cpp"
  "${LOCAL_DIR}/source/internal/*.inl"
  )

file(GLOB_RECURSE EAASSERT_HEADER
  "${LOCAL_DIR}/include/*.h"
  )

add_library(EAText ${EAASSERT_SOURCES} ${EAASSERT_HEADER}  )

target_include_directories(EAText PUBLIC "${LOCAL_DIR}/include")

target_link_libraries(EAText PUBLIC EASTL EAIO PPMalloc FreeType)

target_compile_definitions(EAText PRIVATE
  EATEXT_BITMAP_USE_EAGIMEX=0
  EATEXT_USE_FREETYPE=1
  ENABLE_NON_RAM_STREAM=1
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if (MSVC)
target_compile_options(EAText PRIVATE
    /MP
    /W4
    -bigobj /FS -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242
    /wd4548 /wd4619 /wd4530 /wd4217 /wd4005 /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()
