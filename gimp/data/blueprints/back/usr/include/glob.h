// GGHASH:Va9u2C.MWDtvuPJZzGMnDtmmqqCNTTkQ0Y_LShMD8VBc000019d6
#ifndef _GLOB_H
#define _GLOB_H 1
#include <sys/cdefs.h>
#ifndef __size_t
# if defined __USE_XOPEN || defined __USE_XOPEN2K8
# endif
#else
#undef __size_t
#define __size_t size_t
#endif
#define GLOB_ERR (1 << 0)
#define GLOB_MARK (1 << 1)
#define GLOB_NOSORT (1 << 2)
#define GLOB_DOOFFS (1 << 3)
#define GLOB_NOCHECK (1 << 4)
#define GLOB_APPEND (1 << 5)
#define GLOB_NOESCAPE (1 << 6)
#define GLOB_PERIOD (1 << 7)
#if !defined __USE_POSIX2 || defined __USE_MISC
#define GLOB_MAGCHAR (1 << 8)
#define GLOB_ALTDIRFUNC (1 << 9)
#define GLOB_BRACE (1 << 10)
#define GLOB_NOMAGIC (1 << 11)
#define GLOB_TILDE (1 << 12)
#define GLOB_ONLYDIR (1 << 13)
#define GLOB_TILDE_CHECK (1 << 14)
#define __GLOB_FLAGS (GLOB_ERR|GLOB_MARK|GLOB_NOSORT|GLOB_DOOFFS| GLOB_NOESCAPE|GLOB_NOCHECK|GLOB_APPEND| GLOB_PERIOD|GLOB_ALTDIRFUNC|GLOB_BRACE| GLOB_NOMAGIC|GLOB_TILDE|GLOB_ONLYDIR|GLOB_TILDE_CHECK)
#else
#define __GLOB_FLAGS (GLOB_ERR|GLOB_MARK|GLOB_NOSORT|GLOB_DOOFFS| GLOB_NOESCAPE|GLOB_NOCHECK|GLOB_APPEND| GLOB_PERIOD)
#endif
#define GLOB_NOSPACE 1
#define GLOB_ABORTED 2
#define GLOB_NOMATCH 3
#define GLOB_NOSYS 4
#ifdef __USE_GNU
#define GLOB_ABEND GLOB_ABORTED
#endif
#ifdef __USE_GNU
#endif
#ifdef __USE_GNU
#else
#endif
#ifdef __USE_GNU
#else
#endif
#ifdef __USE_LARGEFILE64
# ifdef __USE_GNU
# endif
# ifdef __USE_GNU
# else
# endif
# ifdef __USE_GNU
# else
# endif
#endif
#if !defined __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_GNU
#endif
#endif
