cmake_minimum_required(VERSION 3.20)

project(libxml2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()

add_library(libxml2 
        "${LOCAL_DIR}/source/c14n.c"
        "${LOCAL_DIR}/source/catalog.c"
        "${LOCAL_DIR}/source/chvalid.c"
        "${LOCAL_DIR}/source/debugXML.c"
        "${LOCAL_DIR}/source/dict.c"
        "${LOCAL_DIR}/source/DOCBparser.c"
        "${LOCAL_DIR}/source/encoding.c"
        "${LOCAL_DIR}/source/entities.c"
        "${LOCAL_DIR}/source/error.c"
        "${LOCAL_DIR}/source/globals.c"
        "${LOCAL_DIR}/source/hash.c"
        "${LOCAL_DIR}/source/HTMLparser.c"
        "${LOCAL_DIR}/source/HTMLtree.c"
        "${LOCAL_DIR}/source/legacy.c"
        "${LOCAL_DIR}/source/list.c"
        "${LOCAL_DIR}/source/parser.c"
        "${LOCAL_DIR}/source/parserInternals.c"
        "${LOCAL_DIR}/source/pattern.c"
        "${LOCAL_DIR}/source/relaxng.c"
        "${LOCAL_DIR}/source/SAX.c"
        "${LOCAL_DIR}/source/SAX2.c"
        "${LOCAL_DIR}/source/threads.c"
        "${LOCAL_DIR}/source/tree.c"
        "${LOCAL_DIR}/source/trio.c"
        "${LOCAL_DIR}/source/trionan.c"
        "${LOCAL_DIR}/source/triostr.c"
        "${LOCAL_DIR}/source/uri.c"
        "${LOCAL_DIR}/source/valid.c"
        "${LOCAL_DIR}/source/xinclude.c"
        "${LOCAL_DIR}/source/xlink.c"
        "${LOCAL_DIR}/source/xmlIO.c"
        "${LOCAL_DIR}/source/xmlmemory.c"
        "${LOCAL_DIR}/source/xmlmodule.c"
        "${LOCAL_DIR}/source/xmlreader.c"
        "${LOCAL_DIR}/source/xmlregexp.c"
        "${LOCAL_DIR}/source/xmlsave.c"
        "${LOCAL_DIR}/source/xmlschemas.c"
        "${LOCAL_DIR}/source/xmlschemastypes.c"
        "${LOCAL_DIR}/source/xmlstring.c"
        "${LOCAL_DIR}/source/xmlunicode.c"
        "${LOCAL_DIR}/source/xpath.c"
        "${LOCAL_DIR}/source/xpointer.c"
  )

target_include_directories(libxml2 PUBLIC "${LOCAL_DIR}/include")

target_link_libraries(libxml2 EABase)

target_compile_definitions(libxml2 PUBLIC
  HAVE_CONFIG_H
  LIBXML_STATIC
  NOLIBTOOL
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )

if (MSVC)
target_compile_options(libxml2 PRIVATE
    /MP
    /W4
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS /Zf -w44254 -w44265 -w44287 -w44555 -w44946
    /wd4047 /wd4013 /wd4996 /wd4706 /wd4702 /wd4701 /wd4700 /wd4311 /wd4306 /wd4305 /wd4295 /wd4267 /wd4255 /wd4245 /wd4244 /wd4189 /wd4152 /wd4132 /wd4131 /wd4115 /wd4057 /wd4005 /wd4312 /wd4296 /wd4242 /wd4100 /wd4127 /wd4251 /wd4275 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819    )
endif()