// GGHASH:VaOW2zqSBMTbguKraaWSy.ly0qHUaYWylErhgxSjs57A00000482
#ifndef __NET_DROPMON_H
#define __NET_DROPMON_H 
#include <linux/types.h>
#include <linux/netlink.h>
#define is_drop_point_hw(x) do { int ____i, ____j; for (____i = 0; ____i < 8; i ____i++) ____j |= x[____i]; ____j;} while (0)
#define NET_DM_CFG_VERSION 0
#define NET_DM_CFG_ALERT_COUNT 1
#define NET_DM_CFG_ALERT_DELAY 2
#define NET_DM_CFG_MAX 3
#define NET_DM_CMD_MAX (_NET_DM_CMD_MAX - 1)
#define NET_DM_GRP_ALERT 1
#endif
