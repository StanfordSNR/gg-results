// GGHASH:VA1q8h_raJNGNK3Bj9vr75NB98VbpLYnuvBYPz4MPMEI00001bec
#ifndef __ALSA_RAWMIDI_H
#define __ALSA_RAWMIDI_H 
#ifdef __cplusplus
#endif
#define SND_RAWMIDI_DLSYM_VERSION _dlsym_rawmidi_001
#define SND_RAWMIDI_APPEND 0x0001
#define SND_RAWMIDI_NONBLOCK 0x0002
#define SND_RAWMIDI_SYNC 0x0004
#define snd_rawmidi_info_alloca(ptr) __snd_alloca(ptr, snd_rawmidi_info)
#define snd_rawmidi_params_alloca(ptr) __snd_alloca(ptr, snd_rawmidi_params)
#define snd_rawmidi_status_alloca(ptr) __snd_alloca(ptr, snd_rawmidi_status)
#ifdef __cplusplus
#endif
#endif
