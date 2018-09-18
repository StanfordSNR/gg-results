// GGHASH:VpOgAVza2XTFDia2ape6PRgjvwIVIAYN.RtASJB5Wwnk000014fa
#ifndef _RPCSVC_NIS_TAGS_H
#define _RPCSVC_NIS_TAGS_H 
#if 0
#pragma ident "@(#)nis_tags.h	1.16	96/10/25"
#endif
#ifdef __cplusplus
#endif
#define NIS_DIR "data"
#define FOLLOW_LINKS (1<<0)
#define FOLLOW_PATH (1<<1)
#define HARD_LOOKUP (1<<2)
#define ALL_RESULTS (1<<3)
#define NO_CACHE (1<<4)
#define MASTER_ONLY (1<<5)
#define EXPAND_NAME (1<<6)
#define RETURN_RESULT (1<<7)
#define ADD_OVERWRITE (1<<8)
#define REM_MULTIPLE (1<<9)
#define MOD_SAMEOBJ (1<<10)
#define ADD_RESERVED (1<<11)
#define REM_RESERVED (1<<12)
#define MOD_EXCLUSIVE (1<<13)
#define SOFT_LOOKUP (1<<14)
#define USE_DGRAM (1<<16)
#define NO_AUTHINFO (1<<17)
#define TAG_DEBUG 1
#define TAG_STATS 2
#define TAG_GCACHE 3
#define TAG_GCACHE_ALL TAG_GCACHE
#define TAG_DCACHE 4
#define TAG_DCACHE_ONE TAG_DCACHE
#define TAG_OCACHE 5
#define TAG_SECURE 6
#define TAG_TCACHE_ONE 7
#define TAG_DCACHE_ALL 8
#define TAG_TCACHE_ALL 9
#define TAG_GCACHE_ONE 10
#define TAG_DCACHE_ONE_REFRESH 11
#define TAG_READONLY 12
#define TAG_READWRITE 14
#define TAG_OPSTATS 2048
#define TAG_THREADS 2049
#define TAG_HEAP 2050
#define TAG_UPDATES 2051
#define TAG_VISIBLE 2052
#define TAG_S_DCACHE 2053
#define TAG_S_OCACHE 2054
#define TAG_S_GCACHE 2055
#define TAG_S_STORAGE 2056
#define TAG_UPTIME 2057
#define TAG_DIRLIST 2058
#define TAG_NISCOMPAT 2059
#define TAG_DNSFORWARDING 2060
#define TAG_SECURITY_LEVEL 2061
#define TAG_ROOTSERVER 2062
#define IMPMEM_GROUPS 1
#define RECURS_GROUPS 2
#define NEGMEM_GROUPS 4
#ifdef __cplusplus
#endif
#endif
