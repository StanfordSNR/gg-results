// GGHASH:VSgO7Cdduh1pJd1oA6rO199iYfcHqUIxUL3wc2nte93k00002c4a
#ifndef __ALSA_TIMER_H
#define __ALSA_TIMER_H 
#ifdef __cplusplus
#endif
#define SND_TIMER_DLSYM_VERSION _dlsym_timer_001
#define SND_TIMER_QUERY_DLSYM_VERSION _dlsym_timer_query_001
#define SND_TIMER_GLOBAL_SYSTEM 0
#define SND_TIMER_GLOBAL_RTC 1
#define SND_TIMER_GLOBAL_HPET 2
#define SND_TIMER_GLOBAL_HRTIMER 3
#define SND_TIMER_OPEN_NONBLOCK (1<<0)
#define SND_TIMER_OPEN_TREAD (1<<1)
#define snd_timer_id_alloca(ptr) __snd_alloca(ptr, snd_timer_id)
#define snd_timer_ginfo_alloca(ptr) __snd_alloca(ptr, snd_timer_ginfo)
#define snd_timer_info_alloca(ptr) __snd_alloca(ptr, snd_timer_info)
#define snd_timer_params_alloca(ptr) __snd_alloca(ptr, snd_timer_params)
#define snd_timer_status_alloca(ptr) __snd_alloca(ptr, snd_timer_status)
#ifdef __cplusplus
#endif
#endif
