// GGHASH:VFHde62Vt2D0RFpceVxWhzq.aVvk4ZdJska.NxXC0cBo00000d5e
#ifndef _SYS_STATVFS_H
# error "Never include <bits/statvfs.h> directly; use <sys/statvfs.h> instead."
#endif
#include <bits/types.h>
#if (__WORDSIZE == 32 && (!defined __SYSCALL_WORDSIZE || __SYSCALL_WORDSIZE == 32))
#define _STATVFSBUF_F_UNUSED 
#endif
#ifndef __USE_FILE_OFFSET64
#else
#endif
#ifdef _STATVFSBUF_F_UNUSED
#endif
#ifdef __USE_LARGEFILE64
#ifdef _STATVFSBUF_F_UNUSED
#endif
#endif
#define ST_RDONLY ST_RDONLY
#define ST_NOSUID ST_NOSUID
#ifdef __USE_GNU
#define ST_NODEV ST_NODEV
#define ST_NOEXEC ST_NOEXEC
#define ST_SYNCHRONOUS ST_SYNCHRONOUS
#define ST_MANDLOCK ST_MANDLOCK
#define ST_WRITE ST_WRITE
#define ST_APPEND ST_APPEND
#define ST_IMMUTABLE ST_IMMUTABLE
#define ST_NOATIME ST_NOATIME
#define ST_NODIRATIME ST_NODIRATIME
#define ST_RELATIME ST_RELATIME
#endif
