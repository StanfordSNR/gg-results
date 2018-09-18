// GGHASH:VvIPqrTycAkBoUPA9XAiNugy2GDLr.jTA3v1iokTXz.c00001129
#ifndef _LINUX_FSMAP_H
#define _LINUX_FSMAP_H 
#include <linux/types.h>
#define FMH_IF_VALID 0
#define FMH_OF_DEV_T 0x1
#define FMR_OF_PREALLOC 0x1
#define FMR_OF_ATTR_FORK 0x2
#define FMR_OF_EXTENT_MAP 0x4
#define FMR_OF_SHARED 0x8
#define FMR_OF_SPECIAL_OWNER 0x10
#define FMR_OF_LAST 0x20
#define FMR_OWNER(type,code) (((__u64)type << 32) | ((__u64)code & 0xFFFFFFFFULL))
#define FMR_OWNER_TYPE(owner) ((__u32)((__u64)owner >> 32))
#define FMR_OWNER_CODE(owner) ((__u32)(((__u64)owner & 0xFFFFFFFFULL)))
#define FMR_OWN_FREE FMR_OWNER(0, 1)
#define FMR_OWN_UNKNOWN FMR_OWNER(0, 2)
#define FMR_OWN_METADATA FMR_OWNER(0, 3)
#define FS_IOC_GETFSMAP _IOWR('X', 59, struct fsmap_head)
#endif
