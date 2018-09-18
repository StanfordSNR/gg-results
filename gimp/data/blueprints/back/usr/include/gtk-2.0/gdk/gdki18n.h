// GGHASH:Vd147Yucp2tb_YESlFiBQSGG6_hGeB6Gjn20m70MX2HM00000753
#ifndef __GDK_I18N_H__
#define __GDK_I18N_H__ 
#ifndef GDK_DISABLE_DEPRECATED
#include <glib.h>
#include <gdkconfig.h>
#include <stdlib.h>
#if !defined(GDK_HAVE_BROKEN_WCTYPE) && (defined(GDK_HAVE_WCTYPE_H) || defined(GDK_HAVE_WCHAR_H)) && !defined(X_LOCALE)
# ifdef GDK_HAVE_WCTYPE_H
# include <wctype.h>
# else
# ifdef GDK_HAVE_WCHAR_H
# include <wchar.h>
# endif
# endif
#define gdk_iswalnum(c) iswalnum(c)
#define gdk_iswspace(c) iswspace(c)
#else
# include <ctype.h>
#define gdk_iswalnum(c) ((wchar_t)(c) <= 0xFF && isalnum(c))
#define gdk_iswspace(c) ((wchar_t)(c) <= 0xFF && isspace(c))
#endif
#endif
#endif
