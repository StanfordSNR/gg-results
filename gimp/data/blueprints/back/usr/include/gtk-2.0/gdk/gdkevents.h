// GGHASH:Vixa22zoKLtpVxk53ju_NLEIXq79XukE_eJGT_rmqi1A0000373e
#ifndef __GDK_EVENTS_H__
#define __GDK_EVENTS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdkcolor.h>
#include <gdk/gdktypes.h>
#include <gdk/gdkdnd.h>
#include <gdk/gdkinput.h>
#define GDK_TYPE_EVENT (gdk_event_get_type ())
#define GDK_PRIORITY_EVENTS (G_PRIORITY_DEFAULT)
#define GDK_PRIORITY_REDRAW (G_PRIORITY_HIGH_IDLE + 20)
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
