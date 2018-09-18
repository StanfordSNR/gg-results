// GGHASH:V6IJDtUQoQESCE90GBu6tvvPDg_yKHx7aLEEMwgEY6bk00000289
#ifndef __LINUX_TC_GACT_H
#define __LINUX_TC_GACT_H 
#include <linux/types.h>
#include <linux/pkt_cls.h>
#define TCA_ACT_GACT 5
#define PGACT_NONE 0
#define PGACT_NETRAND 1
#define PGACT_DETERM 2
#define MAX_RAND (PGACT_DETERM + 1 )
#define TCA_GACT_MAX (__TCA_GACT_MAX - 1)
#endif
