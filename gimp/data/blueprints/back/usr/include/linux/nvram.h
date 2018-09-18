// GGHASH:VYT1OQWBdozs88MObfRTULCGeHCgbiMJUwbc6XOKLiuI00000214
#ifndef _LINUX_NVRAM_H
#define _LINUX_NVRAM_H 
#include <linux/ioctl.h>
#define NVRAM_INIT _IO('p', 0x40)
#define NVRAM_SETCKS _IO('p', 0x41)
#define NVRAM_FIRST_BYTE 14
#define NVRAM_OFFSET(x) ((x)-NVRAM_FIRST_BYTE)
#endif
