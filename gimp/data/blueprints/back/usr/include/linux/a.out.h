// GGHASH:V00gCx1VOaKFHOv8SREdJZJZ2IZTxsFSlx4BGqaV4J.k00001aec
#ifndef __A_OUT_GNU_H__
#define __A_OUT_GNU_H__ 
#define __GNU_EXEC_MACROS__ 
#ifndef __STRUCT_EXEC_OVERRIDE__
#include <asm/a.out.h>
#endif
#ifndef __ASSEMBLY__
#if defined (M_OLDSUN2)
#else
#endif
#if defined (M_68010)
#else
#endif
#if defined (M_68020)
#else
#endif
#if defined (M_SPARC)
#else
#endif
#if !defined (N_MAGIC)
#define N_MAGIC(exec) ((exec).a_info & 0xffff)
#endif
#define N_MACHTYPE(exec) ((enum machine_type)(((exec).a_info >> 16) & 0xff))
#define N_FLAGS(exec) (((exec).a_info >> 24) & 0xff)
#define N_SET_INFO(exec,magic,type,flags) ((exec).a_info = ((magic) & 0xffff) | (((int)(type) & 0xff) << 16) | (((flags) & 0xff) << 24))
#define N_SET_MAGIC(exec,magic) ((exec).a_info = (((exec).a_info & 0xffff0000) | ((magic) & 0xffff)))
#define N_SET_MACHTYPE(exec,machtype) ((exec).a_info = ((exec).a_info&0xff00ffff) | ((((int)(machtype))&0xff) << 16))
#define N_SET_FLAGS(exec,flags) ((exec).a_info = ((exec).a_info&0x00ffffff) | (((flags) & 0xff) << 24))
#define OMAGIC 0407
#define NMAGIC 0410
#define ZMAGIC 0413
#define QMAGIC 0314
#define CMAGIC 0421
#if !defined (N_BADMAG)
#define N_BADMAG(x) (N_MAGIC(x) != OMAGIC && N_MAGIC(x) != NMAGIC && N_MAGIC(x) != ZMAGIC && N_MAGIC(x) != QMAGIC)
#endif
#define _N_HDROFF(x) (1024 - sizeof (struct exec))
#if !defined (N_TXTOFF)
#define N_TXTOFF(x) (N_MAGIC(x) == ZMAGIC ? _N_HDROFF((x)) + sizeof (struct exec) : (N_MAGIC(x) == QMAGIC ? 0 : sizeof (struct exec)))
#endif
#if !defined (N_DATOFF)
#define N_DATOFF(x) (N_TXTOFF(x) + (x).a_text)
#endif
#if !defined (N_TRELOFF)
#define N_TRELOFF(x) (N_DATOFF(x) + (x).a_data)
#endif
#if !defined (N_DRELOFF)
#define N_DRELOFF(x) (N_TRELOFF(x) + N_TRSIZE(x))
#endif
#if !defined (N_SYMOFF)
#define N_SYMOFF(x) (N_DRELOFF(x) + N_DRSIZE(x))
#endif
#if !defined (N_STROFF)
#define N_STROFF(x) (N_SYMOFF(x) + N_SYMSIZE(x))
#endif
#if !defined (N_TXTADDR)
#define N_TXTADDR(x) (N_MAGIC(x) == QMAGIC ? PAGE_SIZE : 0)
#endif
#include <unistd.h>
#if defined(__i386__) || defined(__mc68000__)
#define SEGMENT_SIZE 1024
#else
#ifndef SEGMENT_SIZE
#define SEGMENT_SIZE getpagesize()
#endif
#endif
#define _N_SEGMENT_ROUND(x) ALIGN(x, SEGMENT_SIZE)
#define _N_TXTENDADDR(x) (N_TXTADDR(x)+(x).a_text)
#ifndef N_DATADDR
#define N_DATADDR(x) (N_MAGIC(x)==OMAGIC? (_N_TXTENDADDR(x)) : (_N_SEGMENT_ROUND (_N_TXTENDADDR(x))))
#endif
#if !defined (N_BSSADDR)
#define N_BSSADDR(x) (N_DATADDR(x) + (x).a_data)
#endif
#if !defined (N_NLIST_DECLARED)
#endif
#if !defined (N_UNDF)
#define N_UNDF 0
#endif
#if !defined (N_ABS)
#define N_ABS 2
#endif
#if !defined (N_TEXT)
#define N_TEXT 4
#endif
#if !defined (N_DATA)
#define N_DATA 6
#endif
#if !defined (N_BSS)
#define N_BSS 8
#endif
#if !defined (N_FN)
#define N_FN 15
#endif
#if !defined (N_EXT)
#define N_EXT 1
#endif
#if !defined (N_TYPE)
#define N_TYPE 036
#endif
#if !defined (N_STAB)
#define N_STAB 0340
#endif
#define N_INDR 0xa
#define N_SETA 0x14
#define N_SETT 0x16
#define N_SETD 0x18
#define N_SETB 0x1A
#define N_SETV 0x1C
#if !defined (N_RELOCATION_INFO_DECLARED)
#endif
#endif
#endif
