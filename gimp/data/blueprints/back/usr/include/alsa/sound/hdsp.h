// GGHASH:VWwuW28OUfszdzKJjh0FqD.kBak3Nr9TNnDT7DThk2Ig00000be0
#ifndef __SOUND_HDSP_H
#define __SOUND_HDSP_H 
#include <stdint.h>
#define HDSP_MATRIX_MIXER_SIZE 2048
#define SNDRV_HDSP_IOCTL_GET_PEAK_RMS _IOR('H', 0x40, hdsp_peak_rms_t)
#define SNDRV_HDSP_IOCTL_GET_CONFIG_INFO _IOR('H', 0x41, hdsp_config_info_t)
#define SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE _IOW('H', 0x42, hdsp_firmware_t)
#define SNDRV_HDSP_IOCTL_GET_VERSION _IOR('H', 0x43, hdsp_version_t)
#define SNDRV_HDSP_IOCTL_GET_MIXER _IOR('H', 0x44, hdsp_mixer_t)
#define SNDRV_HDSP_IOCTL_GET_9632_AEB _IOR('H', 0x45, hdsp_9632_aeb_t)
#endif
