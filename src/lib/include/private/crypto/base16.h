//
//  base16.h
//  License++
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE 
//

#ifndef B21F0566_EB66_4844_815A_ABD2DF17D3FF
#define B21F0566_EB66_4844_815A_ABD2DF17D3FF

#include <string>

namespace licensepp {

///
/// \brief Base16 encoding wrappers
///
class Base16
{
public:
    static std::string decode(const std::string& encoded);
    static std::string encode(const std::string& raw);
};
}

#endif /* B21F0566_EB66_4844_815A_ABD2DF17D3FF */
