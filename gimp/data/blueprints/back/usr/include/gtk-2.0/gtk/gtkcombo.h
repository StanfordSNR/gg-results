// GGHASH:V.dp9G3v.i4Widu.eJHfWn.IZJeyguU.8qC00Heu3rhU0000104a
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_SMART_COMBO_H__
#define __GTK_SMART_COMBO_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_COMBO (gtk_combo_get_type ())
#define GTK_COMBO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO, GtkCombo))
#define GTK_COMBO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COMBO, GtkComboClass))
#define GTK_IS_COMBO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO))
#define GTK_IS_COMBO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COMBO))
#define GTK_COMBO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COMBO, GtkComboClass))
#endif
#endif
