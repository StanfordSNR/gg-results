// GGHASH:Vy_GMvt5rEcT4Vz.T89irF5b4y8YLXMkkpIGg5btqWyE00004461
#ifndef _CODA_HEADER_
#define _CODA_HEADER_ 
#if defined(__NetBSD__) || ((defined(DJGPP) || defined(__CYGWIN32__)) && !defined(KERNEL))
#include <sys/types.h>
#endif
#ifndef CODA_MAXSYMLINKS
#define CODA_MAXSYMLINKS 10
#endif
#if defined(DJGPP) || defined(__CYGWIN32__)
#ifdef KERNEL
#ifdef DOS
#else
#endif
#define __inline__ 
#else
#include <sys/time.h>
#endif
#endif
#if defined(__linux__)
#include <linux/time.h>
#define cdev_t u_quad_t
#if !defined(_UQUAD_T_) && (!defined(__GLIBC__) || __GLIBC__ < 2)
#define _UQUAD_T_ 1
#endif
#else
#define cdev_t dev_t
#endif
#ifdef __CYGWIN32__
#endif
#ifndef __BIT_TYPES_DEFINED__
#define __BIT_TYPES_DEFINED__ 
#endif
#define CODA_MAXNAMLEN 255
#define CODA_MAXPATHLEN 1024
#define CODA_MAXSYMLINK 10
#define C_O_READ 0x001
#define C_O_WRITE 0x002
#define C_O_TRUNC 0x010
#define C_O_EXCL 0x100
#define C_O_CREAT 0x200
#define C_M_READ 00400
#define C_M_WRITE 00200
#define C_A_C_OK 8
#define C_A_R_OK 4
#define C_A_W_OK 2
#define C_A_X_OK 1
#define C_A_F_OK 0
#ifndef _VENUS_DIRENT_T_
#define _VENUS_DIRENT_T_ 1
#undef DIRSIZ
#define DIRSIZ(dp) ((sizeof (struct venus_dirent) - (CODA_MAXNAMLEN+1)) + (((dp)->d_namlen+1 + 3) &~ 3))
#define CDT_UNKNOWN 0
#define CDT_FIFO 1
#define CDT_CHR 2
#define CDT_DIR 4
#define CDT_BLK 6
#define CDT_REG 8
#define CDT_LNK 10
#define CDT_SOCK 12
#define CDT_WHT 14
#define IFTOCDT(mode) (((mode) & 0170000) >> 12)
#define CDTTOIF(dirtype) ((dirtype) << 12)
#endif
#ifndef _VUID_T_
#define _VUID_T_ 
#endif
#define coda_f2i(fid) (fid ? (fid->opaque[3] ^ (fid->opaque[2]<<10) ^ (fid->opaque[1]<<20) ^ fid->opaque[0]) : 0)
#ifndef _VENUS_VATTR_T_
#define _VENUS_VATTR_T_ 
#endif
#define CODA_ROOT 2
#define CODA_OPEN_BY_FD 3
#define CODA_OPEN 4
#define CODA_CLOSE 5
#define CODA_IOCTL 6
#define CODA_GETATTR 7
#define CODA_SETATTR 8
#define CODA_ACCESS 9
#define CODA_LOOKUP 10
#define CODA_CREATE 11
#define CODA_REMOVE 12
#define CODA_LINK 13
#define CODA_RENAME 14
#define CODA_MKDIR 15
#define CODA_RMDIR 16
#define CODA_SYMLINK 18
#define CODA_READLINK 19
#define CODA_FSYNC 20
#define CODA_VGET 22
#define CODA_SIGNAL 23
#define CODA_REPLACE 24
#define CODA_FLUSH 25
#define CODA_PURGEUSER 26
#define CODA_ZAPFILE 27
#define CODA_ZAPDIR 28
#define CODA_PURGEFID 30
#define CODA_OPEN_BY_PATH 31
#define CODA_RESOLVE 32
#define CODA_REINTEGRATE 33
#define CODA_STATFS 34
#define CODA_STORE 35
#define CODA_RELEASE 36
#define CODA_NCALLS 37
#define DOWNCALL(opcode) (opcode >= CODA_REPLACE && opcode <= CODA_PURGEFID)
#define VC_MAXDATASIZE 8192
#define VC_MAXMSGSIZE sizeof(union inputArgs)+sizeof(union outputArgs) + VC_MAXDATASIZE
#define CIOC_KERNEL_VERSION _IOWR('c', 10, size_t)
#define CODA_KERNEL_VERSION 3
#define CLU_CASE_SENSITIVE 0x01
#define CLU_CASE_INSENSITIVE 0x02
#define CODA_NOCACHE 0x80000000
#define PIOCPARM_MASK 0x0000ffff
#define CODA_CONTROL ".CONTROL"
#define CODA_CONTROLLEN 8
#define CTL_INO -1
#define CODA_MOUNT_VERSION 1
#endif
