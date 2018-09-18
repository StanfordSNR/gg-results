// GGHASH:VWnIDiH6EprelLH8Vm6DMeY5GtP7wzFT6uftPH1lv6xg00000ac4
#ifndef __G_NETWORK_SERVICE_H__
#define __G_NETWORK_SERVICE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_NETWORK_SERVICE (g_network_service_get_type ())
#define G_NETWORK_SERVICE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_NETWORK_SERVICE, GNetworkService))
#define G_NETWORK_SERVICE_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_NETWORK_SERVICE, GNetworkServiceClass))
#define G_IS_NETWORK_SERVICE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_NETWORK_SERVICE))
#define G_IS_NETWORK_SERVICE_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_NETWORK_SERVICE))
#define G_NETWORK_SERVICE_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_NETWORK_SERVICE, GNetworkServiceClass))
#endif
