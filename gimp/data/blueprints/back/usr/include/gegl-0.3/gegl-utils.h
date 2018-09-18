// GGHASH:VVPRZOjgQLNjpPpcDZPJYJbqNNPDLb4dkPWGZYpjJIW400002c0b
#ifndef __GEGL_UTILS_H__
#define __GEGL_UTILS_H__ 
#define GEGL_FLOAT_EPSILON (1e-5)
#define GEGL_FLOAT_IS_ZERO(value) (_gegl_float_epsilon_zero ((value)))
#define GEGL_FLOAT_EQUAL(v1,v2) (_gegl_float_epsilon_equal ((v1), (v2)))
#endif
