// GGHASH:VLrr1IzmCLomATItCsPOerko4iyV99Gas4ybdFY6l32g00000d3e
#ifndef __EXIF_LOG_H__
#define __EXIF_LOG_H__ 
#ifdef __cplusplus
#endif
#include <libexif/exif-mem.h>
#include <stdarg.h>
#ifndef NO_VERBOSE_TAG_STRINGS
#ifdef __GNUC__
#endif
#else
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define exif_log(...) do { } while (0)
#elif defined(__GNUC__)
#define exif_log(x...) do { } while (0)
#else
#define exif_log (void)
#endif
#endif
#define EXIF_LOG_NO_MEMORY(l,d,s) exif_log ((l), EXIF_LOG_CODE_NO_MEMORY, (d), "Could not allocate %lu byte(s).", (unsigned long)(s))
#ifdef __cplusplus
#endif
#endif
