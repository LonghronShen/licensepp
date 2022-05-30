//
//  license-manager.h
//  License++ CLI
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE
//

#ifndef EC6F5676_01E8_40CC_BB03_E9A624D6CF68
#define EC6F5676_01E8_40CC_BB03_E9A624D6CF68

#include <string>
#include <vector>

#include <license++/issuing-authority.h>

class LicenseManagerKeyRegister {
public:
  static const unsigned char LICENSE_MANAGER_SIGNATURE_KEY[];

  static const std::vector<licensepp::IssuingAuthority>
      LICENSE_ISSUING_AUTHORITIES;
};

#endif /* EC6F5676_01E8_40CC_BB03_E9A624D6CF68 */
