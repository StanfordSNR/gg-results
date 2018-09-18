// GGHASH:VBD_yeTBqQTkXQPO_pIeMhAmfxcSdw7doayUjz1xGnV4000002e0
#ifndef _LINUX_CONST_H
#define _LINUX_CONST_H 
#ifdef __ASSEMBLY__
#define _AC(X,Y) X
#define _AT(T,X) X
#else
#define __AC(X,Y) (X ##Y)
#define _AC(X,Y) __AC(X,Y)
#define _AT(T,X) ((T)(X))
#endif
#define _BITUL(x) (_AC(1,UL) << (x))
#define _BITULL(x) (_AC(1,ULL) << (x))
#endif
