// GGHASH:VlEPdo5k64rLei5rEBBipxRIp1iF8q5imNjlCVOfBeyQ00001178
#ifndef _LINUX_NFS_H
#define _LINUX_NFS_H 
#include <linux/types.h>
#define NFS_PROGRAM 100003
#define NFS_PORT 2049
#define NFS_MAXDATA 8192
#define NFS_MAXPATHLEN 1024
#define NFS_MAXNAMLEN 255
#define NFS_MAXGROUPS 16
#define NFS_FHSIZE 32
#define NFS_COOKIESIZE 4
#define NFS_FIFO_DEV (-1)
#define NFSMODE_FMT 0170000
#define NFSMODE_DIR 0040000
#define NFSMODE_CHR 0020000
#define NFSMODE_BLK 0060000
#define NFSMODE_REG 0100000
#define NFSMODE_LNK 0120000
#define NFSMODE_SOCK 0140000
#define NFSMODE_FIFO 0010000
#define NFS_MNT_PROGRAM 100005
#define NFS_MNT_VERSION 1
#define NFS_MNT3_VERSION 3
#define NFS_PIPE_DIRNAME "nfs"
#endif
