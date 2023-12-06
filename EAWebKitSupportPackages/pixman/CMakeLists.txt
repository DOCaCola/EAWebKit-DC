cmake_minimum_required(VERSION 3.20)

project(pixman)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*")
if(!LOCAL_DIR)
  # Print an error message if no subdirectory is found
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

# Add the source files of the EASTL library
file(GLOB_RECURSE PIXMAN_SOURCES
  "${LOCAL_DIR}/source/*.c"
  )

file(GLOB PIXMAN_HEADER
  "${LOCAL_DIR}/include/*.h"
  )

#add_library(pixman ${PIXMAN_SOURCES})

set(SRC_DIR ${LOCAL_DIR}/source)
set(SRC_FILES 
  ${SRC_DIR}/pixman.c
  ${SRC_DIR}/pixman-access.c
  ${SRC_DIR}/pixman-access-accessors.c
  ${SRC_DIR}/pixman-bits-image.c
  ${SRC_DIR}/pixman-combine32.c
  ${SRC_DIR}/pixman-combine-float.c
  ${SRC_DIR}/pixman-conical-gradient.c
  ${SRC_DIR}/pixman-x86.c
  ${SRC_DIR}/pixman-mips.c
  ${SRC_DIR}/pixman-arm.c
  ${SRC_DIR}/pixman-ppc.c
  ${SRC_DIR}/pixman-edge.c
  ${SRC_DIR}/pixman-edge-accessors.c
  ${SRC_DIR}/pixman-fast-path.c
  ${SRC_DIR}/pixman-glyph.c
  ${SRC_DIR}/pixman-general.c
  ${SRC_DIR}/pixman-gradient-walker.c
  ${SRC_DIR}/pixman-image.c
  ${SRC_DIR}/pixman-implementation.c
  ${SRC_DIR}/pixman-linear-gradient.c
  ${SRC_DIR}/pixman-matrix.c
  ${SRC_DIR}/pixman-noop.c
  ${SRC_DIR}/pixman-radial-gradient.c
  ${SRC_DIR}/pixman-region16.c
  ${SRC_DIR}/pixman-region32.c
  ${SRC_DIR}/pixman-solid-fill.c
  ${SRC_DIR}/pixman-timer.c
  ${SRC_DIR}/pixman-trap.c
  ${SRC_DIR}/pixman-utils.c)

set(SRC_FILES
  ${PIXMAN_HEADER}
  ${SRC_FILES}
  ${SRC_DIR}/pixman-sse2.c
  )

add_library(pixman 
  ${SRC_FILES})

# Add the include directories of the EASTL library
target_include_directories(pixman PUBLIC "${LOCAL_DIR}/include")

target_compile_definitions(pixman PUBLIC
  PACKAGE=pixman PACKAGE_VERSION="" PACKAGE_BUGREPORT="" PIXMAN_NO_TLS
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if (MSVC)
target_compile_options(pixman PRIVATE
    /MP
    /W4
    -bigobj /FS -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254
    /wd4047 /wd4013 /wd4267 /wd4311 /wd4152 /wd4189 /wd4132 /wd4306 /wd4305 /wd4206 /wd4245 /wd4701 /wd4706 /wd4244 /wd4255 /wd4127 /wd4626 /wd4625 /wd4574 /wd4365 /wd4242 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819 
    )
endif()