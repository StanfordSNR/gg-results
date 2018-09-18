// GGHASH:V7HDHsFP8pjM51FJCqx_wSNwibTh8Ub7PqBLwAJhxhTo00000cd0
#ifndef __G_FILE_MONITOR_H__
#define __G_FILE_MONITOR_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_FILE_MONITOR (g_file_monitor_get_type ())
#define G_FILE_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_MONITOR, GFileMonitor))
#define G_FILE_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_MONITOR, GFileMonitorClass))
#define G_IS_FILE_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_MONITOR))
#define G_IS_FILE_MONITOR_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_MONITOR))
#define G_FILE_MONITOR_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_MONITOR, GFileMonitorClass))
#endif
