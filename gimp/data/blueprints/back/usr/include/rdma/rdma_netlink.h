// GGHASH:VY1D.01kzdgdPB6e8v.JaBUdS3oUxiqFqNpIWBVBoZQs00001b60
#ifndef _RDMA_NETLINK_H
#define _RDMA_NETLINK_H 
#include <linux/types.h>
#define RDMA_NL_GET_CLIENT(type) ((type & (((1 << 6) - 1) << 10)) >> 10)
#define RDMA_NL_GET_OP(type) (type & ((1 << 10) - 1))
#define RDMA_NL_GET_TYPE(client,op) ((client << 10) + op)
#define IWPM_NLA_MANAGE_MAPPING_MAX 3
#define IWPM_NLA_QUERY_MAPPING_MAX 4
#define IWPM_NLA_MAPINFO_SEND_MAX 3
#define RDMA_NL_LS_F_ERR 0x0100
#define LS_DEVICE_NAME_MAX 64
#define RDMA_NLA_F_MANDATORY (1 << 13)
#define RDMA_NLA_TYPE_MASK (~(NLA_F_NESTED | NLA_F_NET_BYTEORDER | RDMA_NLA_F_MANDATORY))
#endif
