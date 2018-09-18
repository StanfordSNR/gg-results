// GGHASH:VtTSvGYyGr28P1mGHzx5ABhmJYZ.wfWikjVUleQ0y4mQ00001ca6
#ifndef __ALSA_HWDEP_H
#define __ALSA_HWDEP_H 
#ifdef __cplusplus
#endif
#define SND_HWDEP_DLSYM_VERSION _dlsym_hwdep_001
#define SND_HWDEP_OPEN_READ (O_RDONLY)
#define SND_HWDEP_OPEN_WRITE (O_WRONLY)
#define SND_HWDEP_OPEN_DUPLEX (O_RDWR)
#define SND_HWDEP_OPEN_NONBLOCK (O_NONBLOCK)
#define snd_hwdep_info_alloca(ptr) __snd_alloca(ptr, snd_hwdep_info)
#define snd_hwdep_dsp_status_alloca(ptr) __snd_alloca(ptr, snd_hwdep_dsp_status)
#define snd_hwdep_dsp_image_alloca(ptr) __snd_alloca(ptr, snd_hwdep_dsp_image)
#ifdef __cplusplus
#endif
#endif
