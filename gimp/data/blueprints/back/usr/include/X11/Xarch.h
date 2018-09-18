// GGHASH:V5dbFIKf3nWnhg_lqFFDW8hBjxymGYiZbk6QE2sOYEUU00000b87
#ifndef _XARCH_H_
#define _XARCH_H_ 
# ifdef X_BYTE_ORDER
#define X_BIG_ENDIAN 4321
#define X_LITTLE_ENDIAN 1234
# else
# if defined(SVR4) || defined(__SVR4)
# include <sys/types.h>
# include <sys/byteorder.h>
# elif defined(CSRG_BASED)
# if defined(__NetBSD__) || defined(__OpenBSD__)
# include <sys/types.h>
# endif
# include <machine/endian.h>
# elif defined(linux)
# if defined __STRICT_ANSI__
#undef __STRICT_ANSI__
# include <endian.h>
#define __STRICT_ANSI__ 
# else
# include <endian.h>
# endif
# if !defined(LITTLE_ENDIAN) && defined(__LITTLE_ENDIAN)
#define LITTLE_ENDIAN __LITTLE_ENDIAN
# endif
# if !defined(BIG_ENDIAN) && defined(__BIG_ENDIAN)
#define BIG_ENDIAN __BIG_ENDIAN
# endif
# if !defined(PDP_ENDIAN) && defined(__PDP_ENDIAN)
#define PDP_ENDIAN __PDP_ENDIAN
# endif
# if !defined(BYTE_ORDER) && defined(__BYTE_ORDER)
#define BYTE_ORDER __BYTE_ORDER
# endif
# endif
# ifndef BYTE_ORDER
#define LITTLE_ENDIAN 1234
#define BIG_ENDIAN 4321
# if defined(__sun) && defined(__SVR4)
# include <sys/isa_defs.h>
# ifdef _LITTLE_ENDIAN
#define BYTE_ORDER LITTLE_ENDIAN
# endif
# ifdef _BIG_ENDIAN
#define BYTE_ORDER BIG_ENDIAN
# endif
# endif
# endif
#define X_BYTE_ORDER BYTE_ORDER
#define X_BIG_ENDIAN BIG_ENDIAN
#define X_LITTLE_ENDIAN LITTLE_ENDIAN
# endif
#endif
