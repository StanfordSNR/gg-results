// GGHASH:VLXDioUdcJDNXunsv6o5kjlnSOLQGBlhzk84gsGv9hls00001bd9
#ifndef __G_UNIX_MOUNTS_H__
#define __G_UNIX_MOUNTS_H__ 
#include <gio/gio.h>
#define G_TYPE_UNIX_MOUNT_ENTRY (g_unix_mount_entry_get_type ())
#define G_TYPE_UNIX_MOUNT_POINT (g_unix_mount_point_get_type ())
#define G_TYPE_UNIX_MOUNT_MONITOR (g_unix_mount_monitor_get_type ())
#define G_UNIX_MOUNT_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_MOUNT_MONITOR, GUnixMountMonitor))
#define G_UNIX_MOUNT_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_UNIX_MOUNT_MONITOR, GUnixMountMonitorClass))
#define G_IS_UNIX_MOUNT_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_MOUNT_MONITOR))
#define G_IS_UNIX_MOUNT_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_UNIX_MOUNT_MONITOR))
#endif
