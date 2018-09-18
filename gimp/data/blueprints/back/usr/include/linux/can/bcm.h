// GGHASH:VY54Km5K7q91oExGEEtodXWjxxqCulNDU9bSau5kGT3E0000100f
#ifndef _CAN_BCM_H
#define _CAN_BCM_H 
#include <linux/types.h>
#include <linux/can.h>
#define SETTIMER 0x0001
#define STARTTIMER 0x0002
#define TX_COUNTEVT 0x0004
#define TX_ANNOUNCE 0x0008
#define TX_CP_CAN_ID 0x0010
#define RX_FILTER_ID 0x0020
#define RX_CHECK_DLC 0x0040
#define RX_NO_AUTOTIMER 0x0080
#define RX_ANNOUNCE_RESUME 0x0100
#define TX_RESET_MULTI_IDX 0x0200
#define RX_RTR_FRAME 0x0400
#define CAN_FD_FRAME 0x0800
#endif
