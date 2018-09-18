// GGHASH:VI4aE3NLhUjheEq23o4H_ONdGvEsxZWIXIg72yldddMk00000c5c
#ifndef __LINUX_LLC_H
#define __LINUX_LLC_H 
#include <linux/socket.h>
#include <linux/if.h>
#define __LLC_SOCK_SIZE__ 16
#define LLC_OPT_MAX_RETRY 100
#define LLC_OPT_MAX_SIZE 4196
#define LLC_OPT_MAX_WIN 127
#define LLC_OPT_MAX_ACK_TMR_EXP 60
#define LLC_OPT_MAX_P_TMR_EXP 60
#define LLC_OPT_MAX_REJ_TMR_EXP 60
#define LLC_OPT_MAX_BUSY_TMR_EXP 60
#define LLC_SAP_NULL 0x00
#define LLC_SAP_LLC 0x02
#define LLC_SAP_SNA 0x04
#define LLC_SAP_PNM 0x0E
#define LLC_SAP_IP 0x06
#define LLC_SAP_BSPAN 0x42
#define LLC_SAP_MMS 0x4E
#define LLC_SAP_8208 0x7E
#define LLC_SAP_3COM 0x80
#define LLC_SAP_PRO 0x8E
#define LLC_SAP_SNAP 0xAA
#define LLC_SAP_BANYAN 0xBC
#define LLC_SAP_IPX 0xE0
#define LLC_SAP_NETBEUI 0xF0
#define LLC_SAP_LANMGR 0xF4
#define LLC_SAP_IMPL 0xF8
#define LLC_SAP_DISC 0xFC
#define LLC_SAP_OSI 0xFE
#define LLC_SAP_LAR 0xDC
#define LLC_SAP_RM 0xD4
#define LLC_SAP_GLOBAL 0xFF
#endif
