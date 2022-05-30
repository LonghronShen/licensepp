project(licensepp-sample C CXX)

file(GLOB_RECURSE src
    ${CMAKE_CURRENT_LIST_DIR}/src/*.h
    ${CMAKE_CURRENT_LIST_DIR}/src/*.c
    ${CMAKE_CURRENT_LIST_DIR}/src/*.cc
    ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp
)

file(GLOB_RECURSE test_assets
    ${CMAKE_CURRENT_LIST_DIR}/assets/*
)

foreach(res IN ITEMS ${test_assets})
	message(STATUS "Copying ${res} to ${CMAKE_BINARY_DIR} ...")
	get_filename_component(res_file_name ${res} NAME)
	configure_file(${res} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${res_file_name} COPYONLY)
endforeach()

add_executable(licensepp-sample ${src})

target_link_libraries(licensepp-sample
    PUBLIC licensepp-lib
)