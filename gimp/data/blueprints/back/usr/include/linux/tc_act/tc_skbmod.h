// GGHASH:VMcLD55oUkniv6w467bR5E7aCm6MLpnkAf0Pw9G.TsVc0000034a
#ifndef __LINUX_TC_SKBMOD_H
#define __LINUX_TC_SKBMOD_H 
#include <linux/pkt_cls.h>
#define TCA_ACT_SKBMOD 15
#define SKBMOD_F_DMAC 0x1
#define SKBMOD_F_SMAC 0x2
#define SKBMOD_F_ETYPE 0x4
#define SKBMOD_F_SWAPMAC 0x8
#define TCA_SKBMOD_MAX (__TCA_SKBMOD_MAX - 1)
#endif
