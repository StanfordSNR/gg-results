// GGHASH:V7S5wcgxpldywCAy2HXQ4sT6yaIHYkagBlY7K8jI2r7I0000132e
#ifndef _IEEE754_H
#define _IEEE754_H 1
#include <features.h>
#include <endian.h>
#if __BYTE_ORDER == __BIG_ENDIAN
#endif
#if __BYTE_ORDER == __LITTLE_ENDIAN
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
#endif
#if __BYTE_ORDER == __LITTLE_ENDIAN
#endif
#define IEEE754_FLOAT_BIAS 0x7f
#if __BYTE_ORDER == __BIG_ENDIAN
#endif
#if __BYTE_ORDER == __LITTLE_ENDIAN
# if __FLOAT_WORD_ORDER == __BIG_ENDIAN
# else
# endif
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
#else
# if __FLOAT_WORD_ORDER == __BIG_ENDIAN
# else
# endif
#endif
#define IEEE754_DOUBLE_BIAS 0x3ff
#if __BYTE_ORDER == __BIG_ENDIAN
#endif
#if __BYTE_ORDER == __LITTLE_ENDIAN
# if __FLOAT_WORD_ORDER == __BIG_ENDIAN
# else
# endif
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
#endif
#if __BYTE_ORDER == __LITTLE_ENDIAN
# if __FLOAT_WORD_ORDER == __BIG_ENDIAN
# else
# endif
#endif
#define IEEE854_LONG_DOUBLE_BIAS 0x3fff
#endif
