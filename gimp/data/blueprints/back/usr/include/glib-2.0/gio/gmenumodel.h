// GGHASH:VK2KQmFs8SOcTTHWCOuLbcrvwmZ9.6IMdZZEYTL5D62Q000037fe
#ifndef __G_MENU_MODEL_H__
#define __G_MENU_MODEL_H__ 
#include <glib-object.h>
#include <gio/giotypes.h>
#define G_MENU_ATTRIBUTE_ACTION "action"
#define G_MENU_ATTRIBUTE_ACTION_NAMESPACE "action-namespace"
#define G_MENU_ATTRIBUTE_TARGET "target"
#define G_MENU_ATTRIBUTE_LABEL "label"
#define G_MENU_ATTRIBUTE_ICON "icon"
#define G_MENU_LINK_SUBMENU "submenu"
#define G_MENU_LINK_SECTION "section"
#define G_TYPE_MENU_MODEL (g_menu_model_get_type ())
#define G_MENU_MODEL(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_MODEL, GMenuModel))
#define G_MENU_MODEL_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_MENU_MODEL, GMenuModelClass))
#define G_IS_MENU_MODEL(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_MODEL))
#define G_IS_MENU_MODEL_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_MENU_MODEL))
#define G_MENU_MODEL_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_MENU_MODEL, GMenuModelClass))
#define G_TYPE_MENU_ATTRIBUTE_ITER (g_menu_attribute_iter_get_type ())
#define G_MENU_ATTRIBUTE_ITER(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_ATTRIBUTE_ITER, GMenuAttributeIter))
#define G_MENU_ATTRIBUTE_ITER_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_MENU_ATTRIBUTE_ITER, GMenuAttributeIterClass))
#define G_IS_MENU_ATTRIBUTE_ITER(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_ATTRIBUTE_ITER))
#define G_IS_MENU_ATTRIBUTE_ITER_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_MENU_ATTRIBUTE_ITER))
#define G_MENU_ATTRIBUTE_ITER_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_MENU_ATTRIBUTE_ITER, GMenuAttributeIterClass))
#define G_TYPE_MENU_LINK_ITER (g_menu_link_iter_get_type ())
#define G_MENU_LINK_ITER(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_MENU_LINK_ITER, GMenuLinkIter))
#define G_MENU_LINK_ITER_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_MENU_LINK_ITER, GMenuLinkIterClass))
#define G_IS_MENU_LINK_ITER(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_MENU_LINK_ITER))
#define G_IS_MENU_LINK_ITER_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_MENU_LINK_ITER))
#define G_MENU_LINK_ITER_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_MENU_LINK_ITER, GMenuLinkIterClass))
#endif
