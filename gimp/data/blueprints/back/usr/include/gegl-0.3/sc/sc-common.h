// GGHASH:VnlhoeNXdd5vPde2CYgwJleGJGgqqr_0S08XU.oX.lbw00000a3c
#ifndef __GEGL_SC_COMMON_H__
#define __GEGL_SC_COMMON_H__ 
#include <poly2tri-c/refine/refine.h>
#include <gegl.h>
#define GEGL_SC_COLOR_BABL_NAME "R'G'B'A float"
#define GEGL_SC_COLORA_CHANNEL_COUNT 4
#define GEGL_SC_COLOR_CHANNEL_COUNT ((GEGL_SC_COLORA_CHANNEL_COUNT) - 1)
#define gegl_sc_color_new() (g_new (GeglScColor, GEGL_SC_COLORA_CHANNEL_COUNT))
#define gegl_sc_color_free(mem) (g_free (mem))
#define GEGL_SC_COLOR_ALPHA_INDEX GEGL_SC_COLOR_CHANNEL_COUNT
#define gegl_sc_color_process() G_STMT_START { gegl_sc_color_expr(0); gegl_sc_color_expr(1); gegl_sc_color_expr(2); } G_STMT_END
#define gegl_sc_point_in_rectangle(px,py,rect) ( ((px) >= (rect)->x) && ((py) >= (rect)->y) && ((px) < (rect)->x + (rect)->width) && ((py) < (rect)->y + (rect)->height) )
#endif
