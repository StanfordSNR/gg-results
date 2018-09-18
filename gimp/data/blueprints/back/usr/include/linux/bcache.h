// GGHASH:V8bE0C9MA5AlW_XkhL_nbw73v7X9I7Vaa_LVPATShsYI000020ae
#ifndef _LINUX_BCACHE_H
#define _LINUX_BCACHE_H 
#include <linux/types.h>
#define BITMASK(name,type,field,offset,size) static __inline__ __u64 name(const type *k) { return (k->field >> offset) & ~(~0ULL << size); } static __inline__ void SET_ ##name(type *k, __u64 v) { k->field &= ~(~(~0ULL << size) << offset); k->field |= (v & ~(~0ULL << size)) << offset; }
#define KEY_FIELD(name,field,offset,size) BITMASK(name, struct bkey, field, offset, size)
#define PTR_FIELD(name,offset,size) static __inline__ __u64 name(const struct bkey *k, unsigned i) { return (k->ptr[i] >> offset) & ~(~0ULL << size); } static __inline__ void SET_ ##name(struct bkey *k, unsigned i, __u64 v) { k->ptr[i] &= ~(~(~0ULL << size) << offset); k->ptr[i] |= (v & ~(~0ULL << size)) << offset; }
#define KEY_SIZE_BITS 16
#define KEY_MAX_U64S 8
#define KEY(inode,offset,size) ((struct bkey) { .high = (1ULL << 63) | ((__u64) (size) << 20) | (inode), .low = (offset) })
#define ZERO_KEY KEY(0, 0, 0)
#define MAX_KEY_INODE (~(~0 << 20))
#define MAX_KEY_OFFSET (~0ULL >> 1)
#define MAX_KEY KEY(MAX_KEY_INODE, MAX_KEY_OFFSET, 0)
#define KEY_START(k) (KEY_OFFSET(k) - KEY_SIZE(k))
#define START_KEY(k) KEY(KEY_INODE(k), KEY_START(k), 0)
#define PTR_DEV_BITS 12
#define PTR_CHECK_DEV ((1 << PTR_DEV_BITS) - 1)
#define MAKE_PTR(gen,offset,dev) ((((__u64) dev) << 51) | ((__u64) offset) << 8 | gen)
#define bkey_copy(_dest,_src) memcpy(_dest, _src, bkey_bytes(_src))
#define BKEY_PAD 8
#define BKEY_PADDED(key) union { struct bkey key; __u64 key ## _pad[BKEY_PAD]; }
#define BCACHE_SB_VERSION_CDEV 0
#define BCACHE_SB_VERSION_BDEV 1
#define BCACHE_SB_VERSION_CDEV_WITH_UUID 3
#define BCACHE_SB_VERSION_BDEV_WITH_OFFSET 4
#define BCACHE_SB_MAX_VERSION 4
#define SB_SECTOR 8
#define SB_SIZE 4096
#define SB_LABEL_SIZE 32
#define SB_JOURNAL_BUCKETS 256U
#define MAX_CACHES_PER_SET 8
#define BDEV_DATA_START_DEFAULT 16
#define CACHE_REPLACEMENT_LRU 0U
#define CACHE_REPLACEMENT_FIFO 1U
#define CACHE_REPLACEMENT_RANDOM 2U
#define CACHE_MODE_WRITETHROUGH 0U
#define CACHE_MODE_WRITEBACK 1U
#define CACHE_MODE_WRITEAROUND 2U
#define CACHE_MODE_NONE 3U
#define BDEV_STATE_NONE 0U
#define BDEV_STATE_CLEAN 1U
#define BDEV_STATE_DIRTY 2U
#define BDEV_STATE_STALE 3U
#define JSET_MAGIC 0x245235c1a3625032ULL
#define PSET_MAGIC 0x6750e15f87337f91ULL
#define BSET_MAGIC 0x90135c78b99e07f5ULL
#define BCACHE_JSET_VERSION_UUIDv1 1
#define BCACHE_JSET_VERSION_UUID 1
#define BCACHE_JSET_VERSION 1
#define BCACHE_BSET_CSUM 1
#define BCACHE_BSET_VERSION 1
#endif
