// GGHASH:VfqYi2U8xCTpKQIhsddttPaA6qST28QQbiWKsDKP3pK0000004ae
#ifndef _SYS_VM86_H
#define _SYS_VM86_H 1
#include <features.h>
#ifdef __x86_64__
# error This header is unsupported on x86-64.
#else
# include <asm/vm86.h>
# endif
#endif
