// GGHASH:VRemQcB0yBcvMWocZ16y2kDLgC9W.ICt6mJIeGt4cUq000001f4a
#ifndef __GTK_MENU_H__
#define __GTK_MENU_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaccelgroup.h>
#include <gtk/gtkmenushell.h>
#define GTK_TYPE_MENU (gtk_menu_get_type ())
#define GTK_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU, GtkMenu))
#define GTK_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU, GtkMenuClass))
#define GTK_IS_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU))
#define GTK_IS_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU))
#define GTK_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU, GtkMenuClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_menu_append(menu,child) gtk_menu_shell_append ((GtkMenuShell *)(menu),(child))
#define gtk_menu_prepend(menu,child) gtk_menu_shell_prepend ((GtkMenuShell *)(menu),(child))
#define gtk_menu_insert(menu,child,pos) gtk_menu_shell_insert ((GtkMenuShell *)(menu),(child),(pos))
#endif
#endif
