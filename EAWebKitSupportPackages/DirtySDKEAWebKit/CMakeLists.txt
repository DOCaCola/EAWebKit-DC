cmake_minimum_required(VERSION 3.20)

project(DirtySDK)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LOCAL_DIR "local")
if(!LOCAL_DIR)
  message(FATAL_ERROR "No matching subdirectory found")
endif()

# Add the source files
file(GLOB DIRTYSDK_SOURCES
  "${LOCAL_DIR}/platform/*.c"
  "${LOCAL_DIR}/core/source/crypt/*.c"
  "${LOCAL_DIR}/core/source/dirtysock/*.c"
  "${LOCAL_DIR}/core/source/misc/*.c"
  "${LOCAL_DIR}/core/source/voip/*.c"
  "${LOCAL_DIR}/core/source/proto/*.c"
  "${LOCAL_DIR}/core/source/util/*.c"
  )

file(GLOB DIRTYSDK_SOURCES_WIN
  "${LOCAL_DIR}/core/source/dirtysock/pc/*.c"
  )

add_library(DirtySDK
  ${DIRTYSDK_SOURCES}
  $<$<PLATFORM_ID:Windows>:${DIRTYSDK_SOURCES_WIN}>
  )

if(WIN32)
  target_link_libraries(DirtySDK ws2_32 Iphlpapi)
endif()

target_include_directories(DirtySDK PUBLIC
  "${LOCAL_DIR}/platform"
  "${LOCAL_DIR}/core/include"
  $<$<PLATFORM_ID:Windows>:${LOCAL_DIR}/core/include/pc64>
  )


target_include_directories(DirtySDK PRIVATE
  "${LOCAL_DIR}/core/source/voip"
  )

target_compile_definitions(DirtySDK PRIVATE
  DIRTYCODE_PLATFORM=3
  DS_PLATFORM
  WINSOCK_API_LINKAGE=
  $<$<CONFIG:RELEASE>:NDEBUG>
  $<$<CONFIG:DEBUG>:EA_DEBUG>
  )


if (MSVC)
  target_compile_options(DirtySDK PRIVATE
      /MP
      /W4
      -bigobj /FS -w44946 -w44555 -w44296 -w44287 -w44265 -w44254
      /wd4512 /wd4706 /wd4702 /wd4701 /wd4619 /wd4530 /wd4511 /wd4310 /wd4295 /wd4255 /wd4245 /wd4244 /wd4217 /wd4191 /wd4189 /wd4152 /wd4127 /wd4062 /wd4061 /wd4057 /wd4055 /wd4574 /wd4365 /wd4242 /wd4265 /wd4296 /wd4100 /wd4324 /wd4350 /wd4464 /wd4482 /wd4577 /wd4711 /wd4746 /wd4986 /wd4987 /wd4819 
      )
endif()