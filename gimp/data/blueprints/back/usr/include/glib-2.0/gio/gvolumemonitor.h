// GGHASH:VVeD45SHWSuTJ.wkkuWf4AgxLMPJ16r9VTWs49mnxEcQ0000176e
#ifndef __G_VOLUME_MONITOR_H__
#define __G_VOLUME_MONITOR_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_VOLUME_MONITOR (g_volume_monitor_get_type ())
#define G_VOLUME_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_VOLUME_MONITOR, GVolumeMonitor))
#define G_VOLUME_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_VOLUME_MONITOR, GVolumeMonitorClass))
#define G_VOLUME_MONITOR_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_VOLUME_MONITOR, GVolumeMonitorClass))
#define G_IS_VOLUME_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_VOLUME_MONITOR))
#define G_IS_VOLUME_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_VOLUME_MONITOR))
#define G_VOLUME_MONITOR_EXTENSION_POINT_NAME "gio-volume-monitor"
#endif
