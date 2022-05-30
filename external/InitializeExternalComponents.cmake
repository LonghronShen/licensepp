find_package(Threads REQUIRED)

if(UNIX)
    find_package(DL REQUIRED)
endif()

include(FetchContent)

# nlohmann_json
FetchContent_Declare(json
  GIT_REPOSITORY https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent
  GIT_TAG v3.10.4)

FetchContent_GetProperties(json)
if(NOT json_POPULATED)
  FetchContent_Populate(json)
  add_subdirectory(${json_SOURCE_DIR} ${json_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()


# cryptopp
set(CryptoPP_USE_STATIC_LIBS ON)
find_package(CryptoPP)
if(NOT CRYPTOPP_FOUND)
    FetchContent_Declare(cryptopp
    GIT_REPOSITORY https://github.com/weidai11/cryptopp.git
    GIT_TAG f045993723d48c5f163e8c0eb4007c456bf7f572)

    FetchContent_GetProperties(cryptopp)
    if(NOT cryptopp_POPULATED)
        FetchContent_Populate(cryptopp)

        message(STATUS "Downloading 'CMakeLists.txt' for cryptopp...")
        file(DOWNLOAD
            "https://raw.githubusercontent.com/LonghronShen/cryptopp-cmake/master/CMakeLists.txt"
            "${cryptopp_SOURCE_DIR}/CMakeLists.txt"
            SHOW_PROGRESS
            EXPECTED_HASH MD5=280a252dee64d1d514c55c188546bbd2
            STATUS CRYPTOPP_CMAKELISTS)

        message(STATUS "Downloading 'cryptopp-config.cmake' for cryptopp...")
        file(DOWNLOAD
            "https://raw.githubusercontent.com/LonghronShen/cryptopp-cmake/master/cryptopp-config.cmake"
            "${cryptopp_SOURCE_DIR}/cryptopp-config.cmake"
            SHOW_PROGRESS
            EXPECTED_HASH MD5=20a0ac9dcfdd41c28100401dbd5fa6af
            STATUS CRYPTOPP_CRYPTOPP_CONFIG)

        if(APPLE)
            set(CRYPTOPP_NATIVE_ARCH ON CACHE BOOL "Enable native architecture" FORCE)
        endif()

        if(CMAKE_SYSTEM_PROCESSOR MATCHES "(arm64)|(aarch64)|(ARM64)|(AARCH64)")
            set(DISABLE_ASM ON CACHE BOOL "Disable ASM" FORCE)
            set(DISABLE_SSSE3 ON CACHE BOOL "Disable SSSE3" FORCE)
            set(DISABLE_SSE4 ON CACHE BOOL "Disable SSE4" FORCE)
            set(DISABLE_AESNI ON CACHE BOOL "Disable AES-NI" FORCE)
            set(DISABLE_SHA ON CACHE BOOL "Disable SHA" FORCE)
            set(DISABLE_AVX ON CACHE BOOL "Disable AVX" FORCE)
            set(DISABLE_AVX2 ON CACHE BOOL "Disable AVX2" FORCE)
            set(CRYPTOPP_NATIVE_ARCH ON CACHE BOOL "Enable native architecture" FORCE)
        endif()

        add_subdirectory(${cryptopp_SOURCE_DIR} ${cryptopp_BINARY_DIR} EXCLUDE_FROM_ALL)
    endif()
endif()


# cryptopp_pem
FetchContent_Declare(cryptopp_pem
  GIT_REPOSITORY https://github.com/LonghronShen/cryptopp-pem.git
  GIT_TAG master)

FetchContent_GetProperties(cryptopp_pem)
if(NOT cryptopp_pem_POPULATED)
  FetchContent_Populate(cryptopp_pem)
  # add_subdirectory(${cryptopp_pem_SOURCE_DIR} ${cryptopp_pem_BINARY_DIR} EXCLUDE_FROM_ALL)
  file(GLOB_RECURSE cryptopp_pem_src
    ${cryptopp_pem_SOURCE_DIR}/*.h
    ${cryptopp_pem_SOURCE_DIR}/*.hpp

    ${cryptopp_pem_SOURCE_DIR}/*.c
    ${cryptopp_pem_SOURCE_DIR}/*.cc
    ${cryptopp_pem_SOURCE_DIR}/*.cpp
  )
  add_library(cryptopp-pem STATIC ${cryptopp_pem_src})
  target_include_directories(cryptopp-pem PUBLIC ${cryptopp_pem_SOURCE_DIR})
  target_link_libraries(cryptopp-pem PUBLIC cryptopp-static)
endif()


# gtest
find_package(GTest)
if(GTest_FOUND)
    include_directories(${GTEST_INCLUDE_DIRS})
else()
    FetchContent_Declare(gtest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0)

    FetchContent_GetProperties(gtest)
    if(NOT gtest_POPULATED)
        FetchContent_Populate(gtest)
        file(COPY 
            "${CMAKE_CURRENT_LIST_DIR}/patches/gtest/internal_utils.cmake" 
        DESTINATION 
            "${gtest_SOURCE_DIR}/googletest/cmake/")
        add_subdirectory(${gtest_SOURCE_DIR} ${gtest_BINARY_DIR} EXCLUDE_FROM_ALL)
    endif()
endif()