// GGHASH:Vjf6fFYQzPZwJT691G2HxgWdWq8PzzDNPoDkU3f0vybo00000355
#ifndef __LINUX_BRIDGE_NETFILTER_H
#define __LINUX_BRIDGE_NETFILTER_H 
#include <linux/in.h>
#include <linux/netfilter.h>
#include <linux/if_ether.h>
#include <linux/if_vlan.h>
#include <linux/if_pppox.h>
#define NF_BR_PRE_ROUTING 0
#define NF_BR_LOCAL_IN 1
#define NF_BR_FORWARD 2
#define NF_BR_LOCAL_OUT 3
#define NF_BR_POST_ROUTING 4
#define NF_BR_BROUTING 5
#define NF_BR_NUMHOOKS 6
#endif
