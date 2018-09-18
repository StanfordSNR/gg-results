// GGHASH:VBVAGnJxT.2HYeKIEfaOS00vTqKCe6D0srO9IqBcfN1E00000816
#ifndef _SYS_IPC_H
# error "Never use <bits/ipc.h> directly; include <sys/ipc.h> instead."
#endif
#include <bits/types.h>
#define IPC_CREAT 01000
#define IPC_EXCL 02000
#define IPC_NOWAIT 04000
#define IPC_RMID 0
#define IPC_SET 1
#define IPC_STAT 2
#ifdef __USE_GNU
#define IPC_INFO 3
#endif
#define IPC_PRIVATE ((__key_t) 0)
