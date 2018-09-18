// GGHASH:Vxe3TTKLp79uNwLKfCG3wZIlGgzlJuARItQw4AcQdp7s000006c2
#ifndef __G_DBUS_MENU_MODEL_H__
#define __G_DBUS_MENU_MODEL_H__ 
#include <gio/gdbusconnection.h>
#define G_TYPE_DBUS_MENU_MODEL (g_dbus_menu_model_get_type ())
#define G_DBUS_MENU_MODEL(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DBUS_MENU_MODEL, GDBusMenuModel))
#define G_IS_DBUS_MENU_MODEL(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DBUS_MENU_MODEL))
#endif
