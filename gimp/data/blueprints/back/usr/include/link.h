// GGHASH:VBcO62TnPh4f.Cj4LQ2e35Z1iyTj8fUdTxRsUEFqZo2M00001c26
#ifndef _LINK_H
#define _LINK_H 1
#include <features.h>
#include <elf.h>
#include <dlfcn.h>
#include <sys/types.h>
#define ElfW(type) _ElfW (Elf, __ELF_NATIVE_CLASS, type)
#define _ElfW(e,w,t) _ElfW_1 (e, w, _ ##t)
#define _ElfW_1(e,w,t) e ##w ##t
#include <bits/elfclass.h>
#include <bits/link.h>
#ifdef __USE_GNU
#define LAV_CURRENT 1
#endif
#endif
