// GGHASH:VvRLNYOd5V.OHRAPyUA42WyZwt.HSFVIS.06bst7RJz000002351
#ifndef __LINUX_BRIDGE_EFF_H
#define __LINUX_BRIDGE_EFF_H 
#include <linux/types.h>
#include <linux/if.h>
#include <linux/netfilter_bridge.h>
#define EBT_TABLE_MAXNAMELEN 32
#define EBT_CHAIN_MAXNAMELEN EBT_TABLE_MAXNAMELEN
#define EBT_FUNCTION_MAXNAMELEN EBT_TABLE_MAXNAMELEN
#define EBT_ACCEPT -1
#define EBT_DROP -2
#define EBT_CONTINUE -3
#define EBT_RETURN -4
#define NUM_STANDARD_TARGETS 4
#define EBT_VERDICT_BITS 0x0000000F
#define EBT_ENTRY_OR_ENTRIES 0x01
#define EBT_NOPROTO 0x02
#define EBT_802_3 0x04
#define EBT_SOURCEMAC 0x08
#define EBT_DESTMAC 0x10
#define EBT_F_MASK (EBT_NOPROTO | EBT_802_3 | EBT_SOURCEMAC | EBT_DESTMAC | EBT_ENTRY_OR_ENTRIES)
#define EBT_IPROTO 0x01
#define EBT_IIN 0x02
#define EBT_IOUT 0x04
#define EBT_ISOURCE 0x8
#define EBT_IDEST 0x10
#define EBT_ILOGICALIN 0x20
#define EBT_ILOGICALOUT 0x40
#define EBT_INV_MASK (EBT_IPROTO | EBT_IIN | EBT_IOUT | EBT_ILOGICALIN | EBT_ILOGICALOUT | EBT_ISOURCE | EBT_IDEST)
#define EBT_STANDARD_TARGET "standard"
#define EBT_BASE_CTL 128
#define EBT_SO_SET_ENTRIES (EBT_BASE_CTL)
#define EBT_SO_SET_COUNTERS (EBT_SO_SET_ENTRIES+1)
#define EBT_SO_SET_MAX (EBT_SO_SET_COUNTERS+1)
#define EBT_SO_GET_INFO (EBT_BASE_CTL)
#define EBT_SO_GET_ENTRIES (EBT_SO_GET_INFO+1)
#define EBT_SO_GET_INIT_INFO (EBT_SO_GET_ENTRIES+1)
#define EBT_SO_GET_INIT_ENTRIES (EBT_SO_GET_INIT_INFO+1)
#define EBT_SO_GET_MAX (EBT_SO_GET_INIT_ENTRIES+1)
#define EBT_MATCH_ITERATE(e,fn,args...) ({ unsigned int __i; int __ret = 0; struct ebt_entry_match *__match; for (__i = sizeof(struct ebt_entry); __i < (e)->watchers_offset; __i += __match->match_size + sizeof(struct ebt_entry_match)) { __match = (void *)(e) + __i; __ret = fn(__match , ## args); if (__ret != 0) break; } if (__ret == 0) { if (__i != (e)->watchers_offset) __ret = -EINVAL; } __ret; })
#define EBT_WATCHER_ITERATE(e,fn,args...) ({ unsigned int __i; int __ret = 0; struct ebt_entry_watcher *__watcher; for (__i = e->watchers_offset; __i < (e)->target_offset; __i += __watcher->watcher_size + sizeof(struct ebt_entry_watcher)) { __watcher = (void *)(e) + __i; __ret = fn(__watcher , ## args); if (__ret != 0) break; } if (__ret == 0) { if (__i != (e)->target_offset) __ret = -EINVAL; } __ret; })
#define EBT_ENTRY_ITERATE(entries,size,fn,args...) ({ unsigned int __i; int __ret = 0; struct ebt_entry *__entry; for (__i = 0; __i < (size);) { __entry = (void *)(entries) + __i; __ret = fn(__entry , ## args); if (__ret != 0) break; if (__entry->bitmask != 0) __i += __entry->next_offset; else __i += sizeof(struct ebt_entries); } if (__ret == 0) { if (__i != (size)) __ret = -EINVAL; } __ret; })
#endif
