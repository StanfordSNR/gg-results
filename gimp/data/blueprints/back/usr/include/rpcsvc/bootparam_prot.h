// GGHASH:V9OZKPa.LmamJCUVg7HQimVf.zg6M1p.d4mPnhwTVr4c00000c74
#ifndef _BOOTPARAM_PROT_H_RPCGEN
#define _BOOTPARAM_PROT_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#include <rpc/types.h>
#include <sys/time.h>
#include <sys/errno.h>
#include <nfs/nfs.h>
#define MAX_MACHINE_NAME 255
#define MAX_PATH_LEN 1024
#define MAX_FILEID 32
#define IP_ADDR_TYPE 1
#define BOOTPARAMPROG 100026
#define BOOTPARAMVERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define BOOTPARAMPROC_WHOAMI 1
#define BOOTPARAMPROC_GETFILE 2
#else
#define BOOTPARAMPROC_WHOAMI 1
#define BOOTPARAMPROC_GETFILE 2
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
