// GGHASH:VXMoLoeGlXPoehT4ybq9KafSMHQyvLTck7kGRf_8ELKY00000c3b
#ifndef _ASM_X86_STAT_H
#define _ASM_X86_STAT_H 
#include <asm/posix_types.h>
#define STAT_HAVE_NSEC 1
#ifdef __i386__
#define INIT_STRUCT_STAT_PADDING(st) do { st.__unused4 = 0; st.__unused5 = 0; } while (0)
#define STAT64_HAS_BROKEN_ST_INO 1
#define INIT_STRUCT_STAT64_PADDING(st) do { memset(&st.__pad0, 0, sizeof(st.__pad0)); memset(&st.__pad3, 0, sizeof(st.__pad3)); } while (0)
#else
#define INIT_STRUCT_STAT_PADDING(st) do { st.__pad0 = 0; st.__unused[0] = 0; st.__unused[1] = 0; st.__unused[2] = 0; } while (0)
#endif
#ifdef __i386__
#else
#endif
#endif
