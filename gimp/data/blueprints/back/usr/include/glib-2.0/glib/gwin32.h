// GGHASH:VTKNS4XXFSCr29u7tb_gVXmon0_jBacH85x8ovNBnoec0000123b
#ifndef __G_WIN32_H__
#define __G_WIN32_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#ifdef G_PLATFORM_WIN32
#ifndef MAXPATHLEN
#define MAXPATHLEN 1024
#endif
#ifdef G_OS_WIN32
#endif
#define G_WIN32_IS_NT_BASED() TRUE
#define G_WIN32_HAVE_WIDECHAR_API() TRUE
#endif
#endif
