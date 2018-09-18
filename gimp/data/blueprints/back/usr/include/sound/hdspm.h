// GGHASH:VhqJX9Evd.DxH2UWzC3rSCccK4Ik9QjQMwQ9I1se_SBs0000156e
#ifndef __SOUND_HDSPM_H
#define __SOUND_HDSPM_H 
#include <linux/types.h>
#define HDSPM_MAX_CHANNELS 64
#define SNDRV_HDSPM_IOCTL_GET_PEAK_RMS _IOR('H', 0x42, struct hdspm_peak_rms)
#define SNDRV_HDSPM_IOCTL_GET_CONFIG _IOR('H', 0x41, struct hdspm_config)
#define SNDRV_HDSPM_IOCTL_GET_LTC _IOR('H', 0x46, struct hdspm_ltc)
#define SNDRV_HDSPM_IOCTL_GET_STATUS _IOR('H', 0x47, struct hdspm_status)
#define HDSPM_ADDON_TCO 1
#define SNDRV_HDSPM_IOCTL_GET_VERSION _IOR('H', 0x48, struct hdspm_version)
#define HDSPM_MIXER_CHANNELS HDSPM_MAX_CHANNELS
#define SNDRV_HDSPM_IOCTL_GET_MIXER _IOR('H', 0x44, struct hdspm_mixer_ioctl)
#endif
