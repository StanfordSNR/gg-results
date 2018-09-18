// GGHASH:VZptWRSndoh.LfVWtRyfsf1jA7vzV_qbyOEBN1cWeqqk00000835
#ifndef _LINUX_IPC_H
#define _LINUX_IPC_H 
#include <linux/types.h>
#define IPC_PRIVATE ((__kernel_key_t) 0)
#include <asm/ipcbuf.h>
#define IPC_CREAT 00001000
#define IPC_EXCL 00002000
#define IPC_NOWAIT 00004000
#define IPC_DIPC 00010000
#define IPC_OWN 00020000
#define IPC_RMID 0
#define IPC_SET 1
#define IPC_STAT 2
#define IPC_INFO 3
#define IPC_OLD 0
#define IPC_64 0x0100
#define SEMOP 1
#define SEMGET 2
#define SEMCTL 3
#define SEMTIMEDOP 4
#define MSGSND 11
#define MSGRCV 12
#define MSGGET 13
#define MSGCTL 14
#define SHMAT 21
#define SHMDT 22
#define SHMGET 23
#define SHMCTL 24
#define DIPC 25
#define IPCCALL(version,op) ((version)<<16 | (op))
#endif
