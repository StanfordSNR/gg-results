// GGHASH:VvdpJuPwMf7C4pyAx4QLacIi0OuU3FZX8iDZ7EKg0iGA00000f17
#ifndef _MOUNT_H_RPCGEN
#define _MOUNT_H_RPCGEN 
#include <rpc/rpc.h>
#ifdef __cplusplus
#endif
#define MNTPATHLEN 1024
#define MNTNAMLEN 255
#define FHSIZE 32
#define MOUNTPROG 100005
#define MOUNTVERS 1
#if defined(__STDC__) || defined(__cplusplus)
#define MOUNTPROC_NULL 0
#define MOUNTPROC_MNT 1
#define MOUNTPROC_DUMP 2
#define MOUNTPROC_UMNT 3
#define MOUNTPROC_UMNTALL 4
#define MOUNTPROC_EXPORT 5
#define MOUNTPROC_EXPORTALL 6
#else
#define MOUNTPROC_NULL 0
#define MOUNTPROC_MNT 1
#define MOUNTPROC_DUMP 2
#define MOUNTPROC_UMNT 3
#define MOUNTPROC_UMNTALL 4
#define MOUNTPROC_EXPORT 5
#define MOUNTPROC_EXPORTALL 6
#endif
#if defined(__STDC__) || defined(__cplusplus)
#else
#endif
#ifdef __cplusplus
#endif
#endif
