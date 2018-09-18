// GGHASH:VTDpmOVFATNV_M.IaP_hma0Mk0Io_TwlQVlK1BFPel_A0000160b
#ifndef __G_FILEUTILS_H__
#define __G_FILEUTILS_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glibconfig.h>
#include <glib/gerror.h>
#define G_FILE_ERROR g_file_error_quark ()
#ifdef G_OS_WIN32
#define G_IS_DIR_SEPARATOR(c) ((c) == G_DIR_SEPARATOR || (c) == '/')
#else
#define G_IS_DIR_SEPARATOR(c) ((c) == G_DIR_SEPARATOR)
#endif
#ifndef G_DISABLE_DEPRECATED
#define g_dirname g_path_get_dirname
#endif
#endif
