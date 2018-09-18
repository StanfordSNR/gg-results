// GGHASH:VoXyTybIXwavNvB5YFx0fyzDnVzGozqtZalaHETX7Uu400000ce0
#ifndef _LINUX_ZORRO_H
#define _LINUX_ZORRO_H 
#include <linux/types.h>
#define ZORRO_MANUF(id) ((id) >> 16)
#define ZORRO_PROD(id) (((id) >> 8) & 0xff)
#define ZORRO_EPC(id) ((id) & 0xff)
#define ZORRO_ID(manuf,prod,epc) ((ZORRO_MANUF_ ##manuf << 16) | ((prod) << 8) | (epc))
#include <linux/zorro_ids.h>
#define GVP_PRODMASK (0xf8)
#define GVP_SCSICLKMASK (0x01)
#define ERT_TYPEMASK 0xc0
#define ERT_ZORROII 0xc0
#define ERT_ZORROIII 0x80
#define ERTB_MEMLIST 5
#define ERTF_MEMLIST (1<<5)
#define ZORRO_NUM_AUTO 16
#endif
