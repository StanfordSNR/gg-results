// GGHASH:VfGTF2.cyEu7MUu_j4UySNk4vLyq6Lx4Z.x8K45ua28M00001402
#ifndef XMD_H
#define XMD_H 1
# if defined(__sun) && defined(__SVR4)
# include <sys/isa_defs.h>
# endif
# if defined (_LP64) || defined(__LP64__) || defined(__alpha) || defined(__alpha__) || defined(__ia64__) || defined(ia64) || defined(__sparc64__) || defined(__s390x__) || defined(__amd64__) || defined(amd64) || defined(__powerpc64__)
# if !defined(__ILP32__)
#define LONG64 
# endif
# endif
#define _SIZEOF(x) sz_ ##x
#define SIZEOF(x) _SIZEOF(x)
#define B32 
#define B16 
# ifdef LONG64
# else
# endif
# ifdef LONG64
# else
# endif
#define cvtINT8toInt(val) (val)
#define cvtINT16toInt(val) (val)
#define cvtINT32toInt(val) (val)
#define cvtINT8toShort(val) (val)
#define cvtINT16toShort(val) (val)
#define cvtINT32toShort(val) (val)
#define cvtINT8toLong(val) (val)
#define cvtINT16toLong(val) (val)
#define cvtINT32toLong(val) (val)
#define NEXTPTR(p,t) (((t *)(p)) + 1)
#endif
