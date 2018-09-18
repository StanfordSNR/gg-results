// GGHASH:VfITHkppbhLhp6lLqvJ8eIWi18iBBZACp9uPd9DjkqEY00007054
#ifndef __ALSA_CONTROL_H
#define __ALSA_CONTROL_H 
#ifdef __cplusplus
#endif
#define SND_CONTROL_DLSYM_VERSION _dlsym_control_001
#define SND_CTL_EVENT_MASK_REMOVE (~0U)
#define SND_CTL_EVENT_MASK_VALUE (1<<0)
#define SND_CTL_EVENT_MASK_INFO (1<<1)
#define SND_CTL_EVENT_MASK_ADD (1<<2)
#define SND_CTL_EVENT_MASK_TLV (1<<3)
#define SND_CTL_NAME_NONE ""
#define SND_CTL_NAME_PLAYBACK "Playback "
#define SND_CTL_NAME_CAPTURE "Capture "
#define SND_CTL_NAME_IEC958_NONE ""
#define SND_CTL_NAME_IEC958_SWITCH "Switch"
#define SND_CTL_NAME_IEC958_VOLUME "Volume"
#define SND_CTL_NAME_IEC958_DEFAULT "Default"
#define SND_CTL_NAME_IEC958_MASK "Mask"
#define SND_CTL_NAME_IEC958_CON_MASK "Con Mask"
#define SND_CTL_NAME_IEC958_PRO_MASK "Pro Mask"
#define SND_CTL_NAME_IEC958_PCM_STREAM "PCM Stream"
#define SND_CTL_NAME_IEC958(expl,direction,what) "IEC958 " expl SND_CTL_NAME_ ##direction SND_CTL_NAME_IEC958_ ##what
#define SND_CTL_POWER_MASK 0xff00
#define SND_CTL_POWER_D0 0x0000
#define SND_CTL_POWER_D1 0x0100
#define SND_CTL_POWER_D2 0x0200
#define SND_CTL_POWER_D3 0x0300
#define SND_CTL_POWER_D3hot (SND_CTL_POWER_D3|0x0000)
#define SND_CTL_POWER_D3cold (SND_CTL_POWER_D3|0x0001)
#define SND_CTL_TLVT_CONTAINER 0x0000
#define SND_CTL_TLVT_DB_SCALE 0x0001
#define SND_CTL_TLVT_DB_LINEAR 0x0002
#define SND_CTL_TLVT_DB_RANGE 0x0003
#define SND_CTL_TLVT_DB_MINMAX 0x0004
#define SND_CTL_TLVT_DB_MINMAX_MUTE 0x0005
#define SND_CTL_TLV_DB_GAIN_MUTE -9999999
#define SND_CTL_TLVT_CHMAP_FIXED 0x00101
#define SND_CTL_TLVT_CHMAP_VAR 0x00102
#define SND_CTL_TLVT_CHMAP_PAIRED 0x00103
#define SND_CTL_NONBLOCK 0x0001
#define SND_CTL_ASYNC 0x0002
#define SND_CTL_READONLY 0x0004
#define SND_SCTL_NOFREE 0x0001
#ifdef __ALSA_HWDEP_H
#endif
#ifdef __ALSA_PCM_H
#endif
#ifdef __ALSA_RAWMIDI_H
#endif
#define snd_ctl_elem_id_alloca(ptr) __snd_alloca(ptr, snd_ctl_elem_id)
#define snd_ctl_card_info_alloca(ptr) __snd_alloca(ptr, snd_ctl_card_info)
#define snd_ctl_event_alloca(ptr) __snd_alloca(ptr, snd_ctl_event)
#define snd_ctl_elem_list_alloca(ptr) __snd_alloca(ptr, snd_ctl_elem_list)
#define snd_ctl_elem_info_alloca(ptr) __snd_alloca(ptr, snd_ctl_elem_info)
#define snd_ctl_elem_value_alloca(ptr) __snd_alloca(ptr, snd_ctl_elem_value)
#ifdef __cplusplus
#endif
#endif
