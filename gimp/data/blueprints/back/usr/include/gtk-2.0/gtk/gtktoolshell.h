// GGHASH:V1lVgWJJP6MtHiPVTkMX_dHPD8ha_JXWriOrqmIc9O5U00000fe8
#ifndef __GTK_TOOL_SHELL_H__
#define __GTK_TOOL_SHELL_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkenums.h>
#include <pango/pango.h>
#include <gtk/gtksizegroup.h>
#define GTK_TYPE_TOOL_SHELL (gtk_tool_shell_get_type ())
#define GTK_TOOL_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOL_SHELL, GtkToolShell))
#define GTK_IS_TOOL_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOL_SHELL))
#define GTK_TOOL_SHELL_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TOOL_SHELL, GtkToolShellIface))
#endif
