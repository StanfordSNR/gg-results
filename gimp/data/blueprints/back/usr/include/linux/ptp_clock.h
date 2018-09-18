// GGHASH:V65XQAbYB_1OST9i1uWXmJm298n9pl7PxvZYwZxpF1TU00001304
#ifndef _PTP_CLOCK_H_
#define _PTP_CLOCK_H_ 
#include <linux/ioctl.h>
#include <linux/types.h>
#define PTP_ENABLE_FEATURE (1<<0)
#define PTP_RISING_EDGE (1<<1)
#define PTP_FALLING_EDGE (1<<2)
#define PTP_MAX_SAMPLES 25
#define PTP_CLK_MAGIC '='
#define PTP_CLOCK_GETCAPS _IOR(PTP_CLK_MAGIC, 1, struct ptp_clock_caps)
#define PTP_EXTTS_REQUEST _IOW(PTP_CLK_MAGIC, 2, struct ptp_extts_request)
#define PTP_PEROUT_REQUEST _IOW(PTP_CLK_MAGIC, 3, struct ptp_perout_request)
#define PTP_ENABLE_PPS _IOW(PTP_CLK_MAGIC, 4, int)
#define PTP_SYS_OFFSET _IOW(PTP_CLK_MAGIC, 5, struct ptp_sys_offset)
#define PTP_PIN_GETFUNC _IOWR(PTP_CLK_MAGIC, 6, struct ptp_pin_desc)
#define PTP_PIN_SETFUNC _IOW(PTP_CLK_MAGIC, 7, struct ptp_pin_desc)
#define PTP_SYS_OFFSET_PRECISE _IOWR(PTP_CLK_MAGIC, 8, struct ptp_sys_offset_precise)
#endif
