// GGHASH:V.e55AcdWP8I.DckTJ_T9N6sHuBdA3rON121yV.5fss000002253
#ifndef __ALSA_CONTROL_EXTERNAL_H
#define __ALSA_CONTROL_EXTERNAL_H 
#include "control.h"
#ifdef __cplusplus
#endif
#define SND_CTL_PLUGIN_ENTRY(name) _snd_ctl_ ##name ##_open
#define SND_CTL_PLUGIN_SYMBOL(name) SND_DLSYM_BUILD_VERSION(SND_CTL_PLUGIN_ENTRY(name), SND_CONTROL_DLSYM_VERSION);
#define SND_CTL_PLUGIN_DEFINE_FUNC(plugin) int SND_CTL_PLUGIN_ENTRY(plugin) (snd_ctl_t **handlep, const char *name, snd_config_t *root, snd_config_t *conf, int mode)
#ifdef DOC_HIDDEN
#endif
#define SND_CTL_EXT_VERSION_MAJOR 1
#define SND_CTL_EXT_VERSION_MINOR 0
#define SND_CTL_EXT_VERSION_TINY 1
#define SND_CTL_EXT_VERSION ((SND_CTL_EXT_VERSION_MAJOR<<16) | (SND_CTL_EXT_VERSION_MINOR<<8) | (SND_CTL_EXT_VERSION_TINY))
#define SND_CTL_EXT_KEY_NOT_FOUND (snd_ctl_ext_key_t)(-1)
#ifdef __cplusplus
#endif
#endif
