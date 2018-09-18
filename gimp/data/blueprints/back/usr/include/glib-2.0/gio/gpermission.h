// GGHASH:VVJo5I8DV2Gg4y_r4Dz9n6ju8q05kyrTcM5uQQikD4BU000016e6
#ifndef __G_PERMISSION_H__
#define __G_PERMISSION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_PERMISSION (g_permission_get_type ())
#define G_PERMISSION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_PERMISSION, GPermission))
#define G_PERMISSION_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_PERMISSION, GPermissionClass))
#define G_IS_PERMISSION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_PERMISSION))
#define G_IS_PERMISSION_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_PERMISSION))
#define G_PERMISSION_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_PERMISSION, GPermissionClass))
#endif
