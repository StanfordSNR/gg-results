// GGHASH:VcmosI8h56kuH069QHZasdVauvhWu_BQa0_6mD0muItU00000fae
#if !defined (_GUDEV_COMPILATION) && !defined(_GUDEV_INSIDE_GUDEV_H)
#error "Only <gudev/gudev.h> can be included directly, this file may disappear or change contents."
#endif
#ifndef __G_UDEV_CLIENT_H__
#define __G_UDEV_CLIENT_H__ 
#include <gudev/gudevtypes.h>
#define G_UDEV_TYPE_CLIENT (g_udev_client_get_type ())
#define G_UDEV_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_UDEV_TYPE_CLIENT, GUdevClient))
#define G_UDEV_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_UDEV_TYPE_CLIENT, GUdevClientClass))
#define G_UDEV_IS_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_UDEV_TYPE_CLIENT))
#define G_UDEV_IS_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_UDEV_TYPE_CLIENT))
#define G_UDEV_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_UDEV_TYPE_CLIENT, GUdevClientClass))
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
