// GGHASH:Vg9jQvvSweFAF_1J3UbzL4DFlQCahX6PieAUSL589zOU00004671
#ifndef _LINUX_NILFS2_ONDISK_H
#define _LINUX_NILFS2_ONDISK_H 
#include <linux/types.h>
#include <linux/magic.h>
#define NILFS_INODE_BMAP_SIZE 7
#define i_device_code i_bmap[0]
#define NILFS_MIN_INODE_SIZE 128
#define NILFS_SR_MDT_OFFSET(inode_size,i) ((unsigned long)&((struct nilfs_super_root *)0)->sr_dat + (inode_size) * (i))
#define NILFS_SR_DAT_OFFSET(inode_size) NILFS_SR_MDT_OFFSET(inode_size, 0)
#define NILFS_SR_CPFILE_OFFSET(inode_size) NILFS_SR_MDT_OFFSET(inode_size, 1)
#define NILFS_SR_SUFILE_OFFSET(inode_size) NILFS_SR_MDT_OFFSET(inode_size, 2)
#define NILFS_SR_BYTES(inode_size) NILFS_SR_MDT_OFFSET(inode_size, 3)
#define NILFS_DFL_MAX_MNT_COUNT 50
#define NILFS_VALID_FS 0x0001
#define NILFS_ERROR_FS 0x0002
#define NILFS_RESIZE_FS 0x0004
#define NILFS_MOUNT_ERROR_MODE 0x0070
#define NILFS_MOUNT_ERRORS_CONT 0x0010
#define NILFS_MOUNT_ERRORS_RO 0x0020
#define NILFS_MOUNT_ERRORS_PANIC 0x0040
#define NILFS_MOUNT_BARRIER 0x1000
#define NILFS_MOUNT_STRICT_ORDER 0x2000
#define NILFS_MOUNT_NORECOVERY 0x4000
#define NILFS_MOUNT_DISCARD 0x8000
#define NILFS_OS_LINUX 0
#define NILFS_CURRENT_REV 2
#define NILFS_MINOR_REV 0
#define NILFS_MIN_SUPP_REV 2
#define NILFS_FEATURE_COMPAT_RO_BLOCK_COUNT 0x00000001ULL
#define NILFS_FEATURE_COMPAT_SUPP 0ULL
#define NILFS_FEATURE_COMPAT_RO_SUPP NILFS_FEATURE_COMPAT_RO_BLOCK_COUNT
#define NILFS_FEATURE_INCOMPAT_SUPP 0ULL
#define NILFS_SB_BYTES ((long)&((struct nilfs_super_block *)0)->s_reserved)
#define NILFS_ROOT_INO 2
#define NILFS_DAT_INO 3
#define NILFS_CPFILE_INO 4
#define NILFS_SUFILE_INO 5
#define NILFS_IFILE_INO 6
#define NILFS_ATIME_INO 7
#define NILFS_XATTR_INO 8
#define NILFS_SKETCH_INO 10
#define NILFS_USER_INO 11
#define NILFS_SB_OFFSET_BYTES 1024
#define NILFS_SEG_MIN_BLOCKS 16
#define NILFS_PSEG_MIN_BLOCKS 2
#define NILFS_MIN_NRSVSEGS 8
#define NILFS_ROOT_METADATA_FILE(ino) ((ino) >= NILFS_DAT_INO && (ino) <= NILFS_SUFILE_INO)
#define NILFS_SB2_OFFSET_BYTES(devsize) ((((devsize) >> 12) - 1) << 12)
#define NILFS_LINK_MAX 32000
#define NILFS_NAME_LEN 255
#define NILFS_MIN_BLOCK_SIZE 1024
#define NILFS_MAX_BLOCK_SIZE 65536
#define NILFS_DIR_PAD 8
#define NILFS_DIR_ROUND (NILFS_DIR_PAD - 1)
#define NILFS_DIR_REC_LEN(name_len) (((name_len) + 12 + NILFS_DIR_ROUND) & ~NILFS_DIR_ROUND)
#define NILFS_MAX_REC_LEN ((1 << 16) - 1)
#define NILFS_SEGSUM_MAGIC 0x1eaffa11
#define NILFS_SS_LOGBGN 0x0001
#define NILFS_SS_LOGEND 0x0002
#define NILFS_SS_SR 0x0004
#define NILFS_SS_SYNDT 0x0008
#define NILFS_SS_GC 0x0010
#define NILFS_BTREE_NODE_ROOT 0x01
#define NILFS_BTREE_LEVEL_DATA 0
#define NILFS_BTREE_LEVEL_NODE_MIN (NILFS_BTREE_LEVEL_DATA + 1)
#define NILFS_BTREE_LEVEL_MAX 14
#define NILFS_MIN_DAT_ENTRY_SIZE 32
#define NILFS_MIN_CHECKPOINT_SIZE (64 + NILFS_MIN_INODE_SIZE)
#define NILFS_CHECKPOINT_FNS(flag,name) static __inline__ void nilfs_checkpoint_set_ ##name(struct nilfs_checkpoint *cp) { cp->cp_flags = cpu_to_le32(le32_to_cpu(cp->cp_flags) | (1UL << NILFS_CHECKPOINT_ ##flag)); } static __inline__ void nilfs_checkpoint_clear_ ##name(struct nilfs_checkpoint *cp) { cp->cp_flags = cpu_to_le32(le32_to_cpu(cp->cp_flags) & ~(1UL << NILFS_CHECKPOINT_ ##flag)); } static __inline__ int nilfs_checkpoint_ ##name(const struct nilfs_checkpoint *cp) { return !!(le32_to_cpu(cp->cp_flags) & (1UL << NILFS_CHECKPOINT_ ##flag)); }
#define NILFS_CPFILE_FIRST_CHECKPOINT_OFFSET ((sizeof(struct nilfs_cpfile_header) + sizeof(struct nilfs_checkpoint) - 1) / sizeof(struct nilfs_checkpoint))
#define NILFS_MIN_SEGMENT_USAGE_SIZE 16
#define NILFS_SEGMENT_USAGE_FNS(flag,name) static __inline__ void nilfs_segment_usage_set_ ##name(struct nilfs_segment_usage *su) { su->su_flags = cpu_to_le32(le32_to_cpu(su->su_flags) | (1UL << NILFS_SEGMENT_USAGE_ ##flag));} static __inline__ void nilfs_segment_usage_clear_ ##name(struct nilfs_segment_usage *su) { su->su_flags = cpu_to_le32(le32_to_cpu(su->su_flags) & ~(1UL << NILFS_SEGMENT_USAGE_ ##flag)); } static __inline__ int nilfs_segment_usage_ ##name(const struct nilfs_segment_usage *su) { return !!(le32_to_cpu(su->su_flags) & (1UL << NILFS_SEGMENT_USAGE_ ##flag)); }
#define NILFS_SUFILE_FIRST_SEGMENT_USAGE_OFFSET ((sizeof(struct nilfs_sufile_header) + sizeof(struct nilfs_segment_usage) - 1) / sizeof(struct nilfs_segment_usage))
#endif
