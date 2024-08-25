cmake_minimum_required(VERSION 3.20)

project(FreeType)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*/freetype-*/")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

#[[
add_library(FreeType 
  ${LOCAL_DIR}/src/base/ftbase.c
  ${LOCAL_DIR}/src/base/ftbitmap.c
  ${LOCAL_DIR}/src/base/ftdebug.c
  ${LOCAL_DIR}/src/base/ftfstype.c
  ${LOCAL_DIR}/src/base/ftgasp.c
  ${LOCAL_DIR}/src/base/ftglyph.c
  ${LOCAL_DIR}/src/base/ftinit.c
  ${LOCAL_DIR}/src/base/ftlcdfil.c
  ${LOCAL_DIR}/src/base/ftstroke.c
  ${LOCAL_DIR}/src/base/ftsystem.c
  ${LOCAL_DIR}/src/base/ftbbox.c
  ${LOCAL_DIR}/src/base/ftmm.c
  ${LOCAL_DIR}/src/base/ftpfr.c
  ${LOCAL_DIR}/src/base/ftsynth.c
  ${LOCAL_DIR}/src/base/fttype1.c
  ${LOCAL_DIR}/src/base/ftwinfnt.c
  ${LOCAL_DIR}/src/base/ftfntfmt.c      
  ${LOCAL_DIR}/src/autofit/autofit.c
  ${LOCAL_DIR}/src/bdf/bdf.c
  ${LOCAL_DIR}/src/cff/cff.c
  ${LOCAL_DIR}/src/cache/ftcache.c
  ${LOCAL_DIR}/src/gzip/ftgzip.c
  ${LOCAL_DIR}/src/lzw/ftlzw.c
  ${LOCAL_DIR}/src/smooth/smooth.c
  ${LOCAL_DIR}/src/pcf/pcf.c
  ${LOCAL_DIR}/src/pfr/pfr.c
  ${LOCAL_DIR}/src/psaux/psaux.c
  ${LOCAL_DIR}/src/pshinter/pshinter.c
  ${LOCAL_DIR}/src/psnames/psmodule.c
  ${LOCAL_DIR}/src/raster/raster.c
  ${LOCAL_DIR}/src/sfnt/sfnt.c
  ${LOCAL_DIR}/src/truetype/truetype.c
  ${LOCAL_DIR}/src/type1/type1.c
  ${LOCAL_DIR}/src/cid/type1cid.c
  ${LOCAL_DIR}/src/type42/type42.c
  ${LOCAL_DIR}/src/winfonts/winfnt.c
  )
]]

add_library(FreeType
  ${LOCAL_DIR}/src/autofit/autofit.c
  ${LOCAL_DIR}/src/bdf/bdf.c
  ${LOCAL_DIR}/src/cff/cff.c
  ${LOCAL_DIR}/src/base/ftbase.c
  ${LOCAL_DIR}/src/base/ftbbox.c
  ${LOCAL_DIR}/src/base/ftbitmap.c
  ${LOCAL_DIR}/src/cache/ftcache.c
  ${LOCAL_DIR}/src/base/ftdebug.c
  ${LOCAL_DIR}/src/base/ftfstype.c
  ${LOCAL_DIR}/src/base/ftgasp.c
  ${LOCAL_DIR}/src/base/ftglyph.c
  ${LOCAL_DIR}/src/gzip/ftgzip.c
  ${LOCAL_DIR}/src/base/ftinit.c
  ${LOCAL_DIR}/src/lzw/ftlzw.c
  ${LOCAL_DIR}/src/base/ftmm.c
  ${LOCAL_DIR}/src/base/ftpfr.c
  ${LOCAL_DIR}/src/base/ftstroke.c
  ${LOCAL_DIR}/src/base/ftsynth.c   
  ${LOCAL_DIR}/src/base/ftsystem.c
  ${LOCAL_DIR}/src/base/fttype1.c
  ${LOCAL_DIR}/src/base/ftwinfnt.c
  ${LOCAL_DIR}/src/pcf/pcf.c
  ${LOCAL_DIR}/src/pfr/pfr.c
  ${LOCAL_DIR}/src/psaux/psaux.c
  ${LOCAL_DIR}/src/pshinter/pshinter.c
  ${LOCAL_DIR}/src/psnames/psnames.c
  ${LOCAL_DIR}/src/raster/raster.c
  ${LOCAL_DIR}/src/sfnt/sfnt.c
  ${LOCAL_DIR}/src/smooth/smooth.c
  ${LOCAL_DIR}/src/truetype/truetype.c
  ${LOCAL_DIR}/src/type1/type1.c
  ${LOCAL_DIR}/src/cid/type1cid.c
  ${LOCAL_DIR}/src/type42/type42.c
  ${LOCAL_DIR}/src/winfonts/winfnt.c
  )

# Add the include directories of the EASTL library
target_include_directories(FreeType PUBLIC "${LOCAL_DIR}/include/")

target_link_libraries(FreeType PUBLIC pixman)
target_link_libraries(FreeType PUBLIC libpng)

target_compile_definitions(FreeType PRIVATE
  FT2_BUILD_LIBRARY
  $<$<CONFIG:DEBUG>:FT_DEBUG_LEVEL_ERROR>
  $<$<CONFIG:DEBUG>:FT_DEBUG_LEVEL_TRACE>
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if (MSVC)
target_compile_options(FreeType PRIVATE
    /MP
    /W4
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS /Zf -w44946 -w44555 -w44312 -w44296 -w44287 -w44265 -w44254 -w44242
    /wd4267 /wd4305 /wd4306 /wd4701 /wd4255 /wd4244 /wd4574 /wd4365 /wd4242 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819
    )
endif()