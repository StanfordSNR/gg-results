// GGHASH:VaYatkj8qj8bV87_sq3YsmPCzRBzwShu4rwd5iODNpto000004be
#ifndef _NETFILTER_NF_NAT_H
#define _NETFILTER_NF_NAT_H 
#include <linux/netfilter.h>
#include <linux/netfilter/nf_conntrack_tuple_common.h>
#define NF_NAT_RANGE_MAP_IPS (1 << 0)
#define NF_NAT_RANGE_PROTO_SPECIFIED (1 << 1)
#define NF_NAT_RANGE_PROTO_RANDOM (1 << 2)
#define NF_NAT_RANGE_PERSISTENT (1 << 3)
#define NF_NAT_RANGE_PROTO_RANDOM_FULLY (1 << 4)
#define NF_NAT_RANGE_PROTO_RANDOM_ALL (NF_NAT_RANGE_PROTO_RANDOM | NF_NAT_RANGE_PROTO_RANDOM_FULLY)
#define NF_NAT_RANGE_MASK (NF_NAT_RANGE_MAP_IPS | NF_NAT_RANGE_PROTO_SPECIFIED | NF_NAT_RANGE_PROTO_RANDOM | NF_NAT_RANGE_PERSISTENT | NF_NAT_RANGE_PROTO_RANDOM_FULLY)
#endif
