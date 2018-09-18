// GGHASH:VDrIkbl7IYxgxBF.yIPha6ddfxKWg5upe.p8hzuR8wxI0000094d
#ifndef _ATMLEC_H_
#define _ATMLEC_H_ 
#include <linux/atmapi.h>
#include <linux/atmioc.h>
#include <linux/atm.h>
#include <linux/if_ether.h>
#include <linux/types.h>
#define ATMLEC_CTRL _IO('a', ATMIOC_LANE)
#define ATMLEC_DATA _IO('a', ATMIOC_LANE+1)
#define ATMLEC_MCAST _IO('a', ATMIOC_LANE+2)
#define MAX_LEC_ITF 48
#define ATMLEC_MSG_TYPE_MAX l_should_bridge
#endif
