// GGHASH:Vygh7kA7_G_4QV5PpQhJsZcayYw1HDp4UTQPFVU8w6H000009863
#ifndef __ATK_OBJECT_H__
#define __ATK_OBJECT_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkversion.h>
#include <atk/atkstate.h>
#include <atk/atkrelationtype.h>
#define ATK_TYPE_OBJECT (atk_object_get_type ())
#define ATK_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_OBJECT, AtkObject))
#define ATK_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_OBJECT, AtkObjectClass))
#define ATK_IS_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_OBJECT))
#define ATK_IS_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_OBJECT))
#define ATK_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_OBJECT, AtkObjectClass))
#define ATK_TYPE_IMPLEMENTOR (atk_implementor_get_type ())
#define ATK_IS_IMPLEMENTOR(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_IMPLEMENTOR)
#define ATK_IMPLEMENTOR(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_IMPLEMENTOR, AtkImplementor)
#define ATK_IMPLEMENTOR_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_IMPLEMENTOR, AtkImplementorIface))
#endif
