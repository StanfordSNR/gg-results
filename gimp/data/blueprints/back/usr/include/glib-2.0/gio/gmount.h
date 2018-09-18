// GGHASH:V02UcSIkz_4SNCxlHr9JLHFrCRWAt0.phOBkjHiiCirY00003daf
#ifndef __G_MOUNT_H__
#define __G_MOUNT_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_MOUNT (g_mount_get_type ())
#define G_MOUNT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_MOUNT, GMount))
#define G_IS_MOUNT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_MOUNT))
#define G_MOUNT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_MOUNT, GMountIface))
#endif
