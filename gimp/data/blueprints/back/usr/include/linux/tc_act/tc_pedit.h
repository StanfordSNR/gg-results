// GGHASH:VGeBrK634ihHT6QaaQJ.UrlIVx5EnlcEu1g06I6i0nRg000006ab
#ifndef __LINUX_TC_PED_H
#define __LINUX_TC_PED_H 
#include <linux/types.h>
#include <linux/pkt_cls.h>
#define TCA_ACT_PEDIT 7
#define TCA_PEDIT_MAX (__TCA_PEDIT_MAX - 1)
#define TCA_PEDIT_KEY_EX_MAX (__TCA_PEDIT_KEY_EX_MAX - 1)
#define TCA_PEDIT_HDR_TYPE_MAX (__PEDIT_HDR_TYPE_MAX - 1)
#define TCA_PEDIT_CMD_MAX (__PEDIT_CMD_MAX - 1)
#define tc_pedit tc_pedit_sel
#endif
