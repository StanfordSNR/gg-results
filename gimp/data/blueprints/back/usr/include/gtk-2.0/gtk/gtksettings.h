// GGHASH:VlMV.WaYsFS.gXy5KyFp_bpLG1cecjeDg2uaMsSOfIkI00001398
#ifndef __GTK_SETTINGS_H__
#define __GTK_SETTINGS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkrc.h>
#define GTK_TYPE_SETTINGS (gtk_settings_get_type ())
#define GTK_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SETTINGS, GtkSettings))
#define GTK_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SETTINGS, GtkSettingsClass))
#define GTK_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SETTINGS))
#define GTK_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SETTINGS))
#define GTK_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SETTINGS, GtkSettingsClass))
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
