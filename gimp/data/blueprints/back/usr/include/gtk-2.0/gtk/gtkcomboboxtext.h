// GGHASH:VPeeHvLxJhteXaMHV175Y8qTV9y6LJyamwQ3VKP4SfNw00000ce2
#ifndef __GTK_COMBO_BOX_TEXT_H__
#define __GTK_COMBO_BOX_TEXT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcombobox.h>
#define GTK_TYPE_COMBO_BOX_TEXT (gtk_combo_box_text_get_type ())
#define GTK_COMBO_BOX_TEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO_BOX_TEXT, GtkComboBoxText))
#define GTK_COMBO_BOX_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COMBO_BOX_TEXT, GtkComboBoxTextClass))
#define GTK_IS_COMBO_BOX_TEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO_BOX_TEXT))
#define GTK_IS_COMBO_BOX_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COMBO_BOX_TEXT))
#define GTK_COMBO_BOX_TEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COMBO_BOX_TEXT, GtkComboBoxTextClass))
#endif
