cmake_minimum_required(VERSION 3.1)

project(licensepp CXX)

set(CMAKE_CXX_STANDARD 17 CACHE STRING "Set to 11 or 14 to enable C++11 or C++17 builds, respectively." FORCE)
set(CMAKE_C_STANDARD 11 CACHE STRING "Set to 99 or 11 to enable C99 or C11 builds, respectively." FORCE)
set_property(GLOBAL PROPERTY CXX_STANDARD_REQUIRED ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

include_directories(${CMAKE_BINARY_DIR})

include(FixCompileFlags)

option(LICENSEPP_BUILD_ALL_TESTS "Build all tests" OFF)
option(LICENSEPP_BUILD_SHARED_LIBS "build shared libraries" OFF)
option(LICENSEPP_TRAVIS_CI_BUILD "Travis CI" OFF)

if(LICENSEPP_TRAVIS_CI_BUILD)
    add_definitions(-DLICENSEPP_ON_CI)
endif()

include(external/InitializeExternalComponents.cmake)

add_subdirectory(src)

if(LICENSEPP_BUILD_ALL_TESTS)
    add_subdirectory(test)
endif()