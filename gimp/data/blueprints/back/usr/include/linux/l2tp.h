// GGHASH:VkhdV5l6a1.rHzbMA.skjyu1SZ6GKCFK5J_CYiXhLR4k00001603
#ifndef _LINUX_L2TP_H_
#define _LINUX_L2TP_H_ 
#include <linux/types.h>
#include <linux/socket.h>
#include <linux/in.h>
#include <linux/in6.h>
#define IPPROTO_L2TP 115
#define __SOCK_SIZE__ 16
#define L2TP_CMD_MAX (__L2TP_CMD_MAX - 1)
#define L2TP_ATTR_MAX (__L2TP_ATTR_MAX - 1)
#define L2TP_ATTR_STATS_MAX (__L2TP_ATTR_STATS_MAX - 1)
#define L2TP_GENL_NAME "l2tp"
#define L2TP_GENL_VERSION 0x1
#define L2TP_GENL_MCGROUP "l2tp"
#endif
