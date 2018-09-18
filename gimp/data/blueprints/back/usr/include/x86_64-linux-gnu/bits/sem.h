// GGHASH:VB2uS7NlG05R64l97.yDf6bUblcwZFLKmFNW1Gw8Knag00000a22
#ifndef _SYS_SEM_H
# error "Never include <bits/sem.h> directly; use <sys/sem.h> instead."
#endif
#include <sys/types.h>
#define SEM_UNDO 0x1000
#define GETPID 11
#define GETVAL 12
#define GETALL 13
#define GETNCNT 14
#define GETZCNT 15
#define SETVAL 16
#define SETALL 17
#define _SEM_SEMUN_UNDEFINED 1
#ifdef __USE_MISC
#define SEM_STAT 18
#define SEM_INFO 19
#endif
