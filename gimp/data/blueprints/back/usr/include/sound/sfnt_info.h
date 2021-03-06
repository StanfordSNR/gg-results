// GGHASH:VzpxIJQdqMXLNfN827N1L42S4j1liMAPN.I7Jolb44wo00001d46
#ifndef __SOUND_SFNT_INFO_H
#define __SOUND_SFNT_INFO_H 
#include <sound/asound.h>
#ifdef SNDRV_BIG_ENDIAN
#define SNDRV_OSS_PATCHKEY(id) (0xfd00|id)
#else
#define SNDRV_OSS_PATCHKEY(id) ((id<<8)|0xfd)
#endif
#define SNDRV_OSS_SOUNDFONT_PATCH SNDRV_OSS_PATCHKEY(0x07)
#define SNDRV_SFNT_LOAD_INFO 0
#define SNDRV_SFNT_LOAD_DATA 1
#define SNDRV_SFNT_OPEN_PATCH 2
#define SNDRV_SFNT_CLOSE_PATCH 3
#define SNDRV_SFNT_REPLACE_DATA 5
#define SNDRV_SFNT_MAP_PRESET 6
#define SNDRV_SFNT_PROBE_DATA 8
#define SNDRV_SFNT_REMOVE_INFO 9
#define SNDRV_SFNT_PATCH_NAME_LEN 32
#define SNDRV_SFNT_PAT_TYPE_MISC 0
#define SNDRV_SFNT_PAT_TYPE_GUS 6
#define SNDRV_SFNT_PAT_TYPE_MAP 7
#define SNDRV_SFNT_PAT_LOCKED 0x100
#define SNDRV_SFNT_PAT_SHARED 0x200
#define SNDRV_SFNT_MODE_ROMSOUND 0x8000
#define SNDRV_SFNT_MODE_STEREO 1
#define SNDRV_SFNT_MODE_LOOPING 2
#define SNDRV_SFNT_MODE_NORELEASE 4
#define SNDRV_SFNT_MODE_INIT_PARM 8
#define SNDRV_SFNT_WR_APPEND 0
#define SNDRV_SFNT_WR_EXCLUSIVE 1
#define SNDRV_SFNT_WR_REPLACE 2
#define SNDRV_SFNT_SAMPLE_8BITS 1
#define SNDRV_SFNT_SAMPLE_UNSIGNED 2
#define SNDRV_SFNT_SAMPLE_NO_BLANK 4
#define SNDRV_SFNT_SAMPLE_SINGLESHOT 8
#define SNDRV_SFNT_SAMPLE_BIDIR_LOOP 16
#define SNDRV_SFNT_SAMPLE_STEREO_LEFT 32
#define SNDRV_SFNT_SAMPLE_STEREO_RIGHT 64
#define SNDRV_SFNT_SAMPLE_REVERSE_LOOP 128
#define SNDRV_EMUX_HWDEP_NAME "Emux WaveTable"
#define SNDRV_EMUX_VERSION ((1 << 16) | (0 << 8) | 0)
#define SNDRV_EMUX_IOCTL_VERSION _IOR('H', 0x80, unsigned int)
#define SNDRV_EMUX_IOCTL_LOAD_PATCH _IOWR('H', 0x81, struct soundfont_patch_info)
#define SNDRV_EMUX_IOCTL_RESET_SAMPLES _IO('H', 0x82)
#define SNDRV_EMUX_IOCTL_REMOVE_LAST_SAMPLES _IO('H', 0x83)
#define SNDRV_EMUX_IOCTL_MEM_AVAIL _IOW('H', 0x84, int)
#define SNDRV_EMUX_IOCTL_MISC_MODE _IOWR('H', 0x84, struct snd_emux_misc_mode)
#endif
