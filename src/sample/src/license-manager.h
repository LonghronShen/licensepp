//
//  license-manager.h
//  License++
//
//  Copyright © 2018-present Amrayn Web Services
//  https://amrayn.com
//
//  See https://github.com/amrayn/licensepp/blob/master/LICENSE
//

#ifndef F45E762B_2D97_4D9D_8684_B2126E8C944D
#define F45E762B_2D97_4D9D_8684_B2126E8C944D

#include <license++/base-license-manager.h>
#include <license++/issuing-authority.h>

using namespace licensepp;

class LicenseKeysRegister {
public:
  static const unsigned char LICENSE_MANAGER_SIGNATURE_KEY[];

  static const std::vector<IssuingAuthority> LICENSE_ISSUING_AUTHORITIES;
};

const unsigned char LicenseKeysRegister::LICENSE_MANAGER_SIGNATURE_KEY[] = {
    0x5B, 0x6A, 0xF5, 0x93, 0xED, 0xAB, 0xB3, 0x10,
    0xF5, 0xBE, 0x00, 0xE6, 0x4F, 0x1B, 0x70, 0xC8};

const std::vector<IssuingAuthority>
    LicenseKeysRegister::LICENSE_ISSUING_AUTHORITIES = {
        IssuingAuthority(
            "sample-license-authority", "Sample License Authority",
            "LS0tLS1CRUdJTiBSU0EgUFJJVkFURSBLRVktLS0tLQpNSUlFb1FJQkFBS0NBUUVBdH"
            "hnSlBDVklIUGp4VmpnMDVlMnVaNURqNDNIdDF0WFlUK3VkVVRTL3RrSlgyQzltCnFo"
            "OGpLUHVPZkF1enFiUCtlenJBdENIQ3ptRE5sZkUwamVOU1VUZlFWbFhxNzd3UGh6aj"
            "ZWNm1lWTNlcmYxK0oKVGNHUTk1Q0U3QWxRZmlvTm1aMU1OOTBSOXo2QllJMFJpVHh1"
            "QVFXckZqdm1rMUsrZ1RRN2dPbVV1WEx1MzJ2RwppNVE0cElKVHBJMExYQkp5QnJVNE"
            "s1ZTdWTVhaMHQrb1dRc3djcm05bkJYWVpleVRJcUZ2VmVkbEpxZTArTm9GCk8zeE91"
            "VHYxSiticWtWeFFuQlczQ2dyR2tjT0ZWRWtEQ0ROOEZoZ0N5SEpJRDliZkdsNlBJUE"
            "p0TE94UlF2M20KSituaktNcnF5a3BPaWp6WXNyUjRSWXlEV0w2dm1hMlpSZGlZS1FJ"
            "QkVRS0NBUUFKYklnQk5wL3licklSblQ3MQpQdzZmcnZ5cnRPdzk0WmhQYUZ6TmwydS"
            "8rQjdmMVVObTM3aGwzOFZ6ajZrL1VxMFpLbzJ1NnlaREY4NVlxS1o0ClBvWWVpSVVU"
            "Z0toVDNtS3VmVWtlM1crdWlBcTFuV05OYWZhRk5uOVA2ZVFrbklSMjl5ZXdEVUxPbT"
            "dBU0pXRG4KRUVsdE9xVUtqbUNTNEg2QzRyQTlPVEx5OU9NcVpUbU1BZEFTUFZsRGNt"
            "NWVkdWVCSGtDeXdrV1lwb2M5N1o2bQpwZG1hOEFOdkcyMUFJOGFZTThTRzgrTmVPZE"
            "1pK2tVdmJYT0FlcHUrWHpHRlZxeWRxL0VWdDl2N2xOS0NEY3N3ClJUVC9aSFlDM2xE"
            "NHd4ejExOXV1eW9zcnhZTUs0QUhTQ1FaM2Zpb3dRY2dMeU44a1hVT1JBa0NrOVBSVE"
            "dtUS8KbTlRQkFvR0JBT0drbEZub0hPSlVpeXJ6ZzM4dTY0OW5oUVl4bHpkaTd1bTNI"
            "VHhYWU9UbnFYMnkwbmRzSEc1OQpsdS9ySDl5c3Mzck93NFFadDV5alNoclhRUUFKM0"
            "dPMERuVUk5Q2F0dE1reGFCYmRYQjVvNGZEL2VzbXowdGJlCk4zaWdHZGVCZ1gvUEF3"
            "b3RCVnFXVGNzbSs5QWR4OHpoV0wvMXJocVU4emxLa2dCazBOQlpBb0dCQU0rNkJETW"
            "4KNW1jMnZQUzNOYjRtYWVNYnY5dEVacW1Bb1Q3V1RCaUFnY2ZJMlNIRHdNMUFQYVNG"
            "cndManN0bFRSNkhMcW1XSQpVYVRvRVhZbkkwejdOUnhlYUdQSTJWdW5uc0pFSGhMS0"
            "tRN2Rsa0dSUE1ib292b21EbXBoZVhOOWtnUU9hRzkzCjdBcnVvTWRuZFFhc0VkTlgv"
            "cGVYc3FWamZYMjNZLzB4eG94UkFvR0JBS3lNNmVwbU5EU2JBUUs2TjJGQi8yMnAKZz"
            "llUFZZUzFFUTBUanRQS1dTZUQraFRVQ2x0U3JGUitLQ0RnK2o5VzQ1b2xwSkl4eUtU"
            "MVZzazdNYlM4UHg4UgpPRHRoTXl5aTg2anBpOVUvM1FneUZqRERYZVdKZ3h6SURFMH"
            "ZJdEg1bjBPZVRaNWVxYjIrTzMwNzdiMUQ4eVF6CjJuU3MwRzZ1STJnTDJROWNKelhw"
            "QW9HQVBSaVgwcytBQUQxR29sUUF2M1MxdTBSbG10Zmg5WjVOaXZPOEJ6VGEKNEdnLz"
            "NNRWFscmlLbWN6M1BSWExNTnhDUHFWUU8vcnExaVlqUU41VnJUclRZckphOEN3RHNZ"
            "dW5LaFFJMkZtVAptdlhnNWh1b2RyemtvKzBUVEhjRm1uQTZBVEZxQXFyTTlDZ1JLNW"
            "JtTHlPTXhiQjREbmZwUDdQWm5YSXNkNlU2ClpZRUNnWUJzNWlPQlBWaW4waThVWFhH"
            "U09xSjIxOHpmUTZUVmdTYk1TaDErZlFyRkY4TlZRR3g1bkxrcUhXZGkKQXRORDhOYW"
            "Z2cFdyT2NQNlpNWksxa29JUXJpa1RWNmd4UStJQXVZSXd6R0tTRVNFR3RyM0JMRVdW"
            "RnR2OGpHNgp1d2RJejFTdDFpamRhd3J1VldNNFI1eXJaRVJsb1EyWFFXcGZUbVNibU"
            "Q4Y1RUNjNrZz09Ci0tLS0tRU5EIFJTQSBQUklWQVRFIEtFWS0tLS0tCg==:"
            "LS0tLS1CRUdJTiBQVUJMSUMgS0VZLS0tLS0KTUlJQklEQU5CZ2txaGtpRzl3MEJBUU"
            "VGQUFPQ0FRMEFNSUlCQ0FLQ0FRRUF0eGdKUENWSUhQanhWamcwNWUydQpaNURqNDNI"
            "dDF0WFlUK3VkVVRTL3RrSlgyQzltcWg4aktQdU9mQXV6cWJQK2V6ckF0Q0hDem1ETm"
            "xmRTBqZU5TClVUZlFWbFhxNzd3UGh6ajZWNm1lWTNlcmYxK0pUY0dROTVDRTdBbFFm"
            "aW9ObVoxTU45MFI5ejZCWUkwUmlUeHUKQVFXckZqdm1rMUsrZ1RRN2dPbVV1WEx1Mz"
            "J2R2k1UTRwSUpUcEkwTFhCSnlCclU0SzVlN1ZNWFowdCtvV1Fzdwpjcm05bkJYWVpl"
            "eVRJcUZ2VmVkbEpxZTArTm9GTzN4T3VUdjFKK2Jxa1Z4UW5CVzNDZ3JHa2NPRlZFa0"
            "RDRE44CkZoZ0N5SEpJRDliZkdsNlBJUEp0TE94UlF2M21KK25qS01ycXlrcE9panpZ"
            "c3JSNFJZeURXTDZ2bWEyWlJkaVkKS1FJQkVRPT0KLS0tLS1FTkQgUFVCTElDIEtFWS"
            "0tLS0tCg==",
            87600U, true), // 10 years max
};

class LicenseManager : public BaseLicenseManager<LicenseKeysRegister> {
public:
  LicenseManager() : BaseLicenseManager() {}
};

#endif /* F45E762B_2D97_4D9D_8684_B2126E8C944D */
