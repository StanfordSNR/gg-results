// GGHASH:VjaSuweC8PRsVZkpAY8FFLMzhpTuTw4tFwe.NTNSj3yY00000229
#ifndef _XT_PHYSDEV_H
#define _XT_PHYSDEV_H 
#include <linux/types.h>
#include <linux/if.h>
#define XT_PHYSDEV_OP_IN 0x01
#define XT_PHYSDEV_OP_OUT 0x02
#define XT_PHYSDEV_OP_BRIDGED 0x04
#define XT_PHYSDEV_OP_ISIN 0x08
#define XT_PHYSDEV_OP_ISOUT 0x10
#define XT_PHYSDEV_OP_MASK (0x20 - 1)
#endif
