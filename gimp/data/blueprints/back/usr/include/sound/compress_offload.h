// GGHASH:V.xQj91V4UBs9lKG3ZEV.n483Ukl3w2a_EIMzo7S0fxs00001a57
#ifndef __COMPRESS_OFFLOAD_H
#define __COMPRESS_OFFLOAD_H 
#include <linux/types.h>
#include <sound/asound.h>
#include <sound/compress_params.h>
#define SNDRV_COMPRESS_VERSION SNDRV_PROTOCOL_VERSION(0, 1, 2)
#define SNDRV_COMPRESS_IOCTL_VERSION _IOR('C', 0x00, int)
#define SNDRV_COMPRESS_GET_CAPS _IOWR('C', 0x10, struct snd_compr_caps)
#define SNDRV_COMPRESS_GET_CODEC_CAPS _IOWR('C', 0x11, struct snd_compr_codec_caps)
#define SNDRV_COMPRESS_SET_PARAMS _IOW('C', 0x12, struct snd_compr_params)
#define SNDRV_COMPRESS_GET_PARAMS _IOR('C', 0x13, struct snd_codec)
#define SNDRV_COMPRESS_SET_METADATA _IOW('C', 0x14, struct snd_compr_metadata)
#define SNDRV_COMPRESS_GET_METADATA _IOWR('C', 0x15, struct snd_compr_metadata)
#define SNDRV_COMPRESS_TSTAMP _IOR('C', 0x20, struct snd_compr_tstamp)
#define SNDRV_COMPRESS_AVAIL _IOR('C', 0x21, struct snd_compr_avail)
#define SNDRV_COMPRESS_PAUSE _IO('C', 0x30)
#define SNDRV_COMPRESS_RESUME _IO('C', 0x31)
#define SNDRV_COMPRESS_START _IO('C', 0x32)
#define SNDRV_COMPRESS_STOP _IO('C', 0x33)
#define SNDRV_COMPRESS_DRAIN _IO('C', 0x34)
#define SNDRV_COMPRESS_NEXT_TRACK _IO('C', 0x35)
#define SNDRV_COMPRESS_PARTIAL_DRAIN _IO('C', 0x36)
#define SND_COMPR_TRIGGER_DRAIN 7
#define SND_COMPR_TRIGGER_NEXT_TRACK 8
#define SND_COMPR_TRIGGER_PARTIAL_DRAIN 9
#endif
