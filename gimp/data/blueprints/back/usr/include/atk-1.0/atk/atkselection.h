// GGHASH:VGp.6FuXQdk1Wm5lNqqJJu07N7TfOodayMxwrJSdCjvo00000f4d
#ifndef __ATK_SELECTION_H__
#define __ATK_SELECTION_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_SELECTION (atk_selection_get_type ())
#define ATK_IS_SELECTION(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_SELECTION)
#define ATK_SELECTION(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_SELECTION, AtkSelection)
#define ATK_SELECTION_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_SELECTION, AtkSelectionIface))
#ifndef _TYPEDEF_ATK_SELECTION_
#define _TYPEDEF_ATK_SELECTION_ 
#endif
#endif
