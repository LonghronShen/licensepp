project(licensepp-unit-tests C CXX)

include(GoogleTest)

enable_testing()

file(GLOB_RECURSE test_src
    ${CMAKE_CURRENT_LIST_DIR}/src/*.h
    ${CMAKE_CURRENT_LIST_DIR}/src/*.c
    ${CMAKE_CURRENT_LIST_DIR}/src/*.cc
    ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp
)

add_executable(licensepp-unit-tests ${test_src})

target_link_libraries(licensepp-unit-tests
    PUBLIC gtest_main
    PUBLIC licensepp-lib)

gtest_discover_tests(licensepp-unit-tests)
