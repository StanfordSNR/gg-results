// GGHASH:Vj_m9vW1aUSo6UdfgsoJ5eSkUvCeLzr6IVamPko7JdSw0000529c
#ifndef __G_SETTINGS_H__
#define __G_SETTINGS_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gsettingsschema.h>
#include <gio/giotypes.h>
#define G_TYPE_SETTINGS (g_settings_get_type ())
#define G_SETTINGS(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SETTINGS, GSettings))
#define G_SETTINGS_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SETTINGS, GSettingsClass))
#define G_IS_SETTINGS(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SETTINGS))
#define G_IS_SETTINGS_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SETTINGS))
#define G_SETTINGS_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SETTINGS, GSettingsClass))
#endif
