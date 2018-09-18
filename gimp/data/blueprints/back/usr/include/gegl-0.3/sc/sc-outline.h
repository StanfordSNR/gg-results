// GGHASH:VYsd9HeQnRlWXuC3bGHzcE1MyqyVrSmV.M1vplu1CuRg000010e7
#ifndef __GEGL_SC_OUTLINE_H__
#define __GEGL_SC_OUTLINE_H__ 
#include <gegl.h>
#define GEGL_SC_DIRECTION_CW(d) (((d) + 1) % 8)
#define GEGL_SC_DIRECTION_CCW(d) (((d) + 7) % 8)
#define GEGL_SC_DIRECTION_OPPOSITE(d) (((d) + 4) % 8)
#define GEGL_SC_DIRECTION_IS_NORTH(d) ( ((d) == GEGL_SC_DIRECTION_N) || ((d) == GEGL_SC_DIRECTION_NE) || ((d) == GEGL_SC_DIRECTION_NW) )
#define GEGL_SC_DIRECTION_IS_SOUTH(d) ( ((d) == GEGL_SC_DIRECTION_S) || ((d) == GEGL_SC_DIRECTION_SE) || ((d) == GEGL_SC_DIRECTION_SW) )
#define GEGL_SC_DIRECTION_IS_EAST(d) ( ((d) == GEGL_SC_DIRECTION_E) || ((d) == GEGL_SC_DIRECTION_NE) || ((d) == GEGL_SC_DIRECTION_SE) )
#define GEGL_SC_DIRECTION_IS_WEST(d) ( ((d) == GEGL_SC_DIRECTION_W) || ((d) == GEGL_SC_DIRECTION_NW) || ((d) == GEGL_SC_DIRECTION_SW) )
#define GEGL_SC_DIRECTION_XOFFSET(d,s) ( (GEGL_SC_DIRECTION_IS_EAST(d)) ? (s) : ((GEGL_SC_DIRECTION_IS_WEST(d)) ? -(s) : 0) )
#define GEGL_SC_DIRECTION_YOFFSET(d,s) ( (GEGL_SC_DIRECTION_IS_SOUTH(d)) ? (s) : ((GEGL_SC_DIRECTION_IS_NORTH(d)) ? -(s) : 0) )
#endif
