// GGHASH:VtHKSbMPjyuMJK.cvschMnmw.09zdfkdvhFzUZ.r0D_Y00000918
#ifndef _LINUX_QNX4_FS_H
#define _LINUX_QNX4_FS_H 
#include <linux/types.h>
#include <linux/qnxtypes.h>
#include <linux/magic.h>
#define QNX4_ROOT_INO 1
#define QNX4_MAX_XTNTS_PER_XBLK 60
#define QNX4_FILE_USED 0x01
#define QNX4_FILE_MODIFIED 0x02
#define QNX4_FILE_BUSY 0x04
#define QNX4_FILE_LINK 0x08
#define QNX4_FILE_INODE 0x10
#define QNX4_FILE_FSYSCLEAN 0x20
#define QNX4_I_MAP_SLOTS 8
#define QNX4_Z_MAP_SLOTS 64
#define QNX4_VALID_FS 0x0001
#define QNX4_ERROR_FS 0x0002
#define QNX4_BLOCK_SIZE 0x200
#define QNX4_BLOCK_SIZE_BITS 9
#define QNX4_DIR_ENTRY_SIZE 0x040
#define QNX4_DIR_ENTRY_SIZE_BITS 6
#define QNX4_XBLK_ENTRY_SIZE 0x200
#define QNX4_INODES_PER_BLOCK 0x08
#define QNX4_SHORT_NAME_MAX 16
#define QNX4_NAME_MAX 48
#endif
