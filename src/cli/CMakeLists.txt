project(licensepp-cli C CXX)

file(GLOB_RECURSE src
    ${CMAKE_CURRENT_LIST_DIR}/src/*.h
    ${CMAKE_CURRENT_LIST_DIR}/src/*.c
    ${CMAKE_CURRENT_LIST_DIR}/src/*.cc
    ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp
)

add_executable(licensepp-cli ${src})

target_link_libraries(licensepp-cli
    PUBLIC licensepp-lib
)