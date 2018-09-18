// GGHASH:VkSJc5wy6KxVvTj3TkC6krhKsOnP.Vi2srunEh5QQLow000022ec
#ifndef __G_MENU_H__
#define __G_MENU_H__ 
#include <gio/gmenumodel.h>
#define G_TYPE_MENU (g_menu_get_type ())
#define G_MENU(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU, GMenu))
#define G_IS_MENU(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU))
#define G_TYPE_MENU_ITEM (g_menu_item_get_type ())
#define G_MENU_ITEM(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_ITEM, GMenuItem))
#define G_IS_MENU_ITEM(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_ITEM))
#endif
