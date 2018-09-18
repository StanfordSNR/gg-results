// GGHASH:VyTHdeQyzdinkzPzz0E5Is_bU0KJSJ17FCePByQq3uf000000dff
#ifndef _FPU_CONTROL_H
#define _FPU_CONTROL_H 1
#include <features.h>
#define _FPU_MASK_IM 0x01
#define _FPU_MASK_DM 0x02
#define _FPU_MASK_ZM 0x04
#define _FPU_MASK_OM 0x08
#define _FPU_MASK_UM 0x10
#define _FPU_MASK_PM 0x20
#define _FPU_EXTENDED 0x300
#define _FPU_DOUBLE 0x200
#define _FPU_SINGLE 0x0
#define _FPU_RC_NEAREST 0x0
#define _FPU_RC_DOWN 0x400
#define _FPU_RC_UP 0x800
#define _FPU_RC_ZERO 0xC00
#define _FPU_RESERVED 0xF0C0
#define _FPU_DEFAULT 0x037f
#define _FPU_IEEE 0x037f
#define _FPU_GETCW(cw) __asm__ __volatile__ ("fnstcw %0" : "=m" (*&cw))
#define _FPU_SETCW(cw) __asm__ __volatile__ ("fldcw %0" : : "m" (*&cw))
#endif
