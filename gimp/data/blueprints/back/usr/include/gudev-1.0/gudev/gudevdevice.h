// GGHASH:VTgFx.hk6Lpm.Np0uZ9aYqE2wsp77c18CJuG.9Kt21I400001a6d
#if !defined (_GUDEV_COMPILATION) && !defined(_GUDEV_INSIDE_GUDEV_H)
#error "Only <gudev/gudev.h> can be included directly, this file may disappear or change contents."
#endif
#ifndef __G_UDEV_DEVICE_H__
#define __G_UDEV_DEVICE_H__ 
#include <gudev/gudevtypes.h>
#define G_UDEV_TYPE_DEVICE (g_udev_device_get_type ())
#define G_UDEV_DEVICE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_UDEV_TYPE_DEVICE, GUdevDevice))
#define G_UDEV_DEVICE_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_UDEV_TYPE_DEVICE, GUdevDeviceClass))
#define G_UDEV_IS_DEVICE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_UDEV_TYPE_DEVICE))
#define G_UDEV_IS_DEVICE_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_UDEV_TYPE_DEVICE))
#define G_UDEV_DEVICE_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_UDEV_TYPE_DEVICE, GUdevDeviceClass))
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
