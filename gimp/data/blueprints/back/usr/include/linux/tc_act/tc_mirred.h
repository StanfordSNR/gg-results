// GGHASH:VxqnDw3SdYWsVEm_m4JMBlnPUd4Iyof904QHrJRyjF40000002f1
#ifndef __LINUX_TC_MIR_H
#define __LINUX_TC_MIR_H 
#include <linux/types.h>
#include <linux/pkt_cls.h>
#define TCA_ACT_MIRRED 8
#define TCA_EGRESS_REDIR 1
#define TCA_EGRESS_MIRROR 2
#define TCA_INGRESS_REDIR 3
#define TCA_INGRESS_MIRROR 4
#define TCA_MIRRED_MAX (__TCA_MIRRED_MAX - 1)
#endif
