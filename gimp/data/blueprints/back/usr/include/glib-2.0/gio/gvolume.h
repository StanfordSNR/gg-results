// GGHASH:VSblOrAWXVtCWmXE0IrNKEdVIJ2fVAvj4uFQzV03I21s00002d7a
#ifndef __G_VOLUME_H__
#define __G_VOLUME_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_VOLUME_IDENTIFIER_KIND_HAL_UDI "hal-udi"
#define G_VOLUME_IDENTIFIER_KIND_UNIX_DEVICE "unix-device"
#define G_VOLUME_IDENTIFIER_KIND_LABEL "label"
#define G_VOLUME_IDENTIFIER_KIND_UUID "uuid"
#define G_VOLUME_IDENTIFIER_KIND_NFS_MOUNT "nfs-mount"
#define G_VOLUME_IDENTIFIER_KIND_CLASS "class"
#define G_TYPE_VOLUME (g_volume_get_type ())
#define G_VOLUME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_VOLUME, GVolume))
#define G_IS_VOLUME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_VOLUME))
#define G_VOLUME_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_VOLUME, GVolumeIface))
#endif
