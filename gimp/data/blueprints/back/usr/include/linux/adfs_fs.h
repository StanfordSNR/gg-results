// GGHASH:VkBZu5Gf2FBnNMkJUWy0ex1onE7NKgKTLjc5.vNQs2nY000003a8
#ifndef _ADFS_FS_H
#define _ADFS_FS_H 
#include <linux/types.h>
#include <linux/magic.h>
#define ADFS_DISCRECORD (0xc00)
#define ADFS_DR_OFFSET (0x1c0)
#define ADFS_DR_SIZE 60
#define ADFS_DR_SIZE_BITS (ADFS_DR_SIZE << 3)
#endif
