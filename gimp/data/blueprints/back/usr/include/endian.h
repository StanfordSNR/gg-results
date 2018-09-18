// GGHASH:VSj6lenPpfZmfm.21lHKvTwTOYtsGvjwt8q_jFCZ3AQM00000c75
#ifndef _ENDIAN_H
#define _ENDIAN_H 1
#include <features.h>
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321
#define __PDP_ENDIAN 3412
#include <bits/endian.h>
#ifndef __FLOAT_WORD_ORDER
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#endif
#ifdef __USE_MISC
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define BIG_ENDIAN __BIG_ENDIAN
#define PDP_ENDIAN __PDP_ENDIAN
#define BYTE_ORDER __BYTE_ORDER
#endif
#if __BYTE_ORDER == __LITTLE_ENDIAN
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#elif __BYTE_ORDER == __BIG_ENDIAN
#define __LONG_LONG_PAIR(HI,LO) HI, LO
#endif
#if defined __USE_MISC && !defined __ASSEMBLER__
# include <bits/byteswap.h>
# include <bits/uintn-identity.h>
# if __BYTE_ORDER == __LITTLE_ENDIAN
#define htobe16(x) __bswap_16 (x)
#define htole16(x) __uint16_identity (x)
#define be16toh(x) __bswap_16 (x)
#define le16toh(x) __uint16_identity (x)
#define htobe32(x) __bswap_32 (x)
#define htole32(x) __uint32_identity (x)
#define be32toh(x) __bswap_32 (x)
#define le32toh(x) __uint32_identity (x)
#define htobe64(x) __bswap_64 (x)
#define htole64(x) __uint64_identity (x)
#define be64toh(x) __bswap_64 (x)
#define le64toh(x) __uint64_identity (x)
# else
#define htobe16(x) __uint16_identity (x)
#define htole16(x) __bswap_16 (x)
#define be16toh(x) __uint16_identity (x)
#define le16toh(x) __bswap_16 (x)
#define htobe32(x) __uint32_identity (x)
#define htole32(x) __bswap_32 (x)
#define be32toh(x) __uint32_identity (x)
#define le32toh(x) __bswap_32 (x)
#define htobe64(x) __uint64_identity (x)
#define htole64(x) __bswap_64 (x)
#define be64toh(x) __uint64_identity (x)
#define le64toh(x) __bswap_64 (x)
# endif
#endif
#endif
