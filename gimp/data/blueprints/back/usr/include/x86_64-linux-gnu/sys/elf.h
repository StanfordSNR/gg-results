// GGHASH:VQIHD3c0dqEQlBG_kSyBmbA9aKqpByhio1BY6AD8Zeag000003ff
#ifndef _SYS_ELF_H
#define _SYS_ELF_H 1
#ifdef __x86_64__
# error This header is unsupported on x86-64.
#else
# warning "This header is obsolete; use <sys/procfs.h> instead."
# include <sys/procfs.h>
#endif
#endif
