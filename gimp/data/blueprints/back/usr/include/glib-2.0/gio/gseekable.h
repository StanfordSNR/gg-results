// GGHASH:V4zXWDzWvDsM3vfbzi8V4SJmZzVyhEKHVM3.m1h_c4mE00000cd0
#ifndef __G_SEEKABLE_H__
#define __G_SEEKABLE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SEEKABLE (g_seekable_get_type ())
#define G_SEEKABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_SEEKABLE, GSeekable))
#define G_IS_SEEKABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_SEEKABLE))
#define G_SEEKABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_SEEKABLE, GSeekableIface))
#endif
