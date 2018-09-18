// GGHASH:VmWt1oxhgq2Nb8X48hiNHShNgNxa4rLjI17c1Z7irHUo00000b7b
#ifndef __GTK_RECENT_CHOOSER_MENU_H__
#define __GTK_RECENT_CHOOSER_MENU_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmenu.h>
#include <gtk/gtkrecentchooser.h>
#define GTK_TYPE_RECENT_CHOOSER_MENU (gtk_recent_chooser_menu_get_type ())
#define GTK_RECENT_CHOOSER_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER_MENU, GtkRecentChooserMenu))
#define GTK_IS_RECENT_CHOOSER_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER_MENU))
#define GTK_RECENT_CHOOSER_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_CHOOSER_MENU, GtkRecentChooserMenuClass))
#define GTK_IS_RECENT_CHOOSER_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_CHOOSER_MENU))
#define GTK_RECENT_CHOOSER_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_CHOOSER_MENU, GtkRecentChooserMenuClass))
#endif
