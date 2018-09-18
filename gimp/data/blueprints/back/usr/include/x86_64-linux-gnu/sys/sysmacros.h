// GGHASH:VfMrvcTmfVefCyvh..ANo4UoNfzhV.ZSIQlmi.o1jdNg00000fbe
#ifndef _SYS_SYSMACROS_H_OUTER
#ifndef __SYSMACROS_DEPRECATED_INCLUSION
#define _SYS_SYSMACROS_H_OUTER 1
#endif
#undef major
#undef minor
#undef makedev
#ifndef _SYS_SYSMACROS_H
#define _SYS_SYSMACROS_H 1
#include <features.h>
#include <bits/types.h>
#include <bits/sysmacros.h>
#define __SYSMACROS_DM(symbol) __SYSMACROS_DM1 (In the GNU C Library, #symbol is defined\n by <sys/sysmacros.h>. For historical compatibility, it is\n currently defined by <sys/types.h> as well, but we plan to\n remove this soon. To use #symbol, include <sys/sysmacros.h>\n directly. If you did not intend to use a system-defined macro\n #symbol, you should undefine it after including <sys/types.h>.)
#define __SYSMACROS_DM1(...) __glibc_macro_warning (#__VA_ARGS__)
#define __SYSMACROS_DECL_TEMPL(rtype,name,proto) extern rtype gnu_dev_ ##name proto __THROW __attribute_const__;
#define __SYSMACROS_IMPL_TEMPL(rtype,name,proto) __extension__ __extern_inline __attribute_const__ rtype __NTH (gnu_dev_ ##name proto)
#ifdef __USE_EXTERN_INLINES
#endif
#endif
#ifndef __SYSMACROS_NEED_IMPLEMENTATION
#undef __SYSMACROS_DECL_TEMPL
#undef __SYSMACROS_IMPL_TEMPL
#undef __SYSMACROS_DECLARE_MAJOR
#undef __SYSMACROS_DECLARE_MINOR
#undef __SYSMACROS_DECLARE_MAKEDEV
#undef __SYSMACROS_DEFINE_MAJOR
#undef __SYSMACROS_DEFINE_MINOR
#undef __SYSMACROS_DEFINE_MAKEDEV
#endif
#ifdef __SYSMACROS_DEPRECATED_INCLUSION
#define major(dev) __SYSMACROS_DM (major) gnu_dev_major (dev)
#define minor(dev) __SYSMACROS_DM (minor) gnu_dev_minor (dev)
#define makedev(maj,min) __SYSMACROS_DM (makedev) gnu_dev_makedev (maj, min)
#else
#define major(dev) gnu_dev_major (dev)
#define minor(dev) gnu_dev_minor (dev)
#define makedev(maj,min) gnu_dev_makedev (maj, min)
#endif
#endif
