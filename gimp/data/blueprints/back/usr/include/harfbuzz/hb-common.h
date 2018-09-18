// GGHASH:V1dCGULhuMWwOzeIY33ojslnP8tIPXtZhxKRMvAQubvo00003958
#ifndef HB_H_IN
#error "Include <hb.h> instead."
#endif
#ifndef HB_COMMON_H
#define HB_COMMON_H 
#ifndef HB_BEGIN_DECLS
# ifdef __cplusplus
#define HB_BEGIN_DECLS extern "C" {
#define HB_END_DECLS }
# else
#define HB_BEGIN_DECLS 
#define HB_END_DECLS 
# endif
#endif
#if defined (_SVR4) || defined (SVR4) || defined (__OpenBSD__) || defined (_sgi) || defined (__sun) || defined (sun) || defined (__digital__) || defined (__HP_cc)
# include <inttypes.h>
#elif defined (_AIX)
# include <sys/inttypes.h>
#else
# include <stdint.h>
#endif
#define HB_TAG(c1,c2,c3,c4) ((hb_tag_t)((((uint8_t)(c1))<<24)|(((uint8_t)(c2))<<16)|(((uint8_t)(c3))<<8)|((uint8_t)(c4))))
#define HB_UNTAG(tag) ((uint8_t)((tag)>>24)), ((uint8_t)((tag)>>16)), ((uint8_t)((tag)>>8)), ((uint8_t)(tag))
#define HB_TAG_NONE HB_TAG(0,0,0,0)
#define HB_TAG_MAX HB_TAG(0xff,0xff,0xff,0xff)
#define HB_TAG_MAX_SIGNED HB_TAG(0x7f,0xff,0xff,0xff)
#define HB_DIRECTION_IS_VALID(dir) ((((unsigned int) (dir)) & ~3U) == 4)
#define HB_DIRECTION_IS_HORIZONTAL(dir) ((((unsigned int) (dir)) & ~1U) == 4)
#define HB_DIRECTION_IS_VERTICAL(dir) ((((unsigned int) (dir)) & ~1U) == 6)
#define HB_DIRECTION_IS_FORWARD(dir) ((((unsigned int) (dir)) & ~2U) == 4)
#define HB_DIRECTION_IS_BACKWARD(dir) ((((unsigned int) (dir)) & ~2U) == 5)
#define HB_DIRECTION_REVERSE(dir) ((hb_direction_t) (((unsigned int) (dir)) ^ 1))
#define HB_LANGUAGE_INVALID ((hb_language_t) 0)
#endif
