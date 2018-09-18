// GGHASH:VBrOTbqYo805aVA46VZ5ONqkwAApZV6Z4.sSli912Wj800000765
#ifndef __ALSA_PCM_EXTERNAL_H
#define __ALSA_PCM_EXTERNAL_H 
#include "pcm.h"
#ifdef __cplusplus
#endif
#define SND_PCM_PLUGIN_ENTRY(name) _snd_pcm_ ##name ##_open
#define SND_PCM_PLUGIN_SYMBOL(name) SND_DLSYM_BUILD_VERSION(SND_PCM_PLUGIN_ENTRY(name), SND_PCM_DLSYM_VERSION);
#define SND_PCM_PLUGIN_DEFINE_FUNC(plugin) int SND_PCM_PLUGIN_ENTRY(plugin) (snd_pcm_t **pcmp, const char *name, snd_config_t *root, snd_config_t *conf, snd_pcm_stream_t stream, int mode)
#include "pcm_ioplug.h"
#include "pcm_extplug.h"
#ifdef __cplusplus
#endif
#endif
