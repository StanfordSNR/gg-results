// GGHASH:VzueiLqpWLMY.e_e74Cr4oVTdRl8LcaAMbobz9hm7Fes00000aef
#ifndef _NFNETLINK_LOG_H
#define _NFNETLINK_LOG_H 
#include <linux/types.h>
#include <linux/netfilter/nfnetlink.h>
#define NFULA_MAX (__NFULA_MAX - 1)
#define NFULA_CFG_MAX (__NFULA_CFG_MAX -1)
#define NFULNL_COPY_NONE 0x00
#define NFULNL_COPY_META 0x01
#define NFULNL_COPY_PACKET 0x02
#define NFULNL_CFG_F_SEQ 0x0001
#define NFULNL_CFG_F_SEQ_GLOBAL 0x0002
#define NFULNL_CFG_F_CONNTRACK 0x0004
#endif
