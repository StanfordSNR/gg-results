// GGHASH:VVS15qTaaP7gTA4RP8FwCIMUn6Y4D8h_5PJ9vUJ18gtE00000cfe
#ifndef __GTK_ALIGNMENT_H__
#define __GTK_ALIGNMENT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#define GTK_TYPE_ALIGNMENT (gtk_alignment_get_type ())
#define GTK_ALIGNMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ALIGNMENT, GtkAlignment))
#define GTK_ALIGNMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ALIGNMENT, GtkAlignmentClass))
#define GTK_IS_ALIGNMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ALIGNMENT))
#define GTK_IS_ALIGNMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ALIGNMENT))
#define GTK_ALIGNMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ALIGNMENT, GtkAlignmentClass))
#endif
