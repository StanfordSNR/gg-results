// GGHASH:VEo34xD7zefCLOV4b3ynbkHzx.ix8eJZu.ql77z076hQ000008aa
#ifndef __G_FILE_DESCRIPTOR_BASED_H__
#define __G_FILE_DESCRIPTOR_BASED_H__ 
#include <gio/gio.h>
#define G_TYPE_FILE_DESCRIPTOR_BASED (g_file_descriptor_based_get_type ())
#define G_FILE_DESCRIPTOR_BASED(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_FILE_DESCRIPTOR_BASED, GFileDescriptorBased))
#define G_IS_FILE_DESCRIPTOR_BASED(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_FILE_DESCRIPTOR_BASED))
#define G_FILE_DESCRIPTOR_BASED_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_FILE_DESCRIPTOR_BASED, GFileDescriptorBasedIface))
#endif
