// GGHASH:VfdwxPnYoGBb6ZDL2OxBRonhn.WOGGGiTCmeZsjV4Lvo00000b88
#ifndef _BITS_SYSMACROS_H
#define _BITS_SYSMACROS_H 1
#ifndef _SYS_SYSMACROS_H
# error "Never include <bits/sysmacros.h> directly; use <sys/sysmacros.h> instead."
#endif
#define __SYSMACROS_DECLARE_MAJOR(DECL_TEMPL) DECL_TEMPL(unsigned int, major, (__dev_t __dev))
#define __SYSMACROS_DEFINE_MAJOR(DECL_TEMPL) __SYSMACROS_DECLARE_MAJOR (DECL_TEMPL) { unsigned int __major; __major = ((__dev & (__dev_t) 0x00000000000fff00u) >> 8); __major |= ((__dev & (__dev_t) 0xfffff00000000000u) >> 32); return __major; }
#define __SYSMACROS_DECLARE_MINOR(DECL_TEMPL) DECL_TEMPL(unsigned int, minor, (__dev_t __dev))
#define __SYSMACROS_DEFINE_MINOR(DECL_TEMPL) __SYSMACROS_DECLARE_MINOR (DECL_TEMPL) { unsigned int __minor; __minor = ((__dev & (__dev_t) 0x00000000000000ffu) >> 0); __minor |= ((__dev & (__dev_t) 0x00000ffffff00000u) >> 12); return __minor; }
#define __SYSMACROS_DECLARE_MAKEDEV(DECL_TEMPL) DECL_TEMPL(__dev_t, makedev, (unsigned int __major, unsigned int __minor))
#define __SYSMACROS_DEFINE_MAKEDEV(DECL_TEMPL) __SYSMACROS_DECLARE_MAKEDEV (DECL_TEMPL) { __dev_t __dev; __dev = (((__dev_t) (__major & 0x00000fffu)) << 8); __dev |= (((__dev_t) (__major & 0xfffff000u)) << 32); __dev |= (((__dev_t) (__minor & 0x000000ffu)) << 0); __dev |= (((__dev_t) (__minor & 0xffffff00u)) << 12); return __dev; }
#endif
