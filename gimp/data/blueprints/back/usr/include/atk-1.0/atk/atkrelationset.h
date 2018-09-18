// GGHASH:VD10mVet4MEzH4ArPVVwmyfSiY.mrOv4pAEyeRF6QsIs00000ece
#ifndef __ATK_RELATION_SET_H__
#define __ATK_RELATION_SET_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkobject.h>
#include <atk/atkrelation.h>
#define ATK_TYPE_RELATION_SET (atk_relation_set_get_type ())
#define ATK_RELATION_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_RELATION_SET, AtkRelationSet))
#define ATK_RELATION_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_RELATION_SET, AtkRelationSetClass))
#define ATK_IS_RELATION_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_RELATION_SET))
#define ATK_IS_RELATION_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_RELATION_SET))
#define ATK_RELATION_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_RELATION_SET, AtkRelationSetClass))
#endif
