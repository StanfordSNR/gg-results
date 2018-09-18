// GGHASH:VQmM_2DwYiIbq9hC5ruCfUdPTDHQv8QyDS6gCodBMPfk00003b81
#ifndef __G_KEY_FILE_H__
#define __G_KEY_FILE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gbytes.h>
#include <glib/gerror.h>
#define G_KEY_FILE_ERROR g_key_file_error_quark()
#define G_KEY_FILE_DESKTOP_GROUP "Desktop Entry"
#define G_KEY_FILE_DESKTOP_ACTION_GROUP_PREFIX "Desktop Action"
#define G_KEY_FILE_DESKTOP_KEY_TYPE "Type"
#define G_KEY_FILE_DESKTOP_KEY_VERSION "Version"
#define G_KEY_FILE_DESKTOP_KEY_NAME "Name"
#define G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME "GenericName"
#define G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY "NoDisplay"
#define G_KEY_FILE_DESKTOP_KEY_COMMENT "Comment"
#define G_KEY_FILE_DESKTOP_KEY_ICON "Icon"
#define G_KEY_FILE_DESKTOP_KEY_HIDDEN "Hidden"
#define G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN "OnlyShowIn"
#define G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN "NotShowIn"
#define G_KEY_FILE_DESKTOP_KEY_TRY_EXEC "TryExec"
#define G_KEY_FILE_DESKTOP_KEY_EXEC "Exec"
#define G_KEY_FILE_DESKTOP_KEY_PATH "Path"
#define G_KEY_FILE_DESKTOP_KEY_TERMINAL "Terminal"
#define G_KEY_FILE_DESKTOP_KEY_MIME_TYPE "MimeType"
#define G_KEY_FILE_DESKTOP_KEY_CATEGORIES "Categories"
#define G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY "StartupNotify"
#define G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS "StartupWMClass"
#define G_KEY_FILE_DESKTOP_KEY_URL "URL"
#define G_KEY_FILE_DESKTOP_KEY_DBUS_ACTIVATABLE "DBusActivatable"
#define G_KEY_FILE_DESKTOP_KEY_ACTIONS "Actions"
#define G_KEY_FILE_DESKTOP_KEY_GETTEXT_DOMAIN "X-GNOME-Gettext-Domain"
#define G_KEY_FILE_DESKTOP_KEY_FULLNAME "X-GNOME-FullName"
#define G_KEY_FILE_DESKTOP_KEY_KEYWORDS "Keywords"
#define G_KEY_FILE_DESKTOP_TYPE_APPLICATION "Application"
#define G_KEY_FILE_DESKTOP_TYPE_LINK "Link"
#define G_KEY_FILE_DESKTOP_TYPE_DIRECTORY "Directory"
#endif
