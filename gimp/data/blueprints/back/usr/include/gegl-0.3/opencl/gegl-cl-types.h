// GGHASH:Vu6Dn_Uj8QAiotbTKDY9UJKdHtnP5fkEuodzIwHItlX400002192
#ifndef __GEGL_CL_TYPES_H__
#define __GEGL_CL_TYPES_H__ 
#include <glib-object.h>
#include "cl.h"
#include "cl_gl.h"
#include "cl_gl_ext.h"
#include "cl_ext.h"
#if defined(_WIN32)
#define CL_API_ENTRY 
#define CL_API_CALL __stdcall
#else
#define CL_API_ENTRY 
#define CL_API_CALL 
#endif
#endif
