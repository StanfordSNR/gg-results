// GGHASH:V0hPV25fUTM34Zvy2PbuKVOr9vOyXYzClD_rhDuNIF3Q00000d16
#ifndef _LINUX_MSG_H
#define _LINUX_MSG_H 
#include <linux/ipc.h>
#define MSG_STAT 11
#define MSG_INFO 12
#define MSG_NOERROR 010000
#define MSG_EXCEPT 020000
#define MSG_COPY 040000
#include <asm/msgbuf.h>
#define MSGMNI 32000
#define MSGMAX 8192
#define MSGMNB 16384
#define MSGPOOL (MSGMNI * MSGMNB / 1024)
#define MSGTQL MSGMNB
#define MSGMAP MSGMNB
#define MSGSSZ 16
#define __MSGSEG ((MSGPOOL * 1024) / MSGSSZ)
#define MSGSEG (__MSGSEG <= 0xffff ? __MSGSEG : 0xffff)
#endif
