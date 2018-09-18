// GGHASH:VeWdBicktJI6QOi9ow82fd_jcMy1YA3I5Rc9BdRmwrPw0000213c
#ifndef __G_SETTINGS_BACKEND_H__
#define __G_SETTINGS_BACKEND_H__ 
#if !defined (G_SETTINGS_ENABLE_BACKEND) && !defined (GIO_COMPILATION)
#error "You must define G_SETTINGS_ENABLE_BACKEND before including <gio/gsettingsbackend.h>."
#endif
#define __GIO_GIO_H_INSIDE__ 
#include <gio/giotypes.h>
#undef __GIO_GIO_H_INSIDE__
#define G_TYPE_SETTINGS_BACKEND (g_settings_backend_get_type ())
#define G_SETTINGS_BACKEND(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SETTINGS_BACKEND, GSettingsBackend))
#define G_SETTINGS_BACKEND_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SETTINGS_BACKEND, GSettingsBackendClass))
#define G_IS_SETTINGS_BACKEND(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SETTINGS_BACKEND))
#define G_IS_SETTINGS_BACKEND_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SETTINGS_BACKEND))
#define G_SETTINGS_BACKEND_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SETTINGS_BACKEND, GSettingsBackendClass))
#define G_SETTINGS_BACKEND_EXTENSION_POINT_NAME "gsettings-backend"
#endif
