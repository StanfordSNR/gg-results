// GGHASH:VGdzunQKA_SPt0_jCfcTd4quvrvfWF597NklSTynCWCQ0000176f
#ifndef _ARPTABLES_H
#define _ARPTABLES_H 
#include <linux/types.h>
#include <linux/if.h>
#include <linux/netfilter_arp.h>
#include <linux/netfilter/x_tables.h>
#define ARPT_FUNCTION_MAXNAMELEN XT_FUNCTION_MAXNAMELEN
#define ARPT_TABLE_MAXNAMELEN XT_TABLE_MAXNAMELEN
#define arpt_entry_target xt_entry_target
#define arpt_standard_target xt_standard_target
#define arpt_error_target xt_error_target
#define ARPT_CONTINUE XT_CONTINUE
#define ARPT_RETURN XT_RETURN
#define arpt_counters_info xt_counters_info
#define arpt_counters xt_counters
#define ARPT_STANDARD_TARGET XT_STANDARD_TARGET
#define ARPT_ERROR_TARGET XT_ERROR_TARGET
#define ARPT_ENTRY_ITERATE(entries,size,fn,args...) XT_ENTRY_ITERATE(struct arpt_entry, entries, size, fn, ## args)
#define ARPT_DEV_ADDR_LEN_MAX 16
#define ARPT_F_MASK 0x00
#define ARPT_INV_VIA_IN 0x0001
#define ARPT_INV_VIA_OUT 0x0002
#define ARPT_INV_SRCIP 0x0004
#define ARPT_INV_TGTIP 0x0008
#define ARPT_INV_SRCDEVADDR 0x0010
#define ARPT_INV_TGTDEVADDR 0x0020
#define ARPT_INV_ARPOP 0x0040
#define ARPT_INV_ARPHRD 0x0080
#define ARPT_INV_ARPPRO 0x0100
#define ARPT_INV_ARPHLN 0x0200
#define ARPT_INV_MASK 0x03FF
#define ARPT_BASE_CTL 96
#define ARPT_SO_SET_REPLACE (ARPT_BASE_CTL)
#define ARPT_SO_SET_ADD_COUNTERS (ARPT_BASE_CTL + 1)
#define ARPT_SO_SET_MAX ARPT_SO_SET_ADD_COUNTERS
#define ARPT_SO_GET_INFO (ARPT_BASE_CTL)
#define ARPT_SO_GET_ENTRIES (ARPT_BASE_CTL + 1)
#define ARPT_SO_GET_REVISION_TARGET (ARPT_BASE_CTL + 3)
#define ARPT_SO_GET_MAX (ARPT_SO_GET_REVISION_TARGET)
#endif
