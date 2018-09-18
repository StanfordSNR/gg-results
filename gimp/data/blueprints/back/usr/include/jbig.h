// GGHASH:VTFXG3Ni.qzwzCnwjNNk1K3lRFUx.vZADfRIPzh3eHnM00002597
#ifndef JBG_H
#define JBG_H 
#include <stddef.h>
#include "jbig_ar.h"
#define JBG_VERSION "2.1"
#define JBG_VERSION_MAJOR 2
#define JBG_VERSION_MINOR 1
#define JBG_LICENCE "GPL"
#define JBG_BUFSIZE 4000
#define JBG_ATMOVES_MAX 64
#define JBG_HITOLO 0x08
#define JBG_SEQ 0x04
#define JBG_ILEAVE 0x02
#define JBG_SMID 0x01
#define JBG_LRLTWO 0x40
#define JBG_VLENGTH 0x20
#define JBG_TPDON 0x10
#define JBG_TPBON 0x08
#define JBG_DPON 0x04
#define JBG_DPPRIV 0x02
#define JBG_DPLAST 0x01
#define JBG_DELAY_AT 0x100
#define JBG_SDRST 0x200
#define JBG_EOK (0 << 4)
#define JBG_EOK_INTR (1 << 4)
#define JBG_EAGAIN (2 << 4)
#define JBG_ENOMEM (3 << 4)
#define JBG_EABORT (4 << 4)
#define JBG_EMARKER (5 << 4)
#define JBG_EINVAL (6 << 4)
#define JBG_EIMPL (7 << 4)
#define JBG_ENOCONT (8 << 4)
#define jbg_dec_getplanes(s) ((s)->planes)
#endif
