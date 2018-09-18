// GGHASH:VWJHM9VLNU1u6zZYrUq5tkKRKqPfh_8DuJ6xt0nn53ys000008cd
#ifndef __CONNECTOR_H
#define __CONNECTOR_H 
#include <linux/types.h>
#define CN_IDX_PROC 0x1
#define CN_VAL_PROC 0x1
#define CN_IDX_CIFS 0x2
#define CN_VAL_CIFS 0x1
#define CN_W1_IDX 0x3
#define CN_W1_VAL 0x1
#define CN_IDX_V86D 0x4
#define CN_VAL_V86D_UVESAFB 0x1
#define CN_IDX_BB 0x5
#define CN_DST_IDX 0x6
#define CN_DST_VAL 0x1
#define CN_IDX_DM 0x7
#define CN_VAL_DM_USERSPACE_LOG 0x1
#define CN_IDX_DRBD 0x8
#define CN_VAL_DRBD 0x1
#define CN_KVP_IDX 0x9
#define CN_KVP_VAL 0x1
#define CN_VSS_IDX 0xA
#define CN_VSS_VAL 0x1
#define CN_NETLINK_USERS 11
#define CONNECTOR_MAX_MSG_SIZE 16384
#endif
