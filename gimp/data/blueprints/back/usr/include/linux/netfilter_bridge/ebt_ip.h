// GGHASH:VP7YSds7Ywe9uW4vPzjRZcO._49cFv.wFbidXdGLlev000000398
#ifndef __LINUX_BRIDGE_EBT_IP_H
#define __LINUX_BRIDGE_EBT_IP_H 
#include <linux/types.h>
#define EBT_IP_SOURCE 0x01
#define EBT_IP_DEST 0x02
#define EBT_IP_TOS 0x04
#define EBT_IP_PROTO 0x08
#define EBT_IP_SPORT 0x10
#define EBT_IP_DPORT 0x20
#define EBT_IP_MASK (EBT_IP_SOURCE | EBT_IP_DEST | EBT_IP_TOS | EBT_IP_PROTO | EBT_IP_SPORT | EBT_IP_DPORT )
#define EBT_IP_MATCH "ip"
#endif
