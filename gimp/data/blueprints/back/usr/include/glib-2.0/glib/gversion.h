// GGHASH:VAPNDwcr5idBink75LTTeVzCmelzXEuoDIiQGhsOFI5M000007bd
#ifndef __G_VERSION_H__
#define __G_VERSION_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define GLIB_CHECK_VERSION(major,minor,micro) (GLIB_MAJOR_VERSION > (major) || (GLIB_MAJOR_VERSION == (major) && GLIB_MINOR_VERSION > (minor)) || (GLIB_MAJOR_VERSION == (major) && GLIB_MINOR_VERSION == (minor) && GLIB_MICRO_VERSION >= (micro)))
#endif
