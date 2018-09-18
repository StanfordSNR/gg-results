// GGHASH:V5UU6jvOiEZUcpzol9Fq.rl85jWfEzdN0yyNwi25H5kQ00000a89
#ifndef __LESWAPS_H
#define __LESWAPS_H 
#include "LETypes.h"
#define SWAPW(value) LESwaps::swapWord((le_uint16)(value))
#define SWAPL(value) LESwaps::swapLong((le_uint32)(value))
#if (defined(U_IS_BIG_ENDIAN) && U_IS_BIG_ENDIAN) || (defined(BYTE_ORDER) && defined(BIG_ENDIAN) && (BYTE_ORDER == BIG_ENDIAN)) || defined(__BIG_ENDIAN__)
#else
#endif
#if (defined(U_IS_BIG_ENDIAN) && U_IS_BIG_ENDIAN) || (defined(BYTE_ORDER) && defined(BIG_ENDIAN) && (BYTE_ORDER == BIG_ENDIAN)) || defined(__BIG_ENDIAN__)
#else
#endif
#endif
