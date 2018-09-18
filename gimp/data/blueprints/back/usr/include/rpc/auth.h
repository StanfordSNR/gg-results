// GGHASH:VvpJZsLewUTCk1lSHVzgs2RJm2SGjQG0w4Q2AKoVITzM000019ea
#ifndef _RPC_AUTH_H
#define _RPC_AUTH_H 1
#include <features.h>
#include <rpc/xdr.h>
#define MAX_AUTH_BYTES 400
#define MAXNETNAMELEN 255
#define AUTH_NEXTVERF(auth) ((*((auth)->ah_ops->ah_nextverf))(auth))
#define auth_nextverf(auth) ((*((auth)->ah_ops->ah_nextverf))(auth))
#define AUTH_MARSHALL(auth,xdrs) ((*((auth)->ah_ops->ah_marshal))(auth, xdrs))
#define auth_marshall(auth,xdrs) ((*((auth)->ah_ops->ah_marshal))(auth, xdrs))
#define AUTH_VALIDATE(auth,verfp) ((*((auth)->ah_ops->ah_validate))((auth), verfp))
#define auth_validate(auth,verfp) ((*((auth)->ah_ops->ah_validate))((auth), verfp))
#define AUTH_REFRESH(auth) ((*((auth)->ah_ops->ah_refresh))(auth))
#define auth_refresh(auth) ((*((auth)->ah_ops->ah_refresh))(auth))
#define AUTH_DESTROY(auth) ((*((auth)->ah_ops->ah_destroy))(auth))
#define auth_destroy(auth) ((*((auth)->ah_ops->ah_destroy))(auth))
#define AUTH_NONE 0
#define AUTH_NULL 0
#define AUTH_SYS 1
#define AUTH_UNIX AUTH_SYS
#define AUTH_SHORT 2
#define AUTH_DES 3
#define AUTH_DH AUTH_DES
#define AUTH_KERB 4
#endif
