cmake_minimum_required (VERSION 2.8)
project (hello)

set (hello_VERSION_MAJOR 1)
set (hello_VERSION_MINOR 0)

if (APPLE)
	message(STATUS "mac os")
endif()

#version number
set(hello_VERSION_MAJOR 1)
set(hello_VERSION_MINOR 0)
set(WORD 0 1 2 3)

message(STATUS "WORD: ${WORD}")

message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")

#indicate the entry point for the executable
add_executable(hello main.c)
set_target_properties(hello PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
)

install(TARGETS hello DESTINATION bin)

# build a CPack driven installer package
include (InstallRequiredSystemLibraries)
# set (CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${hello_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${hello_VERSION_MINOR}")
set (CPACK_PACKAGE_CONTACT       "tyrion.huang@qq.com")
include (CPack)

