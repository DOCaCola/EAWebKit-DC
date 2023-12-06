cmake_minimum_required(VERSION 3.20)

project(libpng)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*.*.*")
if(!LOCAL_DIR)
  # Print an error message if no subdirectory is found
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

file(GLOB_RECURSE LIBPNG_SOURCES "${LOCAL_DIR}/source/*.c")
add_library(libpng ${LIBPNG_SOURCES})

target_include_directories(libpng PUBLIC "${LOCAL_DIR}/include/libpng")

target_link_libraries(libpng PUBLIC zlib)

target_compile_definitions(libpng PRIVATE
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  PNG_NO_MMX_CODE PNG_IMPEXP=
  )

if (MSVC)
target_compile_options(libpng PRIVATE
    /MP
    /W0
    -bigobj /FS
    /wd4047 /wd4013 /wd4996 /wd4706 /wd4702 /wd4701 /wd4700 /wd4311 /wd4306 /wd4305 /wd4295 /wd4267 /wd4255 /wd4245 /wd4244 /wd4189 /wd4152 /wd4132 /wd4131 /wd4127 /wd4115 /wd4057 /wd4005 /wd4574 /wd4365 /wd4242 /wd4296 /wd4312 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()
