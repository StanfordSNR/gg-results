// GGHASH:VYqJhW.u16PGrbb2SI6AIWvx30z7HGOFwtvPMGd57vhE000011b2
#ifndef _SGXINTRIN_H_INCLUDED
#define _SGXINTRIN_H_INCLUDED 
#ifndef __SGX__
#pragma GCC push_options
#pragma GCC target("sgx")
#define __DISABLE_SGX__ 
#endif
#define __encls_bc(leaf,b,c,retval) __asm__ __volatile__ ("encls\n\t" : "=a" (retval) : "a" (leaf), "b" (b), "c" (c) : "cc")
#define __encls_bcd(leaf,b,c,d,retval) __asm__ __volatile__("encls\n\t" : "=a" (retval) : "a" (leaf), "b" (b), "c" (c), "d" (d) : "cc")
#define __encls_c(leaf,c,retval) __asm__ __volatile__("encls\n\t" : "=a" (retval) : "a" (leaf), "c" (c) : "cc")
#define __encls_edbgrd(leaf,b,c,retval) __asm__ __volatile__("encls\n\t" : "=a" (retval), "=b" (b) : "a" (leaf), "c" (c))
#define __encls_generic(leaf,b,c,d,retval) __asm__ __volatile__("encls\n\t" : "=a" (retval), "=b" (b), "=c" (c), "=d" (d) : "a" (leaf), "b" (b), "c" (c), "d" (d) : "cc")
#define __enclu_bc(leaf,b,c,retval) __asm__ __volatile__("enclu\n\t" : "=a" (retval) : "a" (leaf), "b" (b), "c" (c) : "cc")
#define __enclu_bcd(leaf,b,c,d,retval) __asm__ __volatile__("enclu\n\t" : "=a" (retval) : "a" (leaf), "b" (b), "c" (c), "d" (d) : "cc")
#define __enclu_eenter(leaf,b,c,retval) __asm__ __volatile__("enclu\n\t" : "=a" (retval), "=c" (c) : "a" (leaf), "b" (b), "c" (c) : "cc")
#define __enclu_eexit(leaf,b,c,retval) __asm__ __volatile__("enclu\n\t" : "=a" (retval), "=c" (c) : "a" (leaf), "b" (b) : "cc")
#define __enclu_generic(leaf,b,c,d,retval) __asm__ __volatile__("enclu\n\t" : "=a" (retval), "=b" (b), "=c" (c), "=d" (d) : "a" (leaf), "b" (b), "c" (c), "d" (d) : "cc")
#ifdef __DISABLE_SGX__
#undef __DISABLE_SGX__
#pragma GCC pop_options
#endif
#endif
