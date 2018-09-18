// GGHASH:V2Ii6ObWTFUFcvC3C9SkFyvrMd2cc0tXfiZFFIIssjXo00002bbd
#ifndef LIBWMF_API_H
#define LIBWMF_API_H 
#include <zlib.h>
#include <libwmf/types.h>
#ifdef __cplusplus
#endif
#ifdef __cplusplus
#endif
#define WMF_ERROR(Z,M) wmf_error (Z,__FILE__,__LINE__,M)
#ifdef DEBUG
#define WMF_DEBUG(Z,M) wmf_debug (Z,__FILE__,__LINE__,M)
#define WMF_ASSERT(Z,M) if (!(M)) wmf_assert (Z,__FILE__,__LINE__)
#else
#define WMF_DEBUG(Z,M) 
#define WMF_ASSERT(Z,M) 
#endif
#define WMF_OPT_ALLOC (1<<0)
#define WMF_OPT_ARGS (1<<1)
#define WMF_OPT_FONTDIRS (1<<2)
#define WMF_OPT_FONTMAP (1<<3)
#define WMF_OPT_SYS_FONTS (1<<4)
#define WMF_OPT_SYS_FONTMAP (1<<5)
#define WMF_OPT_XTRA_FONTS (1<<6)
#define WMF_OPT_XTRA_FONTMAP (1<<7)
#define WMF_OPT_GS_FONTMAP (1<<8)
#define WMF_OPT_WRITE (1<<9)
#define WMF_OPT_FUNCTION (1<<10)
#define WMF_OPT_MODULE (1<<11)
#define WMF_OPT_MODULE_DIRS (1<<12)
#define WMF_OPT_IGNORE_NONFATAL (1<<14)
#define WMF_OPT_NO_ERROR (1<<15)
#define WMF_OPT_NO_DEBUG (1<<16)
#define WMF_OPT_LOG_ERROR (1<<17)
#define WMF_OPT_LOG_DEBUG (1<<18)
#define WMF_OPT_DIAGNOSTICS (1<<19)
#endif
