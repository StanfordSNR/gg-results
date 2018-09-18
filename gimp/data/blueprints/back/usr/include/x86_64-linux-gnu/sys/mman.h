// GGHASH:VPfFbGGUXcOoZHoXIelGiXIsPRfz6m3E1OXu938xCank000015af
#ifndef _SYS_MMAN_H
#define _SYS_MMAN_H 1
#include <features.h>
#include <bits/types.h>
#define __need_size_t 
#include <stddef.h>
#ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
# else
# endif
#define __off_t_defined 
#endif
#ifndef __mode_t_defined
#define __mode_t_defined 
#endif
#include <bits/mman.h>
#define MAP_FAILED ((void *) -1)
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define mmap mmap64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_XOPEN2K
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_GNU
#endif
#endif
