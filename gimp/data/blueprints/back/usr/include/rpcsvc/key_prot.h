// GGHASH:Vy.G.32Rl0Q24BWU0kpl2GLVH9vUeiRjtUgYPIrqnQ2g00001a65
#ifndef _KEY_PROT_H_RPCGEN
#define _KEY_PROT_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#if 0
#pragma ident "@(#)key_prot.x	1.7	94/04/29 SMI"
#endif
#define PROOT 3
#define HEXMODULUS "d4a0ba0250b6fd2ec626e7efd637df76c716e22d0944b88b"
#define HEXKEYBYTES 48
#define KEYSIZE 192
#define KEYBYTES 24
#define KEYCHECKSUMSIZE 16
#define MAXGIDS 16
#ifndef opaque
#define opaque char
#endif
#define KEY_PROG 100029
#define KEY_VERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define KEY_SET 1
#define KEY_ENCRYPT 2
#define KEY_DECRYPT 3
#define KEY_GEN 4
#define KEY_GETCRED 5
#else
#define KEY_SET 1
#define KEY_ENCRYPT 2
#define KEY_DECRYPT 3
#define KEY_GEN 4
#define KEY_GETCRED 5
#endif
#define KEY_VERS2 2
#if defined(__STDC__) || defined(__cplusplus)
#define KEY_ENCRYPT_PK 6
#define KEY_DECRYPT_PK 7
#define KEY_NET_PUT 8
#define KEY_NET_GET 9
#define KEY_GET_CONV 10
#else
#define KEY_ENCRYPT_PK 6
#define KEY_DECRYPT_PK 7
#define KEY_NET_PUT 8
#define KEY_NET_GET 9
#define KEY_GET_CONV 10
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
