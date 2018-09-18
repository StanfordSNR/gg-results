// GGHASH:VHygXGi6EKL0eUzCz7nXiJnf5Rp82OJw9fG7wHX6DHhg00000ea5
#ifndef __ATK_STATE_SET_H__
#define __ATK_STATE_SET_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkobject.h>
#include <atk/atkstate.h>
#define ATK_TYPE_STATE_SET (atk_state_set_get_type ())
#define ATK_STATE_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_STATE_SET, AtkStateSet))
#define ATK_STATE_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_STATE_SET, AtkStateSetClass))
#define ATK_IS_STATE_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_STATE_SET))
#define ATK_IS_STATE_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_STATE_SET))
#define ATK_STATE_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_STATE_SET, AtkStateSetClass))
#endif
