// GGHASH:VgqUco7zm155s3WTxjeeyRV9PekiuXGYdWiKFwJFuK0w00001076
#ifndef __ALSA_MIXER_ABST_H
#define __ALSA_MIXER_ABST_H 
#ifdef __cplusplus
#endif
#define SM_PLAY 0
#define SM_CAPT 1
#define SM_CAP_GVOLUME (1<<1)
#define SM_CAP_GSWITCH (1<<2)
#define SM_CAP_PVOLUME (1<<3)
#define SM_CAP_PVOLUME_JOIN (1<<4)
#define SM_CAP_PSWITCH (1<<5)
#define SM_CAP_PSWITCH_JOIN (1<<6)
#define SM_CAP_CVOLUME (1<<7)
#define SM_CAP_CVOLUME_JOIN (1<<8)
#define SM_CAP_CSWITCH (1<<9)
#define SM_CAP_CSWITCH_JOIN (1<<10)
#define SM_CAP_CSWITCH_EXCL (1<<11)
#define SM_CAP_PENUM (1<<12)
#define SM_CAP_CENUM (1<<13)
#define SM_OPS_IS_ACTIVE 0
#define SM_OPS_IS_MONO 1
#define SM_OPS_IS_CHANNEL 2
#define SM_OPS_IS_ENUMERATED 3
#define SM_OPS_IS_ENUMCNT 4
#define sm_selem(x) ((sm_selem_t *)((x)->private_data))
#define sm_selem_ops(x) ((sm_selem_t *)((x)->private_data))->ops
#ifdef __cplusplus
#endif
#endif
