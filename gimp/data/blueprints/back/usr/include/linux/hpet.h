// GGHASH:VEdPJSH.QgLm9t_U2LyvbM4SDOmHvUwag3Zt8IfTEoEk000002e7
#ifndef __HPET__
#define __HPET__ 
#define HPET_INFO_PERIODIC 0x0010
#define HPET_IE_ON _IO('h', 0x01)
#define HPET_IE_OFF _IO('h', 0x02)
#define HPET_INFO _IOR('h', 0x03, struct hpet_info)
#define HPET_EPI _IO('h', 0x04)
#define HPET_DPI _IO('h', 0x05)
#define HPET_IRQFREQ _IOW('h', 0x6, unsigned long)
#define MAX_HPET_TBS 8
#endif
