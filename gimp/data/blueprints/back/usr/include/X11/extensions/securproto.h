// GGHASH:Vl4PEbFChUcBxv1tZgJsIteMipf.qcWF.xCKNHbbInEk00000cf6
#ifndef _SECURPROTO_H
#define _SECURPROTO_H 
#include <X11/extensions/secur.h>
#define X_SecurityQueryVersion 0
#define X_SecurityGenerateAuthorization 1
#define X_SecurityRevokeAuthorization 2
#define sz_xSecurityQueryVersionReq 8
#define sz_xSecurityQueryVersionReply 32
#define sz_xSecurityGenerateAuthorizationReq 12
#define sz_xSecurityGenerateAuthorizationReply 32
#define sz_xSecurityRevokeAuthorizationReq 8
#define sz_xSecurityAuthorizationRevokedEvent 32
#endif
