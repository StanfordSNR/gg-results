// GGHASH:VllZ81E7Cd8Aea2iaM0aDJNZzPcbtjhSNykyO73kgOpw000098d1
#ifndef __G_UNICODE_H__
#define __G_UNICODE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gerror.h>
#include <glib/gtypes.h>
#ifndef G_DISABLE_DEPRECATED
#define G_UNICODE_COMBINING_MARK G_UNICODE_SPACING_MARK
#endif
#define G_UNICHAR_MAX_DECOMPOSITION_LENGTH 18
#define g_utf8_next_char(p) (char *)((p) + g_utf8_skip[*(const guchar *)(p)])
#endif
