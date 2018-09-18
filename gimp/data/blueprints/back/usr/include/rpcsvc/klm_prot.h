// GGHASH:VPbBjahvehBdp7EFsjwUZfRY1DtBDGNnhPFHnrMUckCE00000cda
#ifndef _KLM_PROT_H_RPCGEN
#define _KLM_PROT_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#define LM_MAXSTRLEN 1024
#define KLM_PROG 100020
#define KLM_VERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define KLM_TEST 1
#define KLM_LOCK 2
#define KLM_CANCEL 3
#define KLM_UNLOCK 4
#else
#define KLM_TEST 1
#define KLM_LOCK 2
#define KLM_CANCEL 3
#define KLM_UNLOCK 4
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
