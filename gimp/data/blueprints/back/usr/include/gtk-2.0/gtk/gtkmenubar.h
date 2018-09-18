// GGHASH:VMRXOmQAClWL7XSDOr9.7_Us56ItWcEHSG8nTHXenpDQ00000d33
#ifndef __GTK_MENU_BAR_H__
#define __GTK_MENU_BAR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmenushell.h>
#define GTK_TYPE_MENU_BAR (gtk_menu_bar_get_type ())
#define GTK_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_BAR, GtkMenuBar))
#define GTK_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_BAR, GtkMenuBarClass))
#define GTK_IS_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_BAR))
#define GTK_IS_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_BAR))
#define GTK_MENU_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_BAR, GtkMenuBarClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_menu_bar_append(menu,child) gtk_menu_shell_append ((GtkMenuShell *)(menu),(child))
#define gtk_menu_bar_prepend(menu,child) gtk_menu_shell_prepend ((GtkMenuShell *)(menu),(child))
#define gtk_menu_bar_insert(menu,child,pos) gtk_menu_shell_insert ((GtkMenuShell *)(menu),(child),(pos))
#endif
#endif
