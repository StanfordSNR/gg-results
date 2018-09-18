// GGHASH:V1NrPhBqCENZwOs5Yw.9ccUKWXCBi9AFdPgW7qDWDkYQ00000ccf
#ifndef _RUSERS_H_RPCGEN
#define _RUSERS_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#define RUSERS_MAXUSERLEN 32
#define RUSERS_MAXLINELEN 32
#define RUSERS_MAXHOSTLEN 257
#define RUSERS_EMPTY 0
#define RUSERS_RUN_LVL 1
#define RUSERS_BOOT_TIME 2
#define RUSERS_OLD_TIME 3
#define RUSERS_NEW_TIME 4
#define RUSERS_INIT_PROCESS 5
#define RUSERS_LOGIN_PROCESS 6
#define RUSERS_USER_PROCESS 7
#define RUSERS_DEAD_PROCESS 8
#define RUSERS_ACCOUNTING 9
#ifdef __cplusplus
#endif
#include <rpc/xdr.h>
#define RUSERSVERS_IDLE 2
#define RUSERSVERS 3
#define MAXUSERS 100
#ifdef __cplusplus
#endif
#define RUSERSPROG 100002
#define RUSERSVERS_3 3
#if defined(__STDC__) || defined(__cplusplus)
#define RUSERSPROC_NUM 1
#define RUSERSPROC_NAMES 2
#define RUSERSPROC_ALLNAMES 3
#else
#define RUSERSPROC_NUM 1
#define RUSERSPROC_NAMES 2
#define RUSERSPROC_ALLNAMES 3
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
