// GGHASH:VxhMOUdlYL1TwHxvu5.piSLaAsZRU5PiympPadxdttRk0000091c
#ifndef _LINUX_ROUTE_H
#define _LINUX_ROUTE_H 
#include <linux/if.h>
#define rt_mss rt_mtu
#define RTF_UP 0x0001
#define RTF_GATEWAY 0x0002
#define RTF_HOST 0x0004
#define RTF_REINSTATE 0x0008
#define RTF_DYNAMIC 0x0010
#define RTF_MODIFIED 0x0020
#define RTF_MTU 0x0040
#define RTF_MSS RTF_MTU
#define RTF_WINDOW 0x0080
#define RTF_IRTT 0x0100
#define RTF_REJECT 0x0200
#endif
