// GGHASH:Vr5h5vZmrl6AOPnZz_M47ct5Wiq_BUgZZ6HGhQyPHfIM0000141c
#ifndef __ALSA_GLOBAL_H_
#define __ALSA_GLOBAL_H_ 
#include <time.h>
#ifdef __cplusplus
#endif
#ifndef ATTRIBUTE_UNUSED
#define ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#endif
#ifdef PIC
#define __SND_DLSYM_VERSION(name,version) _ ## name ## version
#define SND_DLSYM_BUILD_VERSION(name,version) char __SND_DLSYM_VERSION(name, version);
#else
#define __SND_DLSYM_VERSION(prefix,name,version) _ ## prefix ## name ## version
#define SND_DLSYM_BUILD_VERSION(name,version) static struct snd_dlsym_link __SND_DLSYM_VERSION(snd_dlsym_, name, version); void __SND_DLSYM_VERSION(snd_dlsym_constructor_, name, version) (void) __attribute__ ((constructor)); void __SND_DLSYM_VERSION(snd_dlsym_constructor_, name, version) (void) { __SND_DLSYM_VERSION(snd_dlsym_, name, version).next = snd_dlsym_start; __SND_DLSYM_VERSION(snd_dlsym_, name, version).dlsym_name = #name; __SND_DLSYM_VERSION(snd_dlsym_, name, version).dlsym_ptr = (void *)&name; snd_dlsym_start = &__SND_DLSYM_VERSION(snd_dlsym_, name, version); }
#endif
#ifndef __STRING
#define __STRING(x) #x
#endif
#define SND_DLSYM_VERSION(version) __STRING(version)
#define __snd_alloca(ptr,type) do { *ptr = (type ##_t *) alloca(type ##_sizeof()); memset(*ptr, 0, type ##_sizeof()); } while (0)
#ifdef __GLIBC__
#if !defined(_POSIX_C_SOURCE) && !defined(_POSIX_SOURCE)
#endif
#endif
#ifdef __cplusplus
#endif
#endif
