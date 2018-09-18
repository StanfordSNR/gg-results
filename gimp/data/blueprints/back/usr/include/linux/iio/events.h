// GGHASH:VBhrIUDxRY7ulLmdpT5IhB9SKXuLq8nwy1zodAloT7gI0000056e
#ifndef _IIO_EVENTS_H_
#define _IIO_EVENTS_H_ 
#include <linux/ioctl.h>
#include <linux/types.h>
#define IIO_GET_EVENT_FD_IOCTL _IOR('i', 0x90, int)
#define IIO_EVENT_CODE_EXTRACT_TYPE(mask) ((mask >> 56) & 0xFF)
#define IIO_EVENT_CODE_EXTRACT_DIR(mask) ((mask >> 48) & 0x7F)
#define IIO_EVENT_CODE_EXTRACT_CHAN_TYPE(mask) ((mask >> 32) & 0xFF)
#define IIO_EVENT_CODE_EXTRACT_CHAN(mask) ((__s16)(mask & 0xFFFF))
#define IIO_EVENT_CODE_EXTRACT_CHAN2(mask) ((__s16)(((mask) >> 16) & 0xFFFF))
#define IIO_EVENT_CODE_EXTRACT_MODIFIER(mask) ((mask >> 40) & 0xFF)
#define IIO_EVENT_CODE_EXTRACT_DIFF(mask) (((mask) >> 55) & 0x1)
#endif
