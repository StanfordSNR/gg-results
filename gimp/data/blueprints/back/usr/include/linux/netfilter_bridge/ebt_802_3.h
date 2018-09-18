// GGHASH:VtKkcJU1l.ksSQytZGR_o6S0SUrZdtNegVtttvY0Jwz0000004fa
#ifndef __LINUX_BRIDGE_EBT_802_3_H
#define __LINUX_BRIDGE_EBT_802_3_H 
#include <linux/types.h>
#include <linux/if_ether.h>
#define EBT_802_3_SAP 0x01
#define EBT_802_3_TYPE 0x02
#define EBT_802_3_MATCH "802_3"
#define CHECK_TYPE 0xaa
#define IS_UI 0x03
#define EBT_802_3_MASK (EBT_802_3_SAP | EBT_802_3_TYPE | EBT_802_3)
#endif
