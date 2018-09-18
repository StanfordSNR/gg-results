// GGHASH:V8_Gxh8jqc9Ji3ISTBPpvkKG5pzZ77dBtQ3fmfqiXS780000070e
#ifndef _CM4000_H_
#define _CM4000_H_ 
#include <linux/types.h>
#include <linux/ioctl.h>
#define MAX_ATR 33
#define CM4000_MAX_DEV 4
#define CM_IOC_MAGIC 'c'
#define CM_IOC_MAXNR 255
#define CM_IOCGSTATUS _IOR (CM_IOC_MAGIC, 0, unsigned char *)
#define CM_IOCGATR _IOWR(CM_IOC_MAGIC, 1, atreq_t *)
#define CM_IOCSPTS _IOW (CM_IOC_MAGIC, 2, ptsreq_t *)
#define CM_IOCSRDR _IO (CM_IOC_MAGIC, 3)
#define CM_IOCARDOFF _IO (CM_IOC_MAGIC, 4)
#define CM_IOSDBGLVL _IOW(CM_IOC_MAGIC, 250, int*)
#define CM_CARD_INSERTED 0x01
#define CM_CARD_POWERED 0x02
#define CM_ATR_PRESENT 0x04
#define CM_ATR_VALID 0x08
#define CM_STATE_VALID 0x0f
#define CM_NO_READER 0x10
#define CM_BAD_CARD 0x20
#endif
