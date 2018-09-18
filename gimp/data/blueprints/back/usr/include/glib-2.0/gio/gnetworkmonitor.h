// GGHASH:V16Q0x71L7AV3lHSLKtBdkIvCRjvuQUl9TFePg4fPgmw0000108f
#ifndef __G_NETWORK_MONITOR_H__
#define __G_NETWORK_MONITOR_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_NETWORK_MONITOR_EXTENSION_POINT_NAME "gio-network-monitor"
#define G_TYPE_NETWORK_MONITOR (g_network_monitor_get_type ())
#define G_NETWORK_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NETWORK_MONITOR, GNetworkMonitor))
#define G_IS_NETWORK_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NETWORK_MONITOR))
#define G_NETWORK_MONITOR_GET_INTERFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), G_TYPE_NETWORK_MONITOR, GNetworkMonitorInterface))
#endif
