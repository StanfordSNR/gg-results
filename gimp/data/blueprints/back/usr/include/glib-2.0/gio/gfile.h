// GGHASH:VIQav1hbkY1Atz_uI7vCH04nyD5nBuUKbNJq_pjB0bek00013453
#ifndef __G_FILE_H__
#define __G_FILE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_FILE (g_file_get_type ())
#define G_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_FILE, GFile))
#define G_IS_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_FILE))
#define G_FILE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_FILE, GFileIface))
#if 0
#endif
#endif
