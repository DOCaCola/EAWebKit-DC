# Using `GenerateProductVersion.cmake`

## Basic usage

```cmake
include(GenerateProductVersion)

GenerateProductVersion(
    ProductVersionFiles
    NAME MyProduct
    COMPANY_NAME MyCompany
)
```

Two files will be generated in CMAKE_CURRENT_BINARY_DIRECTORY.
ProductVersionFiles output variable will be filled with path names to generated files.

You can use generated resource for your executable targets:

```cmake
add_executable(target-name ${target-files} ${ProductVersionFiles})
```

You can specify the resource strings in arguments:

- NAME               - Name of executable (no defaults, ex: Microsoft Word)
- BUNDLE             - Bundle (${NAME} is default, ex: Microsoft Office)
- ICON               - Path to application icon (${CMAKE_SOURCE_DIR}/product.ico is default)
- VERSION            - The version of the product; Defaults to `${PROJECT_VERSION}`
- COMPANY_NAME       - Your company name (no defaults)
- COMPANY_COPYRIGHT  - ${COMPANY_NAME} (C) Copyright ${CURRENT_YEAR} is default
- COMMENTS           - ${NAME} v${VERSION_MAJOR}.${VERSION_MINOR} is default
- ORIGINAL_FILENAME  - ${NAME} is default
- INTERNAL_NAME      - ${NAME} is default
- FILE_DESCRIPTION   - ${NAME} is default

## Advanced usage

### Use the same version ProductVersionFiles for multiple targets

If you want to have the same product information for multiple targets (e.g. because you have a project with multiple libraries that all belong together and have the same version) you can do this by using an object library in combination with an interface target:

```cmake
include(GenerateProductVersion)

GenerateProductVersion(
    ProductVersionFiles
    NAME MyProduct
    COMPANY_NAME MyCompany
)

add_library(project_version_obj OBJECT ${ProductVersionFiles})
target_sources(project_version INTERFACE $<TARGET_OBJECTS:project_version_obj>)

# optional: set some more target properties on project_version for cross-platform version information
# set_target_properties(project_version
#     PROPERTIES
#     VERSION ${VERSION_SHORT}-${VERSION_COMMITS}
#     SOVERSION ${VERSION_MAJOR}
#     COMPATIBLE_INTERFACE_STRING "${PROJECT_NAME}_MAJOR_VERSION"
#     "INTERFACE_${PROJECT_NAME}_MAJOR_VERSION" ${VERSION_MAJOR}
# )
```

Then you just need to link the `project_version` target to your desired libraries, e.g.:

```cmake
add_library(my_lib1 ...)
add_library(my_lib2 ...)
add_executable(my_exec ...)

target_link_libraries(my_lib1 PRIVATE project_version)
target_link_libraries(my_lib2 PRIVATE project_version)
target_link_libraries(my_exec PRIVATE project_version)
target_link_libraries(my_exec PUBLIC my_lib1 my_lib2)
```

That way your libraries' DLL files as well as the executable have the same version information.
