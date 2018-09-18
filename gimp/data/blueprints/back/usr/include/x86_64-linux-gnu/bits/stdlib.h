// GGHASH:VslOItWs92qTAxbMoCs6indO6iqo7aNgWHs8aEgUuIm80000161a
#ifndef _STDLIB_H
# error "Never include <bits/stdlib.h> directly; use <stdlib.h> instead."
#endif
#if defined _LIBC_LIMITS_H_ && defined PATH_MAX
#endif
#define __STDLIB_MB_LEN_MAX 16
#if defined MB_LEN_MAX && MB_LEN_MAX != __STDLIB_MB_LEN_MAX
# error "Assumed value of MB_LEN_MAX wrong"
#endif
