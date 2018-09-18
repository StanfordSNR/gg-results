// GGHASH:VHZ3lA0IOubiMGJGyv5BAJVbKyez7SAG7eLR9ucfzyXI0000106e
#ifndef __GTK_ACCEL_LABEL_H__
#define __GTK_ACCEL_LABEL_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtklabel.h>
#define GTK_TYPE_ACCEL_LABEL (gtk_accel_label_get_type ())
#define GTK_ACCEL_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACCEL_LABEL, GtkAccelLabel))
#define GTK_ACCEL_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCEL_LABEL, GtkAccelLabelClass))
#define GTK_IS_ACCEL_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACCEL_LABEL))
#define GTK_IS_ACCEL_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCEL_LABEL))
#define GTK_ACCEL_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCEL_LABEL, GtkAccelLabelClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_accel_label_accelerator_width gtk_accel_label_get_accel_width
#endif
#endif
