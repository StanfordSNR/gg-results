// GGHASH:V2AH.GvL2ERSnTb8EMltOSbt_m_NtmuX60aP1eOUjOgk000037d8
#ifndef __G_DRIVE_H__
#define __G_DRIVE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_DRIVE (g_drive_get_type ())
#define G_DRIVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_DRIVE, GDrive))
#define G_IS_DRIVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_DRIVE))
#define G_DRIVE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_DRIVE, GDriveIface))
#endif
