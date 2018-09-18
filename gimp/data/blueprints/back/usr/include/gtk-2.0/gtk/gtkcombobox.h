// GGHASH:Vp0J5nY6PtPp4ykK3yKiX61du6k6EwAdPh5cpbpswKK400001ab3
#ifndef __GTK_COMBO_BOX_H__
#define __GTK_COMBO_BOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#include <gtk/gtktreemodel.h>
#include <gtk/gtktreeview.h>
#define GTK_TYPE_COMBO_BOX (gtk_combo_box_get_type ())
#define GTK_COMBO_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO_BOX, GtkComboBox))
#define GTK_COMBO_BOX_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_COMBO_BOX, GtkComboBoxClass))
#define GTK_IS_COMBO_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO_BOX))
#define GTK_IS_COMBO_BOX_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_COMBO_BOX))
#define GTK_COMBO_BOX_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_COMBO_BOX, GtkComboBoxClass))
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#endif
