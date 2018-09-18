// GGHASH:V1__Mpuj9JH_iR8AmGe5Z_LXJPul3yA.9TIMKmV9EM5c00000c0a
#ifndef __GTK_COMBO_BOX_ENTRY_H__
#define __GTK_COMBO_BOX_ENTRY_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcombobox.h>
#include <gtk/gtktreemodel.h>
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_TYPE_COMBO_BOX_ENTRY (gtk_combo_box_entry_get_type ())
#define GTK_COMBO_BOX_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO_BOX_ENTRY, GtkComboBoxEntry))
#define GTK_COMBO_BOX_ENTRY_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_COMBO_BOX_ENTRY, GtkComboBoxEntryClass))
#define GTK_IS_COMBO_BOX_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO_BOX_ENTRY))
#define GTK_IS_COMBO_BOX_ENTRY_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_COMBO_BOX_ENTRY))
#define GTK_COMBO_BOX_ENTRY_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_COMBO_BOX_ENTRY, GtkComboBoxEntryClass))
#endif
#endif
