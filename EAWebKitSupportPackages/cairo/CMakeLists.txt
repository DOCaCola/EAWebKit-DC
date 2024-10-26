cmake_minimum_required(VERSION 3.20)

project(cairo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*.*.*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

file(GLOB_RECURSE CAIRO_SOURCES "${LOCAL_DIR}/source/*.c")
list(FILTER CAIRO_SOURCES EXCLUDE REGEX ".*cairo-win32-.*\\.c$")
add_library(cairo ${CAIRO_SOURCES})

target_include_directories(cairo PUBLIC 
  "${LOCAL_DIR}/include"
  "${LOCAL_DIR}/include/cairo"
  )

target_link_libraries(cairo PUBLIC pixman libpng)

target_compile_definitions(cairo PRIVATE
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  $<$<CONFIG:RelWithDebInfo>:EA_DEBUG>
  CAIRO_NO_MUTEX=1
  CAIRO_DISABLE_TMPFILE
  cairo_public=
  )

if(MSVC)
  target_compile_definitions(cairo PRIVATE
    _CRT_SECURE_NO_WARNINGS
    )
endif()


if (MSVC)
  target_compile_options(cairo PRIVATE
      /MP
      /W4
      $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
      -bigobj /FS /Zf -w44946 -w44555 -w44296 -w44287 -w44265 -w44254
      /wd4311 /wd4305 /wd4034 /wd4200 /wd4221 /wd4306 /wd4701 /wd4706 /wd4267 /wd4244 /wd4702 /wd4204 /wd4132 /wd4146 /wd4245 /wd4312 /wd4242 /wd4100 /wd4127 /wd4251 /wd4275 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
      )
endif()