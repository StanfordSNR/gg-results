// GGHASH:VMfa46nJrcFHC3yV3ZVWb92WIzoE5Uuarq0nfQzpm32g0000249e
#ifndef _NLM_PROT_H_RPCGEN
#define _NLM_PROT_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#define LM_MAXSTRLEN 1024
#define MAXNAMELEN LM_MAXSTRLEN+1
#define NLM_PROG 100021
#define NLM_VERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define NLM_TEST 1
#define NLM_LOCK 2
#define NLM_CANCEL 3
#define NLM_UNLOCK 4
#define NLM_GRANTED 5
#define NLM_TEST_MSG 6
#define NLM_LOCK_MSG 7
#define NLM_CANCEL_MSG 8
#define NLM_UNLOCK_MSG 9
#define NLM_GRANTED_MSG 10
#define NLM_TEST_RES 11
#define NLM_LOCK_RES 12
#define NLM_CANCEL_RES 13
#define NLM_UNLOCK_RES 14
#define NLM_GRANTED_RES 15
#else
#define NLM_TEST 1
#define NLM_LOCK 2
#define NLM_CANCEL 3
#define NLM_UNLOCK 4
#define NLM_GRANTED 5
#define NLM_TEST_MSG 6
#define NLM_LOCK_MSG 7
#define NLM_CANCEL_MSG 8
#define NLM_UNLOCK_MSG 9
#define NLM_GRANTED_MSG 10
#define NLM_TEST_RES 11
#define NLM_LOCK_RES 12
#define NLM_CANCEL_RES 13
#define NLM_UNLOCK_RES 14
#define NLM_GRANTED_RES 15
#endif
#define NLM_VERSX 3
#if defined(__STDC__) || defined(__cplusplus)
#define NLM_SHARE 20
#define NLM_UNSHARE 21
#define NLM_NM_LOCK 22
#define NLM_FREE_ALL 23
#else
#define NLM_SHARE 20
#define NLM_UNSHARE 21
#define NLM_NM_LOCK 22
#define NLM_FREE_ALL 23
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
