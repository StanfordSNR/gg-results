// GGHASH:VTYr7_ED27uur.Bdus.IhJ2gFJ4d_1Z.cvdDKMEWVRjY0000037c
#ifndef _LINUX_PATCHKEY_H_INDIRECT
#error "patchkey.h included directly"
#endif
#ifndef _LINUX_PATCHKEY_H
#define _LINUX_PATCHKEY_H 
# include <endian.h>
#if defined(__BYTE_ORDER)
# if __BYTE_ORDER == __BIG_ENDIAN
#define _PATCHKEY(id) (0xfd00|id)
# elif __BYTE_ORDER == __LITTLE_ENDIAN
#define _PATCHKEY(id) ((id<<8)|0x00fd)
# else
# error "could not determine byte order"
# endif
#endif
#endif
