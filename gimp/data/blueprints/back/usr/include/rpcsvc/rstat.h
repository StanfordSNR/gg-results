// GGHASH:V7bw5aIh3rc.T5iKWVSRd8QmAQhdcvWqJ_hKaFwZIlIs00000fcd
#ifndef _RSTAT_H_RPCGEN
#define _RSTAT_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#ifndef FSCALE
#define FSHIFT 8
#define FSCALE (1<<FSHIFT)
#endif
#define CPUSTATES 4
#define DK_NDRIVE 4
#define RSTATPROG 100001
#define RSTATVERS_TIME 3
#if defined(__STDC__) || defined(__cplusplus)
#define RSTATPROC_STATS 1
#define RSTATPROC_HAVEDISK 2
#else
#define RSTATPROC_STATS 1
#define RSTATPROC_HAVEDISK 2
#endif
#define RSTATVERS_SWTCH 2
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#define RSTATVERS_ORIG 1
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
