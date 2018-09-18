// GGHASH:VRqR67ausksuR5fk0_8HnQGu7WnoK0g06msYLQUOng6k00001296
#ifndef __ATK_ACTION_H__
#define __ATK_ACTION_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_ACTION (atk_action_get_type ())
#define ATK_IS_ACTION(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_ACTION)
#define ATK_ACTION(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_ACTION, AtkAction)
#define ATK_ACTION_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_ACTION, AtkActionIface))
#ifndef _TYPEDEF_ATK_ACTION_
#define _TYPEDEF_ATK_ACTION_ 
#endif
#endif
