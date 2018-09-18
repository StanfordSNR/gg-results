// GGHASH:VFeSRsSKClwUTdL52TOcgiKPHiiKFvB866y09HM8BNqo00000c44
#ifndef __SOUND_HDSP_H
#define __SOUND_HDSP_H 
#include <linux/types.h>
#define HDSP_MATRIX_MIXER_SIZE 2048
#define SNDRV_HDSP_IOCTL_GET_PEAK_RMS _IOR('H', 0x40, struct hdsp_peak_rms)
#define SNDRV_HDSP_IOCTL_GET_CONFIG_INFO _IOR('H', 0x41, struct hdsp_config_info)
#define SNDRV_HDSP_IOCTL_UPLOAD_FIRMWARE _IOW('H', 0x42, struct hdsp_firmware)
#define SNDRV_HDSP_IOCTL_GET_VERSION _IOR('H', 0x43, struct hdsp_version)
#define SNDRV_HDSP_IOCTL_GET_MIXER _IOR('H', 0x44, struct hdsp_mixer)
#define SNDRV_HDSP_IOCTL_GET_9632_AEB _IOR('H', 0x45, struct hdsp_9632_aeb)
#endif
