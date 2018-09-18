// GGHASH:VpN8jNV9sbbgmdRJT04zR5R2VCPVcHyzVQGlhZ1baPlU00001522
#ifndef __GTK_MENU_SHELL_H__
#define __GTK_MENU_SHELL_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_MENU_SHELL (gtk_menu_shell_get_type ())
#define GTK_MENU_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_SHELL, GtkMenuShell))
#define GTK_MENU_SHELL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_SHELL, GtkMenuShellClass))
#define GTK_IS_MENU_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_SHELL))
#define GTK_IS_MENU_SHELL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_SHELL))
#define GTK_MENU_SHELL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_SHELL, GtkMenuShellClass))
#endif
