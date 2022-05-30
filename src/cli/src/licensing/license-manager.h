//
//  license-manager.h
//  License++ CLI
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE
//

#ifndef F561AD43_4D5A_45D2_86CF_1CC63E9C5957
#define F561AD43_4D5A_45D2_86CF_1CC63E9C5957

#include "license-manager-key-register.h"
#include <license++/base-license-manager.h>
#include <license++/issuing-authority.h>
#include <license++/license.h>

using namespace licensepp;

class LicenseManager : public BaseLicenseManager<LicenseManagerKeyRegister> {
public:
  LicenseManager() : BaseLicenseManager() {}
};

#endif /* F561AD43_4D5A_45D2_86CF_1CC63E9C5957 */
