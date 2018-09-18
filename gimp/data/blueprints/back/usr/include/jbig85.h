// GGHASH:VHIeTngQtewOhlBLdP40OlhTruswarVxPLPvZvxG9UU400001b1e
#ifndef JBG85_H
#define JBG85_H 
#include <stddef.h>
#include "jbig_ar.h"
#define JBG85_VERSION "2.1"
#define JBG85_VERSION_MAJOR 2
#define JBG85_VERSION_MINOR 1
#define JBG85_LICENCE "GPL"
#define JBG85_ATMOVES_MAX 1
#ifndef JBG_LRLTWO
#define JBG_LRLTWO 0x40
#define JBG_VLENGTH 0x20
#define JBG_TPBON 0x08
#define JBG_EOK (0 << 4)
#define JBG_EOK_INTR (1 << 4)
#define JBG_EAGAIN (2 << 4)
#define JBG_ENOMEM (3 << 4)
#define JBG_EABORT (4 << 4)
#define JBG_EMARKER (5 << 4)
#define JBG_EINVAL (6 << 4)
#define JBG_EIMPL (7 << 4)
#endif
#define jbg85_dec_finished(s) ((s)->bie_len == 20 && (s)->y >= (s)->y0)
#define jbg85_dec_getwidth(s) ((s)->x0)
#define jbg85_dec_getheight(s) ((s)->y0)
#define jbg85_dec_validwidth(s) ((s)->bie_len == 20)
#define jbg85_dec_finalheight(s) ((s)->bie_len == 20 && ((((s)->options & JBG_VLENGHT) == 0) || ((s)->y >= (s)->y0)))
#endif
