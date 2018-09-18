// GGHASH:VbqJwKno_g7xcnpuCUBQrJ2XoCFDNeGPQYLKyoE4zvcg0000085d
#ifndef _SECUR_H
#define _SECUR_H 
#define SECURITY_EXTENSION_NAME "SECURITY"
#define SECURITY_MAJOR_VERSION 1
#define SECURITY_MINOR_VERSION 0
#define XSecurityNumberEvents 1
#define XSecurityNumberErrors 2
#define XSecurityBadAuthorization 0
#define XSecurityBadAuthorizationProtocol 1
#define XSecurityClientTrusted 0
#define XSecurityClientUntrusted 1
#define XSecurityTimeout (1<<0)
#define XSecurityTrustLevel (1<<1)
#define XSecurityGroup (1<<2)
#define XSecurityEventMask (1<<3)
#define XSecurityAllAuthorizationAttributes (XSecurityTimeout | XSecurityTrustLevel | XSecurityGroup | XSecurityEventMask)
#define XSecurityAuthorizationRevokedMask (1<<0)
#define XSecurityAllEventMasks XSecurityAuthorizationRevokedMask
#define XSecurityAuthorizationRevoked 0
#define XSecurityAuthorizationName "XC-QUERY-SECURITY-1"
#define XSecurityAuthorizationNameLen 19
#endif
