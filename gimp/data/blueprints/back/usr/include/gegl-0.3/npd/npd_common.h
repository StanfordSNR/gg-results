// GGHASH:V_D9Q2yuAUR1kwyA3grYP_9yldIL_fTNYk1dyGsk8Lyw0000170c
#ifndef __NPD_COMMON_H__
#define __NPD_COMMON_H__ 
#include <glib.h>
#define npd_init(set_pixel,get_pixel,process_pixel,draw_line) npd_set_pixel_color = set_pixel; npd_get_pixel_color = get_pixel; npd_process_pixel = process_pixel; npd_draw_line = draw_line;
#endif
