// GGHASH:V5IfhiGq8s8hppse0mLbspjZsuTlIAV3rNUKGEtrVMdo00000787
#undef _LARGEFILE_SOURCE
#undef _FILE_OFFSET_BITS
#define _LARGEFILE_SOURCE 
#define _FILE_OFFSET_BITS 64
#if defined(__PPC__) && !defined(__powerpc__)
#define __powerpc__ 1
#endif
#define GCRYPT_NO_DEPRECATED 1
#define HAVE_MEMMOVE 1
#define DISK_CACHE_STATS 0
#define BOOT_TIME_STATS 0
#define QUIET_BOOT 1
#define MINILZO_CFG_SKIP_LZO_PTR 1
#define MINILZO_CFG_SKIP_LZO_UTIL 1
#define MINILZO_CFG_SKIP_LZO_STRING 1
#define MINILZO_CFG_SKIP_LZO_INIT 1
#define MINILZO_CFG_SKIP_LZO1X_1_COMPRESS 1
#define MINILZO_CFG_SKIP_LZO1X_DECOMPRESS 1
#if defined (GRUB_BUILD)
#undef ENABLE_NLS
#define BUILD_SIZEOF_LONG 8
#define BUILD_SIZEOF_VOID_P 8
#if defined __APPLE__
# if defined __BIG_ENDIAN__
#define BUILD_WORDS_BIGENDIAN 1
# else
#define BUILD_WORDS_BIGENDIAN 0
# endif
#else
#define BUILD_WORDS_BIGENDIAN 0
#endif
#elif defined (GRUB_UTIL) || !defined (GRUB_MACHINE)
#include <config-util.h>
#else
#define HAVE_FONT_SOURCE 1
#define HAVE_ASM_USCORE 0
#define BSS_START_SYMBOL __bss_start
#define END_SYMBOL end
#define PACKAGE "grub"
#define VERSION "2.02"
#define PACKAGE_STRING "GRUB 2.02-2ubuntu8.4"
#define PACKAGE_VERSION "2.02-2ubuntu8.4"
#define PACKAGE_NAME "GRUB"
#define PACKAGE_BUGREPORT "bug-grub@gnu.org"
#define GRUB_TARGET_CPU "i386"
#define GRUB_PLATFORM "pc"
#define RE_ENABLE_I18N 1
#define _GNU_SOURCE 1
#endif