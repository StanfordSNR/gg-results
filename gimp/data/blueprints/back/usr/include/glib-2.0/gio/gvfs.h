// GGHASH:VWWdOCfwx.yxeP7q63i5QFUFs0vP2xR_UmZ5AQv8IfRc000019d7
#ifndef __G_VFS_H__
#define __G_VFS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_VFS (g_vfs_get_type ())
#define G_VFS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_VFS, GVfs))
#define G_VFS_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_VFS, GVfsClass))
#define G_VFS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_VFS, GVfsClass))
#define G_IS_VFS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_VFS))
#define G_IS_VFS_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_VFS))
#define G_VFS_EXTENSION_POINT_NAME "gio-vfs"
#endif
