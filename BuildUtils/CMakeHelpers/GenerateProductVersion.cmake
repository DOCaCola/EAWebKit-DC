# vim: set shiftwidth=4:tabstop=4:expandtab

cmake_minimum_required(VERSION 3.14)

set(GENERATE_PRODUCT_VERSION_ROOT_PATH 
    "${CMAKE_CURRENT_LIST_DIR}"
    CACHE INTERNAL "The path to the GenerateProjectVersion directory"
)

# GenerateProductVersion() function
#
# This function uses VersionInfo.h.in template file and VersionResource.rc.h file
# to generate WIN32 resource with version information and general resource strings.
#
# Usage:
#   GenerateProductVersion(
#     SomeOutputResourceVariable
#     NAME MyGreatProject
#     ICON ${PATH_TO_APP_ICON}
#     VERSION ${PROJECT_VERSION}
#   )
#
# You can use generated resource for your executable targets:
#   add_executable(target-name ${target-files} ${SomeOutputResourceVariable})
#
# You can specify resource strings in arguments:
#   NAME               - Name of executable (no defaults, ex: Microsoft Word)
#   BUNDLE             - Bundle (${NAME} is default, ex: Microsoft Office)
#   USE_ICON           - Enable/disable the icon, will be set to true if ICON is supplied
#   ICON               - Path to application icon (${CMAKE_SOURCE_DIR}/product.ico by default)
#   VERSION            - The version of the product; Defaults to `${PROJECT_VERSION}`
#   COMPANY_NAME       - Your company name (no defaults)
#   COMPANY_COPYRIGHT  - ${COMPANY_NAME} (C) Copyright ${CURRENT_YEAR} is default
#   COMMENTS           - ${NAME} v${VERSION_MAJOR}.${VERSION_MINOR} is default
#   ORIGINAL_FILENAME  - ${NAME} is default
#   INTERNAL_NAME      - ${NAME} is default
#   FILE_DESCRIPTION   - ${NAME} is default
#   SUFFIX_FOR_IN_FILES - Extra text to add to VersionInfo_xxx.h to avoid name collisions
function(GenerateProductVersion VersionResourceFiles)
    # -- Only generate the version files on Windows
    if(NOT WIN32)
        return()
    endif()
    
    cmake_parse_arguments(
        PRODUCT 
        "USE_ICON"
        "NAME;BUNDLE;ICON;VERSION;COMPANY_NAME;COMPANY_COPYRIGHT;COMMENTS;ORIGINAL_FILENAME;INTERNAL_NAME;FILE_DESCRIPTION;SUFFIX_FOR_IN_FILES;"
        ""
        ${ARGN}
    )

    # -- Create a default for the name of the product bundle
    if(NOT DEFINED PRODUCT_BUNDLE)
        set(PRODUCT_BUNDLE "${PRODUCT_NAME}")
    endif()

    if (DEFINED PRODUCT_ICON)
        set(PRODUCT_USE_ICON TRUE)
    else()
        if(PRODUCT_USE_ICON)
            # -- Create a default for the icon resource
            set(PRODUCT_ICON "${CMAKE_CURRENT_SOURCE_DIR}/product.ico")
        else()
            set (PRODUCT_USE_ICON FALSE)
        endif()
    endif ()

    # -- Copy the icon resource to the binary directory
    file(COPY ${PRODUCT_ICON} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

    # -- Create defaults for versions
    if(NOT DEFINED PRODUCT_VERSION)
        set(PRODUCT_VERSION ${PROJECT_VERSION})
    endif()

    string(REPLACE "." ";" VERSION_LIST "${PRODUCT_VERSION}")

    list(POP_FRONT VERSION_LIST 
        PRODUCT_VERSION_MAJOR
        PRODUCT_VERSION_MINOR
        PRODUCT_VERSION_PATCH
        PRODUCT_VERSION_REVISION
    )

    if(NOT DEFINED PRODUCT_VERSION_MAJOR)
        set(PRODUCT_VERSION_MAJOR "0")
    endif()
    if(NOT DEFINED PRODUCT_VERSION_MINOR)
        set(PRODUCT_VERSION_MINOR "0")
    endif()
    if(NOT DEFINED PRODUCT_VERSION_PATCH)
        set(PRODUCT_VERSION_PATCH "0")
    endif()
    if(NOT DEFINED PRODUCT_VERSION_REVISION)
        set(PRODUCT_VERSION_REVISION "0")
    endif()

    # -- Create a default for the company copyright
    if(NOT DEFINED PRODUCT_COMPANY_COPYRIGHT)
        string(TIMESTAMP PRODUCT_CURRENT_YEAR "%Y")
        set(PRODUCT_COMPANY_COPYRIGHT "${PRODUCT_COMPANY_NAME} (C) Copyright ${PRODUCT_CURRENT_YEAR}")
    endif()

    # -- Create a default for the product comments
    if(NOT DEFINED PRODUCT_COMMENTS)
        set(PRODUCT_COMMENTS "${PRODUCT_NAME} v${PRODUCT_VERSION}")
    endif()

    # -- Create a default for the original product filename
    if(NOT DEFINED PRODUCT_ORIGINAL_FILENAME)
        set(PRODUCT_ORIGINAL_FILENAME "${PRODUCT_NAME}")
    endif()
    
    # -- Create a default for the internal product name
    if(NOT DEFINED PRODUCT_INTERNAL_NAME)
        set(PRODUCT_INTERNAL_NAME "${PRODUCT_NAME}")
    endif()
    
    # -- Create a default for the product file description
    if(NOT DEFINED PRODUCT_FILE_DESCRIPTION)
        set(PRODUCT_FILE_DESCRIPTION "${PRODUCT_NAME}")
    endif()

    # Add a _ to the suffix, if we have one
    if (PRODUCT_SUFFIX_FOR_IN_FILES)
        set(PRODUCT_SUFFIX_FOR_IN_FILES "_${PRODUCT_SUFFIX_FOR_IN_FILES}")
    endif()

    # -- Set the version resource file locations
    set(VersionInfoFile     ${CMAKE_CURRENT_BINARY_DIR}/VersionInfo${PRODUCT_SUFFIX_FOR_IN_FILES}.h)
    set(VersionResourceFile ${CMAKE_CURRENT_BINARY_DIR}/VersionResource${PRODUCT_SUFFIX_FOR_IN_FILES}.rc)
    set(PRODUCT_VERSION_HEADER "VersionInfo${PRODUCT_SUFFIX_FOR_IN_FILES}.h")

    # -- Configure the version header file
    configure_file(
        ${GENERATE_PRODUCT_VERSION_ROOT_PATH}/VersionInfo.h.in
        ${VersionInfoFile}
        @ONLY
    )

    # -- Configure the version resource file
    configure_file(
        ${GENERATE_PRODUCT_VERSION_ROOT_PATH}/VersionResource.rc.in
        ${VersionResourceFile}
        @ONLY
    )

    # -- Create the list of version resource files
    list(APPEND ${VersionResourceFiles} ${VersionInfoFile} ${VersionResourceFile})

    # -- Export the resource files to the out parameter of the function
    set(${VersionResourceFiles} ${${VersionResourceFiles}} PARENT_SCOPE)
endfunction()
