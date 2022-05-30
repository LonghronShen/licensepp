//
//  base16.cc
//  License++
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE 
//

#include <Ripe/Ripe.h>
#include <crypto/base16.h>

using namespace licensepp;

std::string Base16::decode(const std::string& encoded)
{
    return Ripe::hexToString(encoded);
}

std::string Base16::encode(const std::string& raw)
{
    return Ripe::stringToHex(raw);
}
