// GGHASH:VZEewHBAGTaizyIzekt268hbydi6Avz8.OwGuRMmOgMs00000ac0
#ifndef __GTK_VBBOX_H__
#define __GTK_VBBOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbbox.h>
#define GTK_TYPE_VBUTTON_BOX (gtk_vbutton_box_get_type ())
#define GTK_VBUTTON_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VBUTTON_BOX, GtkVButtonBox))
#define GTK_VBUTTON_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VBUTTON_BOX, GtkVButtonBoxClass))
#define GTK_IS_VBUTTON_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VBUTTON_BOX))
#define GTK_IS_VBUTTON_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VBUTTON_BOX))
#define GTK_VBUTTON_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VBUTTON_BOX, GtkVButtonBoxClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
