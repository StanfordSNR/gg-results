// GGHASH:VrbSt7y5A.3kzi7gLChlx7YCvCfV06yoLvSn97Alad8E00001a1e
#ifndef __OPENCL_CL_GL_H
#define __OPENCL_CL_GL_H 
#ifdef __APPLE__
#include "cl.h"
#include <OpenGL/CGLDevice.h>
#else
#include "cl.h"
#endif
#ifdef __cplusplus
#endif
#define CL_GL_OBJECT_BUFFER 0x2000
#define CL_GL_OBJECT_TEXTURE2D 0x2001
#define CL_GL_OBJECT_TEXTURE3D 0x2002
#define CL_GL_OBJECT_RENDERBUFFER 0x2003
#define CL_GL_TEXTURE_TARGET 0x2004
#define CL_GL_MIPMAP_LEVEL 0x2005
#define cl_khr_gl_sharing 1
#define CL_INVALID_GL_SHAREGROUP_REFERENCE_KHR -1000
#define CL_CURRENT_DEVICE_FOR_GL_CONTEXT_KHR 0x2006
#define CL_DEVICES_FOR_GL_CONTEXT_KHR 0x2007
#define CL_GL_CONTEXT_KHR 0x2008
#define CL_EGL_DISPLAY_KHR 0x2009
#define CL_GLX_DISPLAY_KHR 0x200A
#define CL_WGL_HDC_KHR 0x200B
#define CL_CGL_SHAREGROUP_KHR 0x200C
#ifdef __cplusplus
#endif
#endif
