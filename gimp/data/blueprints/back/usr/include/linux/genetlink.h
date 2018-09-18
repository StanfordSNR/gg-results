// GGHASH:VAUJ.PxwC5OjBr2b2nVWnvDdlOztqLG5RyMUnaykizD000000783
#ifndef __LINUX_GENERIC_NETLINK_H
#define __LINUX_GENERIC_NETLINK_H 
#include <linux/types.h>
#include <linux/netlink.h>
#define GENL_NAMSIZ 16
#define GENL_MIN_ID NLMSG_MIN_TYPE
#define GENL_MAX_ID 1023
#define GENL_HDRLEN NLMSG_ALIGN(sizeof(struct genlmsghdr))
#define GENL_ADMIN_PERM 0x01
#define GENL_CMD_CAP_DO 0x02
#define GENL_CMD_CAP_DUMP 0x04
#define GENL_CMD_CAP_HASPOL 0x08
#define GENL_UNS_ADMIN_PERM 0x10
#define GENL_ID_CTRL NLMSG_MIN_TYPE
#define GENL_ID_VFS_DQUOT (NLMSG_MIN_TYPE + 1)
#define GENL_ID_PMCRAID (NLMSG_MIN_TYPE + 2)
#define GENL_START_ALLOC (NLMSG_MIN_TYPE + 3)
#define CTRL_CMD_MAX (__CTRL_CMD_MAX - 1)
#define CTRL_ATTR_MAX (__CTRL_ATTR_MAX - 1)
#define CTRL_ATTR_OP_MAX (__CTRL_ATTR_OP_MAX - 1)
#define CTRL_ATTR_MCAST_GRP_MAX (__CTRL_ATTR_MCAST_GRP_MAX - 1)
#endif