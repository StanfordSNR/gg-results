// GGHASH:VUQ0RoT8dWcXXn8tpT0M7NGKdcRgLWngpezrSJKZsHho000030c4
#ifndef _DIRENT_H
#define _DIRENT_H 1
#include <features.h>
#include <bits/types.h>
#ifdef __USE_XOPEN
# ifndef __ino_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __ino_t_defined 
# endif
# if defined __USE_LARGEFILE64 && !defined __ino64_t_defined
#define __ino64_t_defined 
# endif
#endif
#include <bits/dirent.h>
#if defined __USE_MISC && !defined d_fileno
#define d_ino d_fileno
#endif
#ifdef _DIRENT_HAVE_D_NAMLEN
#define _D_EXACT_NAMLEN(d) ((d)->d_namlen)
#define _D_ALLOC_NAMLEN(d) (_D_EXACT_NAMLEN (d) + 1)
#else
#define _D_EXACT_NAMLEN(d) (strlen ((d)->d_name))
# ifdef _DIRENT_HAVE_D_RECLEN
#define _D_ALLOC_NAMLEN(d) (((char *) (d) + (d)->d_reclen) - &(d)->d_name[0])
# else
#define _D_ALLOC_NAMLEN(d) (sizeof (d)->d_name > 1 ? sizeof (d)->d_name : _D_EXACT_NAMLEN (d) + 1)
# endif
#endif
#ifdef __USE_MISC
#define DT_UNKNOWN DT_UNKNOWN
#define DT_FIFO DT_FIFO
#define DT_CHR DT_CHR
#define DT_DIR DT_DIR
#define DT_BLK DT_BLK
#define DT_REG DT_REG
#define DT_LNK DT_LNK
#define DT_SOCK DT_SOCK
#define DT_WHT DT_WHT
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define DTTOIF(dirtype) ((dirtype) << 12)
#endif
#ifdef __USE_XOPEN2K8
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define readdir readdir64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_POSIX
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define readdir_r readdir64_r
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#if defined __USE_MISC || defined __USE_XOPEN
# include <bits/types.h>
#endif
#ifdef __USE_XOPEN2K8
# if defined __OPTIMIZE__ && defined _DIR_dirfd
#define dirfd(dirp) _DIR_dirfd (dirp)
# endif
# ifdef __USE_MISC
# ifndef MAXNAMLEN
# include <bits/posix1_lim.h>
# ifdef NAME_MAX
#define MAXNAMLEN NAME_MAX
# else
#define MAXNAMLEN 255
# endif
# endif
# endif
#define __need_size_t 
# include <stddef.h>
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define scandir scandir64
# endif
# endif
# if defined __USE_GNU && defined __USE_LARGEFILE64
# endif
# ifdef __USE_GNU
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define scandirat scandirat64
# endif
# endif
# endif
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define alphasort alphasort64
# endif
# endif
# if defined __USE_GNU && defined __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_MISC
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define getdirentries getdirentries64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#ifdef __USE_GNU
# ifndef __USE_FILE_OFFSET64
# else
# ifdef __REDIRECT
# else
#define versionsort versionsort64
# endif
# endif
# ifdef __USE_LARGEFILE64
# endif
#endif
#endif
