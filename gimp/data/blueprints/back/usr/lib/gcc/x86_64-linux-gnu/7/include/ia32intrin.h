// GGHASH:VE55.QXgiTglw8L0KxCJYXppuJYsArB_Pe5YCaWAyipo00001e89
#ifndef _X86INTRIN_H_INCLUDED
# error "Never use <ia32intrin.h> directly; include <x86intrin.h> instead."
#endif
#ifndef __iamcu__
#ifndef __SSE4_2__
#pragma GCC push_options
#pragma GCC target("sse4.2")
#define __DISABLE_SSE4_2__ 
#endif
#ifdef __DISABLE_SSE4_2__
#undef __DISABLE_SSE4_2__
#pragma GCC pop_options
#endif
#endif
#ifndef __iamcu__
#endif
#ifndef __iamcu__
#endif
#ifdef __x86_64__
#ifndef __SSE4_2__
#pragma GCC push_options
#pragma GCC target("sse4.2")
#define __DISABLE_SSE4_2__ 
#endif
#ifdef __DISABLE_SSE4_2__
#undef __DISABLE_SSE4_2__
#pragma GCC pop_options
#endif
#define _bswap64(a) __bswapq(a)
#define _popcnt64(a) __popcntq(a)
#else
#endif
#ifdef __LP64__
#define _lrotl(a,b) __rolq((a), (b))
#define _lrotr(a,b) __rorq((a), (b))
#else
#define _lrotl(a,b) __rold((a), (b))
#define _lrotr(a,b) __rord((a), (b))
#endif
#define _bit_scan_forward(a) __bsfd(a)
#define _bit_scan_reverse(a) __bsrd(a)
#define _bswap(a) __bswapd(a)
#define _popcnt32(a) __popcntd(a)
#ifndef __iamcu__
#define _rdpmc(a) __rdpmc(a)
#define _rdtscp(a) __rdtscp(a)
#endif
#define _rdtsc() __rdtsc()
#define _rotwl(a,b) __rolw((a), (b))
#define _rotwr(a,b) __rorw((a), (b))
#define _rotl(a,b) __rold((a), (b))
#define _rotr(a,b) __rord((a), (b))
