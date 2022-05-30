project(licensepp-lib C CXX)

file(GLOB_RECURSE src
    ${CMAKE_CURRENT_LIST_DIR}/*.h
    ${CMAKE_CURRENT_LIST_DIR}/*.hpp

    ${CMAKE_CURRENT_LIST_DIR}/*.c
	${CMAKE_CURRENT_LIST_DIR}/*.cc
	${CMAKE_CURRENT_LIST_DIR}/*.cpp
)

file(GLOB_RECURSE public_headers
    ${CMAKE_CURRENT_LIST_DIR}/include/public/*.h
    ${CMAKE_CURRENT_LIST_DIR}/include/public/*.hpp
)

configure_file(
    ${CMAKE_CURRENT_LIST_DIR}/include/private/license++/config.h.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

if(LICENSEPP_BUILD_SHARED_LIBS)
    add_library(licensepp-lib
        SHARED ${src}
    )
else()
    add_library(licensepp-lib
        STATIC ${src}
    )
endif()

add_library(licensepp::licensepp ALIAS licensepp-lib)

# set_target_properties(licensepp-lib PROPERTIES
#     VERSION "${LICENSEPP_SOVERSION}"
#     OUTPUT_NAME "licensepp"
# )

target_include_directories(licensepp-lib
    PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include/public"
    PRIVATE "${CMAKE_CURRENT_LIST_DIR}/include/private"
    PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/"
)

target_link_libraries(licensepp-lib
    PUBLIC cryptopp-static
    PUBLIC cryptopp-pem
    PUBLIC nlohmann_json::nlohmann_json
)

# ############## Install #################
# install (TARGETS licensepp-lib EXPORT licensepp-config DESTINATION lib)

# foreach(header IN ITEMS ${public_headers})
# 	install (FILES ${header} DESTINATION "include/license++")
# endforeach()

# install (EXPORT licensepp-config DESTINATION share/licensepp/cmake)

# export (TARGETS licensepp-lib FILE licensepp-config.cmake)

# ############## Cmake Package #################

# # Packaging config.
# set (CPACK_PACKAGE_NAME "licensepp")
# set (CPACK_PACKAGE_VERSION_MAJOR ${LICENSEPP_MAJOR})
# set (CPACK_PACKAGE_VERSION_MINOR ${LICENSEPP_MINOR})
# set (CPACK_PACKAGE_VERSION_PATCH ${LICENSEPP_PATCH})
# set (CPACK_SOURCE_GENERATOR TGZ)
# set (CPACK_SOURCE_IGNORE_FILES
#     "/build/"
# )

# include (CPack)