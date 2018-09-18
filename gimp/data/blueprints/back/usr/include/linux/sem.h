// GGHASH:Vc7S1CHud1xJtE5Von6K1k6IFG3mKdseCMEippGoBKZA00000bcb
#ifndef _LINUX_SEM_H
#define _LINUX_SEM_H 
#include <linux/ipc.h>
#define SEM_UNDO 0x1000
#define GETPID 11
#define GETVAL 12
#define GETALL 13
#define GETNCNT 14
#define GETZCNT 15
#define SETVAL 16
#define SETALL 17
#define SEM_STAT 18
#define SEM_INFO 19
#include <asm/sembuf.h>
#define SEMMNI 32000
#define SEMMSL 32000
#define SEMMNS (SEMMNI*SEMMSL)
#define SEMOPM 500
#define SEMVMX 32767
#define SEMAEM SEMVMX
#define SEMUME SEMOPM
#define SEMMNU SEMMNS
#define SEMMAP SEMMNS
#define SEMUSZ 20
#endif
