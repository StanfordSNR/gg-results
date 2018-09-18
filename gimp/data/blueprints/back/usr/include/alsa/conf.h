// GGHASH:VZ2UmP6P2_UCaO2Oni2hCAWOlx0xKfCE6C2VCie6CMqY0000208a
#ifndef __ALSA_CONF_H
#define __ALSA_CONF_H 
#ifdef __cplusplus
#endif
#define SND_CONFIG_DLSYM_VERSION_EVALUATE _dlsym_config_evaluate_001
#define SND_CONFIG_DLSYM_VERSION_HOOK _dlsym_config_hook_001
#define snd_config_for_each(pos,next,node) for (pos = snd_config_iterator_first(node), next = snd_config_iterator_next(pos); pos != snd_config_iterator_end(node); pos = next, next = snd_config_iterator_next(pos))
#ifdef __cplusplus
#endif
#endif
