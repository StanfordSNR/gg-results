// GGHASH:VSG2jOZ5_Blf_DBx3Q7Qsg5TC9AKc.pYpd.dPLyNYG500000625f
#ifndef _BTRFS_CTREE_H_
#define _BTRFS_CTREE_H_ 
#include <linux/btrfs.h>
#include <linux/types.h>
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
#define BTRFS_BTREE_INODE_OBJECTID 1
#define BTRFS_EMPTY_SUBVOL_DIR_OBJECTID 2
#define BTRFS_DEV_REPLACE_DEVID 0ULL
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
#define BTRFS_CSUM_SIZE 32
#define BTRFS_CSUM_TYPE_CRC32 0
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
#define BTRFS_FREE_SPACE_EXTENT 1
#define BTRFS_FREE_SPACE_BITMAP 2
#define BTRFS_HEADER_FLAG_WRITTEN (1ULL << 0)
#define BTRFS_HEADER_FLAG_RELOC (1ULL << 1)
#define BTRFS_SUPER_FLAG_ERROR (1ULL << 2)
#define BTRFS_SUPER_FLAG_SEEDING (1ULL << 32)
#define BTRFS_SUPER_FLAG_METADUMP (1ULL << 33)
#define BTRFS_EXTENT_FLAG_DATA (1ULL << 0)
#define BTRFS_EXTENT_FLAG_TREE_BLOCK (1ULL << 1)
#define BTRFS_BLOCK_FLAG_FULL_BACKREF (1ULL << 8)
#define BTRFS_EXTENT_FLAG_SUPER (1ULL << 48)
#define BTRFS_ROOT_SUBVOL_RDONLY (1ULL << 0)
#define BTRFS_ROOT_SUBVOL_DEAD (1ULL << 48)
#define BTRFS_FILE_EXTENT_INLINE 0
#define BTRFS_FILE_EXTENT_REG 1
#define BTRFS_FILE_EXTENT_PREALLOC 2
#define BTRFS_FILE_EXTENT_TYPES 2
#define BTRFS_DEV_REPLACE_ITEM_CONT_READING_FROM_SRCDEV_MODE_ALWAYS 0
#define BTRFS_DEV_REPLACE_ITEM_CONT_READING_FROM_SRCDEV_MODE_AVOID 1
#define BTRFS_DEV_REPLACE_ITEM_STATE_NEVER_STARTED 0
#define BTRFS_DEV_REPLACE_ITEM_STATE_STARTED 1
#define BTRFS_DEV_REPLACE_ITEM_STATE_SUSPENDED 2
#define BTRFS_DEV_REPLACE_ITEM_STATE_FINISHED 3
#define BTRFS_DEV_REPLACE_ITEM_STATE_CANCELED 4
#define BTRFS_BLOCK_GROUP_DATA (1ULL << 0)
#define BTRFS_BLOCK_GROUP_SYSTEM (1ULL << 1)
#define BTRFS_BLOCK_GROUP_METADATA (1ULL << 2)
#define BTRFS_BLOCK_GROUP_RAID0 (1ULL << 3)
#define BTRFS_BLOCK_GROUP_RAID1 (1ULL << 4)
#define BTRFS_BLOCK_GROUP_DUP (1ULL << 5)
#define BTRFS_BLOCK_GROUP_RAID10 (1ULL << 6)
#define BTRFS_BLOCK_GROUP_RAID5 (1ULL << 7)
#define BTRFS_BLOCK_GROUP_RAID6 (1ULL << 8)
#define BTRFS_BLOCK_GROUP_RESERVED (BTRFS_AVAIL_ALLOC_BIT_SINGLE | BTRFS_SPACE_INFO_GLOBAL_RSV)
#define BTRFS_BLOCK_GROUP_TYPE_MASK (BTRFS_BLOCK_GROUP_DATA | BTRFS_BLOCK_GROUP_SYSTEM | BTRFS_BLOCK_GROUP_METADATA)
#define BTRFS_BLOCK_GROUP_PROFILE_MASK (BTRFS_BLOCK_GROUP_RAID0 | BTRFS_BLOCK_GROUP_RAID1 | BTRFS_BLOCK_GROUP_RAID5 | BTRFS_BLOCK_GROUP_RAID6 | BTRFS_BLOCK_GROUP_DUP | BTRFS_BLOCK_GROUP_RAID10)
#define BTRFS_BLOCK_GROUP_RAID56_MASK (BTRFS_BLOCK_GROUP_RAID5 | BTRFS_BLOCK_GROUP_RAID6)
#define BTRFS_AVAIL_ALLOC_BIT_SINGLE (1ULL << 48)
#define BTRFS_SPACE_INFO_GLOBAL_RSV (1ULL << 49)
#define BTRFS_EXTENDED_PROFILE_MASK (BTRFS_BLOCK_GROUP_PROFILE_MASK | BTRFS_AVAIL_ALLOC_BIT_SINGLE)
#define BTRFS_FREE_SPACE_USING_BITMAPS (1ULL << 0)
#define BTRFS_QGROUP_LEVEL_SHIFT 48
#define BTRFS_QGROUP_STATUS_FLAG_ON (1ULL << 0)
#define BTRFS_QGROUP_STATUS_FLAG_RESCAN (1ULL << 1)
#define BTRFS_QGROUP_STATUS_FLAG_INCONSISTENT (1ULL << 2)
#define BTRFS_QGROUP_STATUS_VERSION 1
#endif
