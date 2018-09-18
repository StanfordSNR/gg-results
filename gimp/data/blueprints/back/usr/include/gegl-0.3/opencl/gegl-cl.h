// GGHASH:VasV5iL8_22Bx0lrCZeRVqyzyJsIPi8AS4kNmE04COx400000612
#ifndef __GEGL_CL_H__
#define __GEGL_CL_H__ 
#include "gegl-cl-types.h"
#include "gegl-cl-init.h"
#include "gegl-cl-color.h"
#include "gegl-cl-random.h"
#define CL_ERROR { g_warning ("Error in %s:%d@%s - %s\n", __FILE__, __LINE__, __func__, gegl_cl_errstring (cl_err)); goto error; }
#define CL_CHECK { if (cl_err != CL_SUCCESS) CL_ERROR; }
#define CL_CHECK_ONLY(errcode) if (errcode != CL_SUCCESS) { g_warning ("Error in %s:%d@%s - %s\n", __FILE__, __LINE__, __func__, gegl_cl_errstring (errcode)); }
#endif
