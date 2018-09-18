// GGHASH:VnRDux3TL_L2pvPkysTkwLfgBp70cm1q6kdKWloxCQk000000c65
#ifndef _SM_INTER_H_RPCGEN
#define _SM_INTER_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#define SM_MAXSTRLEN 1024
#define SM_PROG 100024
#define SM_VERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define SM_STAT 1
#define SM_MON 2
#define SM_UNMON 3
#define SM_UNMON_ALL 4
#define SM_SIMU_CRASH 5
#else
#define SM_STAT 1
#define SM_MON 2
#define SM_UNMON 3
#define SM_UNMON_ALL 4
#define SM_SIMU_CRASH 5
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
