// GGHASH:VACtmDbdf8OX1Zpyj5DHS2c5wet1O9Klgiknhl2gEov800001a6b
#ifndef _DVBDMX_H_
#define _DVBDMX_H_ 
#include <linux/types.h>
#include <time.h>
#define DMX_FILTER_SIZE 16
#define DMX_PES_AUDIO DMX_PES_AUDIO0
#define DMX_PES_VIDEO DMX_PES_VIDEO0
#define DMX_PES_TELETEXT DMX_PES_TELETEXT0
#define DMX_PES_SUBTITLE DMX_PES_SUBTITLE0
#define DMX_PES_PCR DMX_PES_PCR0
#define DMX_CHECK_CRC 1
#define DMX_ONESHOT 2
#define DMX_IMMEDIATE_START 4
#define DMX_START _IO('o', 41)
#define DMX_STOP _IO('o', 42)
#define DMX_SET_FILTER _IOW('o', 43, struct dmx_sct_filter_params)
#define DMX_SET_PES_FILTER _IOW('o', 44, struct dmx_pes_filter_params)
#define DMX_SET_BUFFER_SIZE _IO('o', 45)
#define DMX_GET_PES_PIDS _IOR('o', 47, __u16[5])
#define DMX_GET_STC _IOWR('o', 50, struct dmx_stc)
#define DMX_ADD_PID _IOW('o', 51, __u16)
#define DMX_REMOVE_PID _IOW('o', 52, __u16)
#endif
