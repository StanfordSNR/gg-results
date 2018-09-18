// GGHASH:VJQu_AT7ol5zRB2hQi0J6TfuW.kVh7ZLSE3Ply4TOwsc000008de
#ifndef __G_NATIVE_VOLUME_MONITOR_H__
#define __G_NATIVE_VOLUME_MONITOR_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gvolumemonitor.h>
#define G_TYPE_NATIVE_VOLUME_MONITOR (g_native_volume_monitor_get_type ())
#define G_NATIVE_VOLUME_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NATIVE_VOLUME_MONITOR, GNativeVolumeMonitor))
#define G_NATIVE_VOLUME_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_NATIVE_VOLUME_MONITOR, GNativeVolumeMonitorClass))
#define G_IS_NATIVE_VOLUME_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NATIVE_VOLUME_MONITOR))
#define G_IS_NATIVE_VOLUME_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_NATIVE_VOLUME_MONITOR))
#define G_NATIVE_VOLUME_MONITOR_EXTENSION_POINT_NAME "gio-native-volume-monitor"
#endif
