// GGHASH:VxmxrfLCh80Tk.h6WUEIBQ0Rj49O0Q11dQJ7v4HBcjIo0000206d
#ifndef __GDK_H__
#define __GDK_H__ 
#define __GDK_H_INSIDE__ 
#include <gdk/gdkapplaunchcontext.h>
#include <gdk/gdkcairo.h>
#include <gdk/gdkcolor.h>
#include <gdk/gdkcursor.h>
#include <gdk/gdkdisplay.h>
#include <gdk/gdkdisplaymanager.h>
#include <gdk/gdkdnd.h>
#include <gdk/gdkdrawable.h>
#include <gdk/gdkenumtypes.h>
#include <gdk/gdkevents.h>
#include <gdk/gdkfont.h>
#include <gdk/gdkgc.h>
#include <gdk/gdkimage.h>
#include <gdk/gdkinput.h>
#include <gdk/gdkkeys.h>
#include <gdk/gdkpango.h>
#include <gdk/gdkpixbuf.h>
#include <gdk/gdkpixmap.h>
#include <gdk/gdkproperty.h>
#include <gdk/gdkregion.h>
#include <gdk/gdkrgb.h>
#include <gdk/gdkscreen.h>
#include <gdk/gdkselection.h>
#include <gdk/gdkspawn.h>
#include <gdk/gdktestutils.h>
#include <gdk/gdktypes.h>
#include <gdk/gdkvisual.h>
#include <gdk/gdkwindow.h>
#undef __GDK_H_INSIDE__
#define GDK_PRIORITY_EVENTS (G_PRIORITY_DEFAULT)
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#define GDK_TYPE_RECTANGLE (gdk_rectangle_get_type ())
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#if !defined (GDK_DISABLE_DEPRECATED) || defined (GDK_COMPILATION)
#endif
#ifdef G_THREADS_ENABLED
#define GDK_THREADS_ENTER() G_STMT_START { if (gdk_threads_lock) (*gdk_threads_lock) (); } G_STMT_END
#define GDK_THREADS_LEAVE() G_STMT_START { if (gdk_threads_unlock) (*gdk_threads_unlock) (); } G_STMT_END
#else
#define GDK_THREADS_ENTER() 
#define GDK_THREADS_LEAVE() 
#endif
#endif
