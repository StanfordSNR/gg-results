// GGHASH:VShuJOL0EAvIZQFo2nTyiWi4dk.NcG08UWFf1up6pcow000015eb
#ifndef _SYS_MOUNT_H
#define _SYS_MOUNT_H 1
#include <features.h>
#include <sys/ioctl.h>
#define BLOCK_SIZE 1024
#define BLOCK_SIZE_BITS 10
#define MS_RDONLY MS_RDONLY
#define MS_NOSUID MS_NOSUID
#define MS_NODEV MS_NODEV
#define MS_NOEXEC MS_NOEXEC
#define MS_SYNCHRONOUS MS_SYNCHRONOUS
#define MS_REMOUNT MS_REMOUNT
#define MS_MANDLOCK MS_MANDLOCK
#define MS_DIRSYNC MS_DIRSYNC
#define MS_NOATIME MS_NOATIME
#define MS_NODIRATIME MS_NODIRATIME
#define MS_BIND MS_BIND
#define MS_MOVE MS_MOVE
#define MS_REC MS_REC
#define MS_SILENT MS_SILENT
#define MS_POSIXACL MS_POSIXACL
#define MS_UNBINDABLE MS_UNBINDABLE
#define MS_PRIVATE MS_PRIVATE
#define MS_SLAVE MS_SLAVE
#define MS_SHARED MS_SHARED
#define MS_RELATIME MS_RELATIME
#define MS_KERNMOUNT MS_KERNMOUNT
#define MS_I_VERSION MS_I_VERSION
#define MS_STRICTATIME MS_STRICTATIME
#define MS_LAZYTIME MS_LAZYTIME
#define MS_ACTIVE MS_ACTIVE
#define MS_NOUSER MS_NOUSER
#define MS_RMT_MASK (MS_RDONLY|MS_SYNCHRONOUS|MS_MANDLOCK|MS_I_VERSION |MS_LAZYTIME)
#define MS_MGC_VAL 0xc0ed0000
#define MS_MGC_MSK 0xffff0000
#define BLKROSET _IO(0x12, 93)
#define BLKROGET _IO(0x12, 94)
#define BLKRRPART _IO(0x12, 95)
#define BLKGETSIZE _IO(0x12, 96)
#define BLKFLSBUF _IO(0x12, 97)
#define BLKRASET _IO(0x12, 98)
#define BLKRAGET _IO(0x12, 99)
#define BLKFRASET _IO(0x12,100)
#define BLKFRAGET _IO(0x12,101)
#define BLKSECTSET _IO(0x12,102)
#define BLKSECTGET _IO(0x12,103)
#define BLKSSZGET _IO(0x12,104)
#define BLKBSZGET _IOR(0x12,112,size_t)
#define BLKBSZSET _IOW(0x12,113,size_t)
#define BLKGETSIZE64 _IOR(0x12,114,size_t)
#define MNT_FORCE MNT_FORCE
#define MNT_DETACH MNT_DETACH
#define MNT_EXPIRE MNT_EXPIRE
#define UMOUNT_NOFOLLOW UMOUNT_NOFOLLOW
#endif
