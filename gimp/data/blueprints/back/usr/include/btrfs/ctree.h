// GGHASH:VnVy67_Xg7J_ZFRZdMWLi54Yg6cqTxWiZQsflZ4Hq3uM000165d0
#ifndef __BTRFS_CTREE_H__
#define __BTRFS_CTREE_H__ 
#include <stdbool.h>
#if BTRFS_FLAT_INCLUDES
#include "list.h"
#include "kerncompat.h"
#include "radix-tree.h"
#include "extent-cache.h"
#include "extent_io.h"
#include "ioctl.h"
#include "sizes.h"
#else
#include <btrfs/list.h>
#include <btrfs/kerncompat.h>
#include <btrfs/radix-tree.h>
#include <btrfs/extent-cache.h>
#include <btrfs/extent_io.h>
#include <btrfs/ioctl.h>
#include <btrfs/sizes.h>
#endif
#define BTRFS_MAGIC 0x4D5F53665248425FULL
#define BTRFS_MAGIC_PARTIAL 0x4D5F536652484221ULL
#define BTRFS_MAX_MIRRORS 3
#define BTRFS_MAX_LEVEL 8
#define BTRFS_COMPAT_EXTENT_TREE_V0 
#define BTRFS_ROOT_TREE_OBJECTID 1ULL
#define BTRFS_EXTENT_TREE_OBJECTID 2ULL
#define BTRFS_CHUNK_TREE_OBJECTID 3ULL
#define BTRFS_DEV_TREE_OBJECTID 4ULL
#define BTRFS_FS_TREE_OBJECTID 5ULL
#define BTRFS_ROOT_TREE_DIR_OBJECTID 6ULL
#define BTRFS_CSUM_TREE_OBJECTID 7ULL
#define BTRFS_QUOTA_TREE_OBJECTID 8ULL
#define BTRFS_UUID_TREE_OBJECTID 9ULL
#define BTRFS_FREE_SPACE_TREE_OBJECTID 10ULL
#define BTRFS_DEV_STATS_OBJECTID 0ULL
#define BTRFS_BALANCE_OBJECTID -4ULL
#define BTRFS_ORPHAN_OBJECTID -5ULL
#define BTRFS_TREE_LOG_OBJECTID -6ULL
#define BTRFS_TREE_LOG_FIXUP_OBJECTID -7ULL
#define BTRFS_TREE_RELOC_OBJECTID -8ULL
#define BTRFS_DATA_RELOC_TREE_OBJECTID -9ULL
#define BTRFS_EXTENT_CSUM_OBJECTID -10ULL
#define BTRFS_FREE_SPACE_OBJECTID -11ULL
#define BTRFS_FREE_INO_OBJECTID -12ULL
#define BTRFS_MULTIPLE_OBJECTIDS -255ULL
#define BTRFS_FIRST_FREE_OBJECTID 256ULL
#define BTRFS_LAST_FREE_OBJECTID -256ULL
#define BTRFS_FIRST_CHUNK_TREE_OBJECTID 256ULL
#define BTRFS_DEV_ITEMS_OBJECTID 1ULL
#define BTRFS_EMPTY_SUBVOL_DIR_OBJECTID 2ULL
#define BTRFS_MAX_METADATA_BLOCKSIZE 65536
#define BTRFS_NAME_LEN 255
#define BTRFS_LINK_MAX 65535U
#define BTRFS_CSUM_SIZE 32
#define BTRFS_CSUM_TYPE_CRC32 0
#define BTRFS_CRC32_SIZE 4
#define BTRFS_EMPTY_DIR_SIZE 0
#define BTRFS_FT_UNKNOWN 0
#define BTRFS_FT_REG_FILE 1
#define BTRFS_FT_DIR 2
#define BTRFS_FT_CHRDEV 3
#define BTRFS_FT_BLKDEV 4
#define BTRFS_FT_FIFO 5
#define BTRFS_FT_SOCK 6
#define BTRFS_FT_SYMLINK 7
#define BTRFS_FT_XATTR 8
#define BTRFS_FT_MAX 9
#define BTRFS_ROOT_SUBVOL_RDONLY (1ULL << 0)
#define BTRFS_UUID_SIZE 16
#define BTRFS_FREE_SPACE_EXTENT 1
#define BTRFS_FREE_SPACE_BITMAP 2
#define BTRFS_HEADER_FLAG_WRITTEN (1ULL << 0)
#define BTRFS_HEADER_FLAG_RELOC (1ULL << 1)
#define BTRFS_SUPER_FLAG_SEEDING (1ULL << 32)
#define BTRFS_SUPER_FLAG_METADUMP (1ULL << 33)
#define BTRFS_SUPER_FLAG_METADUMP_V2 (1ULL << 34)
#define BTRFS_SUPER_FLAG_CHANGING_FSID (1ULL << 35)
#define BTRFS_BACKREF_REV_MAX 256
#define BTRFS_BACKREF_REV_SHIFT 56
#define BTRFS_BACKREF_REV_MASK (((u64)BTRFS_BACKREF_REV_MAX - 1) << BTRFS_BACKREF_REV_SHIFT)
#define BTRFS_OLD_BACKREF_REV 0
#define BTRFS_MIXED_BACKREF_REV 1
#define __BTRFS_LEAF_DATA_SIZE(bs) ((bs) - sizeof(struct btrfs_header))
#define BTRFS_LEAF_DATA_SIZE(fs_info) (__BTRFS_LEAF_DATA_SIZE(fs_info->nodesize))
#define BTRFS_SYSTEM_CHUNK_ARRAY_SIZE 2048
#define BTRFS_LABEL_SIZE 256
#define BTRFS_NUM_BACKUP_ROOTS 4
#define BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE (1ULL << 0)
#define BTRFS_FEATURE_COMPAT_RO_FREE_SPACE_TREE_VALID (1ULL << 1)
#define BTRFS_FEATURE_INCOMPAT_MIXED_BACKREF (1ULL << 0)
#define BTRFS_FEATURE_INCOMPAT_DEFAULT_SUBVOL (1ULL << 1)
#define BTRFS_FEATURE_INCOMPAT_MIXED_GROUPS (1ULL << 2)
#define BTRFS_FEATURE_INCOMPAT_COMPRESS_LZO (1ULL << 3)
#define BTRFS_FEATURE_INCOMPAT_COMPRESS_ZSTD (1ULL << 4)
#define BTRFS_FEATURE_INCOMPAT_BIG_METADATA (1ULL << 5)
#define BTRFS_FEATURE_INCOMPAT_EXTENDED_IREF (1ULL << 6)
#define BTRFS_FEATURE_INCOMPAT_RAID56 (1ULL << 7)
#define BTRFS_FEATURE_INCOMPAT_SKINNY_METADATA (1ULL << 8)
#define BTRFS_FEATURE_INCOMPAT_NO_HOLES (1ULL << 9)
#define BTRFS_FEATURE_COMPAT_SUPP 0ULL
#define BTRFS_FEATURE_COMPAT_RO_SUPP 0ULL
#define BTRFS_FEATURE_INCOMPAT_SUPP (BTRFS_FEATURE_INCOMPAT_MIXED_BACKREF | BTRFS_FEATURE_INCOMPAT_DEFAULT_SUBVOL | BTRFS_FEATURE_INCOMPAT_COMPRESS_LZO | BTRFS_FEATURE_INCOMPAT_COMPRESS_ZSTD | BTRFS_FEATURE_INCOMPAT_BIG_METADATA | BTRFS_FEATURE_INCOMPAT_EXTENDED_IREF | BTRFS_FEATURE_INCOMPAT_RAID56 | BTRFS_FEATURE_INCOMPAT_MIXED_GROUPS | BTRFS_FEATURE_INCOMPAT_SKINNY_METADATA | BTRFS_FEATURE_INCOMPAT_NO_HOLES)
#if 0
#endif
#define BTRFS_MAX_EXTENT_ITEM_SIZE(r) ((BTRFS_LEAF_DATA_SIZE(r->fs_info) >> 4) - sizeof(struct btrfs_item))
#define BTRFS_MAX_EXTENT_SIZE SZ_128M
#define BTRFS_EXTENT_FLAG_DATA (1ULL << 0)
#define BTRFS_EXTENT_FLAG_TREE_BLOCK (1ULL << 1)
#define BTRFS_BLOCK_FLAG_FULL_BACKREF (1ULL << 8)
#define BTRFS_FILE_EXTENT_INLINE 0
#define BTRFS_FILE_EXTENT_REG 1
#define BTRFS_FILE_EXTENT_PREALLOC 2
#define BTRFS_BLOCK_RESERVED_1M_FOR_SUPER ((u64)SZ_1M)
#define BTRFS_BLOCK_GROUP_DATA (1ULL << 0)
#define BTRFS_BLOCK_GROUP_SYSTEM (1ULL << 1)
#define BTRFS_BLOCK_GROUP_METADATA (1ULL << 2)
#define BTRFS_BLOCK_GROUP_RAID0 (1ULL << 3)
#define BTRFS_BLOCK_GROUP_RAID1 (1ULL << 4)
#define BTRFS_BLOCK_GROUP_DUP (1ULL << 5)
#define BTRFS_BLOCK_GROUP_RAID10 (1ULL << 6)
#define BTRFS_BLOCK_GROUP_RAID5 (1ULL << 7)
#define BTRFS_BLOCK_GROUP_RAID6 (1ULL << 8)
#define BTRFS_BLOCK_GROUP_RESERVED BTRFS_AVAIL_ALLOC_BIT_SINGLE
#define BTRFS_NR_RAID_TYPES 7
#define BTRFS_BLOCK_GROUP_TYPE_MASK (BTRFS_BLOCK_GROUP_DATA | BTRFS_BLOCK_GROUP_SYSTEM | BTRFS_BLOCK_GROUP_METADATA)
#define BTRFS_BLOCK_GROUP_PROFILE_MASK (BTRFS_BLOCK_GROUP_RAID0 | BTRFS_BLOCK_GROUP_RAID1 | BTRFS_BLOCK_GROUP_RAID5 | BTRFS_BLOCK_GROUP_RAID6 | BTRFS_BLOCK_GROUP_DUP | BTRFS_BLOCK_GROUP_RAID10)
#define BTRFS_AVAIL_ALLOC_BIT_SINGLE (1ULL << 48)
#define BTRFS_SPACE_INFO_GLOBAL_RSV (1ULL << 49)
#define BTRFS_QGROUP_LEVEL_SHIFT 48
#define BTRFS_QGROUP_STATUS_FLAG_ON (1ULL << 0)
#define BTRFS_QGROUP_STATUS_FLAG_RESCAN (1ULL << 1)
#define BTRFS_QGROUP_STATUS_FLAG_INCONSISTENT (1ULL << 2)
#define BTRFS_FREE_SPACE_USING_BITMAPS (1ULL << 0)
#define BTRFS_QGROUP_LIMIT_MAX_RFER (1ULL << 0)
#define BTRFS_QGROUP_LIMIT_MAX_EXCL (1ULL << 1)
#define BTRFS_QGROUP_LIMIT_RSV_RFER (1ULL << 2)
#define BTRFS_QGROUP_LIMIT_RSV_EXCL (1ULL << 3)
#define BTRFS_QGROUP_LIMIT_RFER_CMPR (1ULL << 4)
#define BTRFS_QGROUP_LIMIT_EXCL_CMPR (1ULL << 5)
#define BTRFS_FILE_EXTENT_INLINE_DATA_START (offsetof(struct btrfs_file_extent_item, disk_bytenr))
#define BTRFS_INODE_ITEM_KEY 1
#define BTRFS_INODE_REF_KEY 12
#define BTRFS_INODE_EXTREF_KEY 13
#define BTRFS_XATTR_ITEM_KEY 24
#define BTRFS_ORPHAN_ITEM_KEY 48
#define BTRFS_DIR_LOG_ITEM_KEY 60
#define BTRFS_DIR_LOG_INDEX_KEY 72
#define BTRFS_DIR_ITEM_KEY 84
#define BTRFS_DIR_INDEX_KEY 96
#define BTRFS_EXTENT_DATA_KEY 108
#define BTRFS_CSUM_ITEM_KEY 120
#define BTRFS_EXTENT_CSUM_KEY 128
#define BTRFS_ROOT_ITEM_KEY 132
#define BTRFS_ROOT_BACKREF_KEY 144
#define BTRFS_ROOT_REF_KEY 156
#define BTRFS_EXTENT_ITEM_KEY 168
#define BTRFS_METADATA_ITEM_KEY 169
#define BTRFS_TREE_BLOCK_REF_KEY 176
#define BTRFS_EXTENT_DATA_REF_KEY 178
#define BTRFS_EXTENT_REF_V0_KEY 180
#define BTRFS_SHARED_BLOCK_REF_KEY 182
#define BTRFS_SHARED_DATA_REF_KEY 184
#define BTRFS_BLOCK_GROUP_ITEM_KEY 192
#define BTRFS_FREE_SPACE_INFO_KEY 198
#define BTRFS_FREE_SPACE_EXTENT_KEY 199
#define BTRFS_FREE_SPACE_BITMAP_KEY 200
#define BTRFS_DEV_EXTENT_KEY 204
#define BTRFS_DEV_ITEM_KEY 216
#define BTRFS_CHUNK_ITEM_KEY 228
#define BTRFS_BALANCE_ITEM_KEY 248
#define BTRFS_QGROUP_STATUS_KEY 240
#define BTRFS_QGROUP_INFO_KEY 242
#define BTRFS_QGROUP_LIMIT_KEY 244
#define BTRFS_QGROUP_RELATION_KEY 246
#define BTRFS_BALANCE_ITEM_KEY 248
#define BTRFS_TEMPORARY_ITEM_KEY 248
#define BTRFS_DEV_STATS_KEY 249
#define BTRFS_PERSISTENT_ITEM_KEY 249
#define BTRFS_DEV_REPLACE_KEY 250
#if BTRFS_UUID_SIZE != 16
#error "UUID items require BTRFS_UUID_SIZE == 16!"
#endif
#define BTRFS_UUID_KEY_SUBVOL 251
#define BTRFS_UUID_KEY_RECEIVED_SUBVOL 252
#define BTRFS_STRING_ITEM_KEY 253
#define BTRFS_INODE_NODATASUM (1 << 0)
#define BTRFS_INODE_NODATACOW (1 << 1)
#define BTRFS_INODE_READONLY (1 << 2)
#define BTRFS_INODE_NOCOMPRESS (1 << 3)
#define BTRFS_INODE_PREALLOC (1 << 4)
#define BTRFS_INODE_SYNC (1 << 5)
#define BTRFS_INODE_IMMUTABLE (1 << 6)
#define BTRFS_INODE_APPEND (1 << 7)
#define BTRFS_INODE_NODUMP (1 << 8)
#define BTRFS_INODE_NOATIME (1 << 9)
#define BTRFS_INODE_DIRSYNC (1 << 10)
#define BTRFS_INODE_COMPRESS (1 << 11)
#define read_eb_member(eb,ptr,type,member,result) ( read_extent_buffer(eb, (char *)(result), ((unsigned long)(ptr)) + offsetof(type, member), sizeof(((type *)0)->member)))
#define write_eb_member(eb,ptr,type,member,result) ( write_extent_buffer(eb, (char *)(result), ((unsigned long)(ptr)) + offsetof(type, member), sizeof(((type *)0)->member)))
#define BTRFS_SETGET_HEADER_FUNCS(name,type,member,bits) static inline u ##bits btrfs_ ##name(const struct extent_buffer *eb) { const struct btrfs_header *h = (struct btrfs_header *)eb->data; return le ##bits ##_to_cpu(h->member); } static inline void btrfs_set_ ##name(struct extent_buffer *eb, u ##bits val) { struct btrfs_header *h = (struct btrfs_header *)eb->data; h->member = cpu_to_le ##bits(val); }
#define BTRFS_SETGET_FUNCS(name,type,member,bits) static inline u ##bits btrfs_ ##name(const struct extent_buffer *eb, const type *s) { unsigned long offset = (unsigned long)s; const type *p = (type *) (eb->data + offset); return get_unaligned_le ##bits(&p->member); } static inline void btrfs_set_ ##name(struct extent_buffer *eb, type *s, u ##bits val) { unsigned long offset = (unsigned long)s; type *p = (type *) (eb->data + offset); put_unaligned_le ##bits(val, &p->member); }
#define BTRFS_SETGET_STACK_FUNCS(name,type,member,bits) static inline u ##bits btrfs_ ##name(const type *s) { return le ##bits ##_to_cpu(s->member); } static inline void btrfs_set_ ##name(type *s, u ##bits val) { s->member = cpu_to_le ##bits(val); }
#define btrfs_fs_incompat(fs_info,opt) __btrfs_fs_incompat((fs_info), BTRFS_FEATURE_INCOMPAT_ ##opt)
#define btrfs_fs_compat_ro(fs_info,opt) __btrfs_fs_compat_ro((fs_info), BTRFS_FEATURE_COMPAT_RO_ ##opt)
#define btrfs_item_ptr(leaf,slot,type) ((type *)(btrfs_leaf_data(leaf) + btrfs_item_offset_nr(leaf, slot)))
#define btrfs_item_ptr_offset(leaf,slot) ((unsigned long)(btrfs_leaf_data(leaf) + btrfs_item_offset_nr(leaf, slot)))
#endif
