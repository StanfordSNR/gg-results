// GGHASH:VEdfNZSe.jrZRRf4mbrEfM8kIKo4hvGkuH2Ux6gETPA000000ca4
#ifndef __ALSA_ERROR_H
#define __ALSA_ERROR_H 
#ifdef __cplusplus
#endif
#define SND_ERROR_BEGIN 500000
#define SND_ERROR_INCOMPATIBLE_VERSION (SND_ERROR_BEGIN+0)
#define SND_ERROR_ALISP_NIL (SND_ERROR_BEGIN+1)
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 95)
#define SNDERR(...) snd_lib_error(__FILE__, __LINE__, __FUNCTION__, 0, __VA_ARGS__)
#define SYSERR(...) snd_lib_error(__FILE__, __LINE__, __FUNCTION__, errno, __VA_ARGS__)
#else
#define SNDERR(args...) snd_lib_error(__FILE__, __LINE__, __FUNCTION__, 0, ##args)
#define SYSERR(args...) snd_lib_error(__FILE__, __LINE__, __FUNCTION__, errno, ##args)
#endif
#ifdef __cplusplus
#endif
#endif
