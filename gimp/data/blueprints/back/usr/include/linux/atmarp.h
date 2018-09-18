// GGHASH:VpuPMbIBy_TQ4pyxtGtA0.HRNgjapNT0jquJzx7Gqd2o00000510
#ifndef _LINUX_ATMARP_H
#define _LINUX_ATMARP_H 
#include <linux/types.h>
#include <linux/atmapi.h>
#include <linux/atmioc.h>
#define ATMARP_RETRY_DELAY 30
#define ATMARP_MAX_UNRES_PACKETS 5
#define ATMARPD_CTRL _IO('a',ATMIOC_CLIP+1)
#define ATMARP_MKIP _IO('a',ATMIOC_CLIP+2)
#define ATMARP_SETENTRY _IO('a',ATMIOC_CLIP+3)
#define ATMARP_ENCAP _IO('a',ATMIOC_CLIP+5)
#endif
