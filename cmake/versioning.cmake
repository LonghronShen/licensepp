set (LICENSEPP_MAJOR "1")
set (LICENSEPP_MINOR "0")
set (LICENSEPP_PATCH "6")

set (LICENSEPP_SOVERSION "${LICENSEPP_MAJOR}.${LICENSEPP_MINOR}.${LICENSEPP_PATCH}")
set (LICENSEPP_NAME "licensepp")

add_definitions(-DLICENSEPP_SOVERSION="${LICENSEPP_SOVERSION}")
add_definitions(-DRIPE_VERSION="4.0.1-custom-static")