// GGHASH:VByVOnm7xsAy_JMDKvX_hDz_kLFosAcIaDyaqUNdrZKU0000e837
#ifndef __ALSA_PCM_H
#define __ALSA_PCM_H 
#ifdef __cplusplus
#endif
#define SND_PCM_DLSYM_VERSION _dlsym_pcm_001
#if __BYTE_ORDER == __LITTLE_ENDIAN
#elif __BYTE_ORDER == __BIG_ENDIAN
#else
#error "Unknown endian"
#endif
#define SND_PCM_NONBLOCK 0x00000001
#define SND_PCM_ASYNC 0x00000002
#define SND_PCM_ABORT 0x00008000
#define SND_PCM_NO_AUTO_RESAMPLE 0x00010000
#define SND_PCM_NO_AUTO_CHANNELS 0x00020000
#define SND_PCM_NO_AUTO_FORMAT 0x00040000
#define SND_PCM_NO_SOFTVOL 0x00080000
#define SND_CHMAP_API_VERSION ((1 << 16) | (0 << 8) | 1)
#define SND_CHMAP_POSITION_MASK 0xffff
#define SND_CHMAP_PHASE_INVERSE (0x01 << 16)
#define SND_CHMAP_DRIVER_SPEC (0x02 << 16)
#define snd_pcm_info_alloca(ptr) __snd_alloca(ptr, snd_pcm_info)
#if 0
#endif
#define snd_pcm_hw_params_alloca(ptr) __snd_alloca(ptr, snd_pcm_hw_params)
#if !defined(ALSA_LIBRARY_BUILD) && !defined(ALSA_PCM_OLD_HW_PARAMS_API)
#endif
#define snd_pcm_sw_params_alloca(ptr) __snd_alloca(ptr, snd_pcm_sw_params)
#if !defined(ALSA_LIBRARY_BUILD) && !defined(ALSA_PCM_OLD_SW_PARAMS_API)
#endif
#ifndef ALSA_LIBRARY_BUILD
#if defined(ALSA_PCM_OLD_HW_PARAMS_API) || defined(ALSA_PCM_OLD_SW_PARAMS_API)
#include "pcm_old.h"
#endif
#endif
#define snd_pcm_access_mask_alloca(ptr) __snd_alloca(ptr, snd_pcm_access_mask)
#define snd_pcm_format_mask_alloca(ptr) __snd_alloca(ptr, snd_pcm_format_mask)
#define snd_pcm_subformat_mask_alloca(ptr) __snd_alloca(ptr, snd_pcm_subformat_mask)
#define snd_pcm_status_alloca(ptr) __snd_alloca(ptr, snd_pcm_status)
#if !defined(ALSA_LIBRARY_BUILD) && !defined(ALSA_PCM_OLD_SW_PARAMS_API)
#endif
#if !defined(ALSA_LIBRARY_BUILD) && !defined(ALSA_PCM_OLD_HW_PARAMS_API)
#endif
#ifdef __cplusplus
#endif
#endif
