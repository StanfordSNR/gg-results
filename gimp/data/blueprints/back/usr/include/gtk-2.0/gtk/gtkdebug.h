// GGHASH:VshU0YKuWCjl4TnwnekHufusqoSOLrZK9VVVrBECH3Tg0000091a
#ifndef __GTK_DEBUG_H__
#define __GTK_DEBUG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <glib.h>
#ifdef G_ENABLE_DEBUG
#define GTK_NOTE(type,action) G_STMT_START { if (gtk_debug_flags & GTK_DEBUG_ ##type) { action; }; } G_STMT_END
#else
#define GTK_NOTE(type,action) 
#endif
#ifdef G_OS_WIN32
# ifdef GTK_COMPILATION
#define GTKVAR __declspec(dllexport)
# else
#define GTKVAR extern __declspec(dllimport)
# endif
#else
#define GTKVAR extern
#endif
#endif
