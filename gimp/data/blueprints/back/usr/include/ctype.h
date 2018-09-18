// GGHASH:ViLXwRaEIQ1l3wUb6HsSdyl8nJLKmXk123uCjEsXEIa000002ad3
#ifndef _CTYPE_H
#define _CTYPE_H 1
#include <features.h>
#include <bits/types.h>
#ifndef _ISbit
# include <endian.h>
# if __BYTE_ORDER == __BIG_ENDIAN
#define _ISbit(bit) (1 << (bit))
# else
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
# endif
#endif
#ifndef __cplusplus
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#elif defined __USE_EXTERN_INLINES
#define __isctype_f(type) __extern_inline int is ##type (int __c) __THROW { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IS ##type; }
#endif
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define __exctype(name) extern int name (int) __THROW
#ifdef __USE_ISOC99
#endif
#ifdef __USE_GNU
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#if !defined __NO_CTYPE
# ifdef __isctype_f
# ifdef __USE_ISOC99
# endif
# elif defined __isctype
#define isalnum(c) __isctype((c), _ISalnum)
#define isalpha(c) __isctype((c), _ISalpha)
#define iscntrl(c) __isctype((c), _IScntrl)
#define isdigit(c) __isctype((c), _ISdigit)
#define islower(c) __isctype((c), _ISlower)
#define isgraph(c) __isctype((c), _ISgraph)
#define isprint(c) __isctype((c), _ISprint)
#define ispunct(c) __isctype((c), _ISpunct)
#define isspace(c) __isctype((c), _ISspace)
#define isupper(c) __isctype((c), _ISupper)
#define isxdigit(c) __isctype((c), _ISxdigit)
# ifdef __USE_ISOC99
#define isblank(c) __isctype((c), _ISblank)
# endif
# endif
# ifdef __USE_EXTERN_INLINES
# endif
# if __GNUC__ >= 2 && defined __OPTIMIZE__ && !defined __cplusplus
#define tolower(c) __tobody (c, tolower, *__ctype_tolower_loc (), (c))
#define toupper(c) __tobody (c, toupper, *__ctype_toupper_loc (), (c))
# endif
# if defined __USE_MISC || defined __USE_XOPEN
#define isascii(c) __isascii (c)
#define toascii(c) __toascii (c)
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
# endif
#endif
#ifdef __USE_XOPEN2K8
# include <bits/types/locale_t.h>
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define __exctype_l(name) extern int name (int, locale_t) __THROW
# if __GNUC__ >= 2 && defined __OPTIMIZE__ && !defined __cplusplus
#define __tolower_l(c,locale) __tobody (c, __tolower_l, (locale)->__ctype_tolower, (c, locale))
#define __toupper_l(c,locale) __tobody (c, __toupper_l, (locale)->__ctype_toupper, (c, locale))
#define tolower_l(c,locale) __tolower_l ((c), (locale))
#define toupper_l(c,locale) __toupper_l ((c), (locale))
# endif
# ifndef __NO_CTYPE
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
# ifdef __USE_MISC
#define __isascii_l(c,l) ((l), __isascii (c))
#define __toascii_l(c,l) ((l), __toascii (c))
# endif
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define islower_l(c,l) __islower_l ((c), (l))
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define isprint_l(c,l) __isprint_l ((c), (l))
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define isspace_l(c,l) __isspace_l ((c), (l))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define isblank_l(c,l) __isblank_l ((c), (l))
# ifdef __USE_MISC
#define isascii_l(c,l) __isascii_l ((c), (l))
#define toascii_l(c,l) __toascii_l ((c), (l))
# endif
# endif
#endif
#endif
