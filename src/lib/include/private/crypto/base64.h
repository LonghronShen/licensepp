//
//  base64.h
//  License++
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE 
//

#ifndef E0813224_1DC6_477A_B567_A05C817BAB84
#define E0813224_1DC6_477A_B567_A05C817BAB84

#include <string>

namespace licensepp {

///
/// \brief Base64 encoding wrappers
///
class Base64
{
public:
    static std::string decode(const std::string& encoded);
    static std::string encode(const std::string& raw);
};
}

#endif /* E0813224_1DC6_477A_B567_A05C817BAB84 */
