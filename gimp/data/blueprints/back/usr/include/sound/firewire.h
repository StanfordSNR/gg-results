// GGHASH:VSJd5f_ZPdoGM.u7Kn9fHvhx2kEbJ1XW4YybEkZSAYM000000a89
#ifndef _SOUND_FIREWIRE_H_INCLUDED
#define _SOUND_FIREWIRE_H_INCLUDED 
#include <linux/ioctl.h>
#include <linux/types.h>
#define SNDRV_FIREWIRE_EVENT_LOCK_STATUS 0x000010cc
#define SNDRV_FIREWIRE_EVENT_DICE_NOTIFICATION 0xd1ce004e
#define SNDRV_FIREWIRE_EVENT_EFW_RESPONSE 0x4e617475
#define SNDRV_FIREWIRE_EVENT_DIGI00X_MESSAGE 0x746e736c
#define SNDRV_FIREWIRE_EVENT_MOTU_NOTIFICATION 0x64776479
#define SND_EFW_TRANSACTION_USER_SEQNUM_MAX ((__u32)((__u16)~0) - 1)
#define SNDRV_FIREWIRE_IOCTL_GET_INFO _IOR('H', 0xf8, struct snd_firewire_get_info)
#define SNDRV_FIREWIRE_IOCTL_LOCK _IO('H', 0xf9)
#define SNDRV_FIREWIRE_IOCTL_UNLOCK _IO('H', 0xfa)
#define SNDRV_FIREWIRE_TYPE_DICE 1
#define SNDRV_FIREWIRE_TYPE_FIREWORKS 2
#define SNDRV_FIREWIRE_TYPE_BEBOB 3
#define SNDRV_FIREWIRE_TYPE_OXFW 4
#define SNDRV_FIREWIRE_TYPE_DIGI00X 5
#define SNDRV_FIREWIRE_TYPE_TASCAM 6
#define SNDRV_FIREWIRE_TYPE_MOTU 7
#define SNDRV_FIREWIRE_TYPE_FIREFACE 8
#endif
