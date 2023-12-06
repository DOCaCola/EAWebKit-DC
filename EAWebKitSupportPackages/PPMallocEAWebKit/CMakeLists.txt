cmake_minimum_required(VERSION 3.20)

project(PPMalloc)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()

add_library(PPMalloc 
  "${LOCAL_DIR}/source/cmn/EAStackAllocator.cpp"
  )

target_include_directories(PPMalloc PUBLIC "${LOCAL_DIR}/include")

target_link_libraries(PPMalloc PUBLIC EABase)

target_compile_definitions(PPMalloc PRIVATE
  PPM_HIGH_SUPPORTED
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if (MSVC)
target_compile_options(PPMalloc PRIVATE
    /MP
    /W4
    -bigobj /FS -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242 
    /wd4574 /wd4365 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()