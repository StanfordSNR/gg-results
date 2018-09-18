// GGHASH:VBnGWm_49QAMnNfVa60MlHiqC4QkEmu8hQCRND04KoT800001621
#ifndef __GDK_TYPES_H__
#define __GDK_TYPES_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <glib.h>
#include <pango/pango.h>
#include <glib-object.h>
#ifdef G_OS_WIN32
# ifdef GDK_COMPILATION
#define GDKVAR __declspec(dllexport)
# else
#define GDKVAR extern __declspec(dllimport)
# endif
#else
#define GDKVAR extern
#endif
#include <gdkconfig.h>
#define GDK_CURRENT_TIME 0L
#define GDK_PARENT_RELATIVE 1L
#define GDK_ATOM_TO_POINTER(atom) (atom)
#define GDK_POINTER_TO_ATOM(ptr) ((GdkAtom)(ptr))
#ifdef GDK_NATIVE_WINDOW_POINTER
#define GDK_GPOINTER_TO_NATIVE_WINDOW(p) ((GdkNativeWindow) (p))
#else
#define GDK_GPOINTER_TO_NATIVE_WINDOW(p) GPOINTER_TO_UINT(p)
#endif
#define _GDK_MAKE_ATOM(val) ((GdkAtom)GUINT_TO_POINTER(val))
#define GDK_NONE _GDK_MAKE_ATOM (0)
#ifdef GDK_NATIVE_WINDOW_POINTER
#else
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#endif
