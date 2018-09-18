// GGHASH:VcgHKGQ9vvRCF56ITkj7v7DZvH5wGHR7TKkDeqCumVEI00001ec9
#ifndef _CAN_H
#define _CAN_H 
#include <linux/types.h>
#include <linux/socket.h>
#define CAN_EFF_FLAG 0x80000000U
#define CAN_RTR_FLAG 0x40000000U
#define CAN_ERR_FLAG 0x20000000U
#define CAN_SFF_MASK 0x000007FFU
#define CAN_EFF_MASK 0x1FFFFFFFU
#define CAN_ERR_MASK 0x1FFFFFFFU
#define CAN_SFF_ID_BITS 11
#define CAN_EFF_ID_BITS 29
#define CAN_MAX_DLC 8
#define CAN_MAX_DLEN 8
#define CANFD_MAX_DLC 15
#define CANFD_MAX_DLEN 64
#define CANFD_BRS 0x01
#define CANFD_ESI 0x02
#define CAN_MTU (sizeof(struct can_frame))
#define CANFD_MTU (sizeof(struct canfd_frame))
#define CAN_RAW 1
#define CAN_BCM 2
#define CAN_TP16 3
#define CAN_TP20 4
#define CAN_MCNET 5
#define CAN_ISOTP 6
#define CAN_NPROTO 7
#define SOL_CAN_BASE 100
#define CAN_INV_FILTER 0x20000000U
#define CAN_RAW_FILTER_MAX 512
#endif
