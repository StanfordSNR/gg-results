// GGHASH:VMnB2R7ecs1uS2ieGSOmGlq4IAC3FzTPt3RYQvthQnP000003817
#ifndef _FCNTL_H
# error "Never use <bits/fcntl-linux.h> directly; include <fcntl.h> instead."
#endif
#ifdef __USE_GNU
# include <bits/types/struct_iovec.h>
#endif
#define O_ACCMODE 0003
#define O_RDONLY 00
#define O_WRONLY 01
#define O_RDWR 02
#ifndef O_CREAT
#define O_CREAT 0100
#endif
#ifndef O_EXCL
#define O_EXCL 0200
#endif
#ifndef O_NOCTTY
#define O_NOCTTY 0400
#endif
#ifndef O_TRUNC
#define O_TRUNC 01000
#endif
#ifndef O_APPEND
#define O_APPEND 02000
#endif
#ifndef O_NONBLOCK
#define O_NONBLOCK 04000
#endif
#ifndef O_NDELAY
#define O_NDELAY O_NONBLOCK
#endif
#ifndef O_SYNC
#define O_SYNC 04010000
#endif
#define O_FSYNC O_SYNC
#ifndef O_ASYNC
#define O_ASYNC 020000
#endif
#ifndef __O_LARGEFILE
#define __O_LARGEFILE 0100000
#endif
#ifndef __O_DIRECTORY
#define __O_DIRECTORY 0200000
#endif
#ifndef __O_NOFOLLOW
#define __O_NOFOLLOW 0400000
#endif
#ifndef __O_CLOEXEC
#define __O_CLOEXEC 02000000
#endif
#ifndef __O_DIRECT
#define __O_DIRECT 040000
#endif
#ifndef __O_NOATIME
#define __O_NOATIME 01000000
#endif
#ifndef __O_PATH
#define __O_PATH 010000000
#endif
#ifndef __O_DSYNC
#define __O_DSYNC 010000
#endif
#ifndef __O_TMPFILE
#define __O_TMPFILE (020000000 | __O_DIRECTORY)
#endif
#ifndef F_GETLK
# ifndef __USE_FILE_OFFSET64
#define F_GETLK 5
#define F_SETLK 6
#define F_SETLKW 7
# else
#define F_GETLK F_GETLK64
#define F_SETLK F_SETLK64
#define F_SETLKW F_SETLKW64
# endif
#endif
#ifndef F_GETLK64
#define F_GETLK64 12
#define F_SETLK64 13
#define F_SETLKW64 14
#endif
#ifdef __USE_GNU
#define F_OFD_GETLK 36
#define F_OFD_SETLK 37
#define F_OFD_SETLKW 38
#endif
#ifdef __USE_LARGEFILE64
#define O_LARGEFILE __O_LARGEFILE
#endif
#ifdef __USE_XOPEN2K8
#define O_DIRECTORY __O_DIRECTORY
#define O_NOFOLLOW __O_NOFOLLOW
#define O_CLOEXEC __O_CLOEXEC
#endif
#ifdef __USE_GNU
#define O_DIRECT __O_DIRECT
#define O_NOATIME __O_NOATIME
#define O_PATH __O_PATH
#define O_TMPFILE __O_TMPFILE
#endif
#if defined __USE_POSIX199309 || defined __USE_UNIX98
#define O_DSYNC __O_DSYNC
# if defined __O_RSYNC
#define O_RSYNC __O_RSYNC
# else
#define O_RSYNC O_SYNC
# endif
#endif
#define F_DUPFD 0
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
#ifndef __F_SETOWN
#define __F_SETOWN 8
#define __F_GETOWN 9
#endif
#if defined __USE_UNIX98 || defined __USE_XOPEN2K8
#define F_SETOWN __F_SETOWN
#define F_GETOWN __F_GETOWN
#endif
#ifndef __F_SETSIG
#define __F_SETSIG 10
#define __F_GETSIG 11
#endif
#ifndef __F_SETOWN_EX
#define __F_SETOWN_EX 15
#define __F_GETOWN_EX 16
#endif
#ifdef __USE_GNU
#define F_SETSIG __F_SETSIG
#define F_GETSIG __F_GETSIG
#define F_SETOWN_EX __F_SETOWN_EX
#define F_GETOWN_EX __F_GETOWN_EX
#endif
#ifdef __USE_GNU
#define F_SETLEASE 1024
#define F_GETLEASE 1025
#define F_NOTIFY 1026
#define F_SETPIPE_SZ 1031
#define F_GETPIPE_SZ 1032
#define F_ADD_SEALS 1033
#define F_GET_SEALS 1034
#define F_GET_RW_HINT 1035
#define F_SET_RW_HINT 1036
#define F_GET_FILE_RW_HINT 1037
#define F_SET_FILE_RW_HINT 1038
#endif
#ifdef __USE_XOPEN2K8
#define F_DUPFD_CLOEXEC 1030
#endif
#define FD_CLOEXEC 1
#ifndef F_RDLCK
#define F_RDLCK 0
#define F_WRLCK 1
#define F_UNLCK 2
#endif
#ifndef F_EXLCK
#define F_EXLCK 4
#define F_SHLCK 8
#endif
#ifdef __USE_MISC
#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_NB 4
#define LOCK_UN 8
#endif
#ifdef __USE_GNU
#define LOCK_MAND 32
#define LOCK_READ 64
#define LOCK_WRITE 128
#define LOCK_RW 192
#endif
#ifdef __USE_GNU
#define DN_ACCESS 0x00000001
#define DN_MODIFY 0x00000002
#define DN_CREATE 0x00000004
#define DN_DELETE 0x00000008
#define DN_RENAME 0x00000010
#define DN_ATTRIB 0x00000020
#define DN_MULTISHOT 0x80000000
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#define F_SEAL_SEAL 0x0001
#define F_SEAL_SHRINK 0x0002
#define F_SEAL_GROW 0x0004
#define F_SEAL_WRITE 0x0008
#endif
#ifdef __USE_GNU
#define RWF_WRITE_LIFE_NOT_SET 0
#define RWH_WRITE_LIFE_NONE 1
#define RWH_WRITE_LIFE_SHORT 2
#define RWH_WRITE_LIFE_MEDIUM 3
#define RWH_WRITE_LIFE_LONG 4
#define RWH_WRITE_LIFE_EXTREME 5
#endif
#ifdef __USE_MISC
#define FAPPEND O_APPEND
#define FFSYNC O_FSYNC
#define FASYNC O_ASYNC
#define FNONBLOCK O_NONBLOCK
#define FNDELAY O_NDELAY
#endif
#ifndef __POSIX_FADV_DONTNEED
#define __POSIX_FADV_DONTNEED 4
#define __POSIX_FADV_NOREUSE 5
#endif
#ifdef __USE_XOPEN2K
#define POSIX_FADV_NORMAL 0
#define POSIX_FADV_RANDOM 1
#define POSIX_FADV_SEQUENTIAL 2
#define POSIX_FADV_WILLNEED 3
#define POSIX_FADV_DONTNEED __POSIX_FADV_DONTNEED
#define POSIX_FADV_NOREUSE __POSIX_FADV_NOREUSE
#endif
#ifdef __USE_GNU
#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define SYNC_FILE_RANGE_WRITE 2
#define SYNC_FILE_RANGE_WAIT_AFTER 4
#define SPLICE_F_MOVE 1
#define SPLICE_F_NONBLOCK 2
#define SPLICE_F_MORE 4
#define SPLICE_F_GIFT 8
# include <linux/falloc.h>
#define MAX_HANDLE_SZ 128
#endif
#ifdef __USE_ATFILE
#define AT_FDCWD -100
#define AT_SYMLINK_NOFOLLOW 0x100
#define AT_REMOVEDIR 0x200
#define AT_SYMLINK_FOLLOW 0x400
# ifdef __USE_GNU
#define AT_NO_AUTOMOUNT 0x800
#define AT_EMPTY_PATH 0x1000
# endif
#define AT_EACCESS 0x200
#endif
#ifdef __USE_GNU
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define fallocate fallocate64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
