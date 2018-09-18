// GGHASH:Vb8ziXEQ7z1gocgsVucxl9fxo6HZKreQkl8GnkRrYPoA00001955
#ifndef _ISOFS_FS_H
#define _ISOFS_FS_H 
#include <linux/types.h>
#include <linux/magic.h>
#define ISODCL(from,to) (to - from + 1)
#define ISO_VD_PRIMARY 1
#define ISO_VD_SUPPLEMENTARY 2
#define ISO_VD_END 255
#define ISO_STANDARD_ID "CD001"
#define HS_STANDARD_ID "CDROM"
#define ISOFS_BLOCK_BITS 11
#define ISOFS_BLOCK_SIZE 2048
#define ISOFS_BUFFER_SIZE(INODE) ((INODE)->i_sb->s_blocksize)
#define ISOFS_BUFFER_BITS(INODE) ((INODE)->i_sb->s_blocksize_bits)
#endif
