// GGHASH:Vsv4Qfa5Aykn4gO2wKfittrfM1XC7yotAkyg40kXLVes000009d8
#ifndef _DLFCN_H
# error "Never use <bits/dlfcn.h> directly; include <dlfcn.h> instead."
#endif
#define RTLD_LAZY 0x00001
#define RTLD_NOW 0x00002
#define RTLD_BINDING_MASK 0x3
#define RTLD_NOLOAD 0x00004
#define RTLD_DEEPBIND 0x00008
#define RTLD_GLOBAL 0x00100
#define RTLD_LOCAL 0
#define RTLD_NODELETE 0x01000
#ifdef __USE_GNU
#define DL_CALL_FCT(fctp,args) (_dl_mcount_wrapper_check ((void *) (fctp)), (*(fctp)) args)
#endif
