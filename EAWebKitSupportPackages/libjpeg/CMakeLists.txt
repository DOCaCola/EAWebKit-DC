cmake_minimum_required(VERSION 3.20)

project(libjpeg)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local-*.*.*")
if(!LOCAL_DIR)
  # Print an error message if no subdirectory is found
  message(FATAL_ERROR "No subdirectory matching local-*.*.* is found")
endif()

add_library(libjpeg 
        "${LOCAL_DIR}/source/jcapimin.c"
        "${LOCAL_DIR}/source/jcapistd.c"
        "${LOCAL_DIR}/source/jccoefct.c"
        "${LOCAL_DIR}/source/jccolor.c"
        "${LOCAL_DIR}/source/jcdctmgr.c"
        "${LOCAL_DIR}/source/jchuff.c"
        "${LOCAL_DIR}/source/jcinit.c"
        "${LOCAL_DIR}/source/jcmainct.c"
        "${LOCAL_DIR}/source/jcmarker.c"
        "${LOCAL_DIR}/source/jcmaster.c"
        "${LOCAL_DIR}/source/jcomapi.c"
        "${LOCAL_DIR}/source/jcparam.c"
        "${LOCAL_DIR}/source/jcphuff.c"
        "${LOCAL_DIR}/source/jcprepct.c"
        "${LOCAL_DIR}/source/jcsample.c"
        "${LOCAL_DIR}/source/jctrans.c"
        "${LOCAL_DIR}/source/jdapimin.c"
        "${LOCAL_DIR}/source/jdapistd.c"
        "${LOCAL_DIR}/source/jdatadst.c"
        "${LOCAL_DIR}/source/jdatasrc.c"
        "${LOCAL_DIR}/source/jdcoefct.c"
        "${LOCAL_DIR}/source/jdcolor.c"
        "${LOCAL_DIR}/source/jddctmgr.c"
        "${LOCAL_DIR}/source/jdhuff.c"
        "${LOCAL_DIR}/source/jdinput.c"
        "${LOCAL_DIR}/source/jdmainct.c"
        "${LOCAL_DIR}/source/jdmarker.c"
        "${LOCAL_DIR}/source/jdmaster.c"
        "${LOCAL_DIR}/source/jdmerge.c"
        "${LOCAL_DIR}/source/jdphuff.c"
        "${LOCAL_DIR}/source/jdpostct.c"
        "${LOCAL_DIR}/source/jdsample.c"
        "${LOCAL_DIR}/source/jdtrans.c"
        "${LOCAL_DIR}/source/jerror.c"
        "${LOCAL_DIR}/source/jfdctflt.c"
        "${LOCAL_DIR}/source/jfdctfst.c"
        "${LOCAL_DIR}/source/jfdctint.c"
        "${LOCAL_DIR}/source/jidctflt.c"
        "${LOCAL_DIR}/source/jidctfst.c"
        "${LOCAL_DIR}/source/jidctint.c"
        "${LOCAL_DIR}/source/jidctred.c"
        "${LOCAL_DIR}/source/jmemmgr.c"
#        <!-- includes name="${package.dir}/source/jmemansi.c" We don't use this. Instead we use jmemnobs.c or jsupport_ea.c -->
#       "${LOCAL_DIR}/source/jmemnobs.c"    # if="${Dll} and (${LIBJPEG_EA_SUPPORT_ENABLED} == 0)" />
        "${LOCAL_DIR}/source/jsupport_ea.c" # if="not (${LIBJPEG_EA_SUPPORT_ENABLED} == 0)"/>
        "${LOCAL_DIR}/source/jquant1.c"
        "${LOCAL_DIR}/source/jquant2.c"
        "${LOCAL_DIR}/source/jutils.c"
  )

#target_include_directories(libjpeg PRIVATE "${LOCAL_DIR}/include")
target_include_directories(libjpeg PUBLIC "${LOCAL_DIR}/include")

#target_link_libraries(libjpeg PUBLIC zlib)

target_compile_definitions(libjpeg PRIVATE
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  $<$<CONFIG:RelWithDebInfo>:EA_DEBUG>
  LIBJPEG_EA_SUPPORT_ENABLED=1
  )

if (MSVC)
target_compile_options(libjpeg PRIVATE
    /MP
    /W0
    $<$<CONFIG:RELEASE>:-Zo -d2SSAOptimizer->
    -bigobj /FS /Zf
    )
endif()