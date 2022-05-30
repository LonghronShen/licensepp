//
//  license-exception.h
//  License++
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE 
//

#ifndef C94FC6BB_4081_42C8_8017_34C8C5051D2D
#define C94FC6BB_4081_42C8_8017_34C8C5051D2D

#include <stdexcept>

namespace licensepp {

class LicenseExceptionBase {};
///
/// \brief Exception thrown by all the license++ functions
///
class LicenseException : public LicenseExceptionBase, public std::runtime_error
{
public:
    ///
    /// \brief Main constructor
    ///
    LicenseException(const std::string& msg) : std::runtime_error(msg) {}

    virtual ~LicenseException() = default;
};

}
#endif /* C94FC6BB_4081_42C8_8017_34C8C5051D2D */
