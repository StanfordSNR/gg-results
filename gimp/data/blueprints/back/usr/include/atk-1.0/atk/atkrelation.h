// GGHASH:VWww8WAATGAFQHthr1tTsWRi2doKXF9yVPD2g58TvQzE00000e8e
#ifndef __ATK_RELATION_H__
#define __ATK_RELATION_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <glib-object.h>
#include <atk/atkrelationtype.h>
#include <atk/atkversion.h>
#define ATK_TYPE_RELATION (atk_relation_get_type ())
#define ATK_RELATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_RELATION, AtkRelation))
#define ATK_RELATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_RELATION, AtkRelationClass))
#define ATK_IS_RELATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_RELATION))
#define ATK_IS_RELATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_RELATION))
#define ATK_RELATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_RELATION, AtkRelationClass))
#endif
