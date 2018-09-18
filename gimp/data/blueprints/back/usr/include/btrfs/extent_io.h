// GGHASH:VAYI3l8hHmKx3ByNbkAEGAHfHIjsSBnoe9wIOpxXCnr400001798
#ifndef __BTRFS_EXTENT_IO_H__
#define __BTRFS_EXTENT_IO_H__ 
#if BTRFS_FLAT_INCLUDES
#include "kerncompat.h"
#include "extent-cache.h"
#include "list.h"
#else
#include <btrfs/kerncompat.h>
#include <btrfs/extent-cache.h>
#include <btrfs/list.h>
#endif
#define EXTENT_DIRTY (1U << 0)
#define EXTENT_WRITEBACK (1U << 1)
#define EXTENT_UPTODATE (1U << 2)
#define EXTENT_LOCKED (1U << 3)
#define EXTENT_NEW (1U << 4)
#define EXTENT_DELALLOC (1U << 5)
#define EXTENT_DEFRAG (1U << 6)
#define EXTENT_DEFRAG_DONE (1U << 7)
#define EXTENT_BUFFER_FILLED (1U << 8)
#define EXTENT_CSUM (1U << 9)
#define EXTENT_BAD_TRANSID (1U << 10)
#define EXTENT_BUFFER_DUMMY (1U << 11)
#define EXTENT_IOBITS (EXTENT_LOCKED | EXTENT_WRITEBACK)
#define BLOCK_GROUP_DATA (1U << 1)
#define BLOCK_GROUP_METADATA (1U << 2)
#define BLOCK_GROUP_SYSTEM (1U << 4)
#define BLOCK_GROUP_DIRTY (1U)
#define BIT_BYTE(nr) ((nr) / BITS_PER_BYTE)
#define BYTE_MASK ((1 << BITS_PER_BYTE) - 1)
#define BITMAP_FIRST_BYTE_MASK(start) ((BYTE_MASK << ((start) & (BITS_PER_BYTE - 1))) & BYTE_MASK)
#define BITMAP_LAST_BYTE_MASK(nbits) (BYTE_MASK >> (-(nbits) & (BITS_PER_BYTE - 1)))
#endif
