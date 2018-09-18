// GGHASH:Vzf1EcANgDZw_MoazTTJjTypI3ErPptona9KdDwuNefk0000385a
#ifndef __PANGO_OT_H__
#define __PANGO_OT_H__ 
#include <pango/pangofc-font.h>
#include <pango/pango-glyph.h>
#include <pango/pango-font.h>
#include <pango/pango-script.h>
#include <pango/pango-language.h>
#ifdef PANGO_ENABLE_ENGINE
#define PANGO_OT_TAG_MAKE(c1,c2,c3,c4) ((PangoOTTag) FT_MAKE_TAG (c1, c2, c3, c4))
#define PANGO_OT_TAG_MAKE_FROM_STRING(s) (PANGO_OT_TAG_MAKE(((const char *) s)[0], ((const char *) s)[1], ((const char *) s)[2], ((const char *) s)[3]))
#define PANGO_OT_ALL_GLYPHS ((guint) 0xFFFF)
#define PANGO_OT_NO_FEATURE ((guint) 0xFFFF)
#define PANGO_OT_NO_SCRIPT ((guint) 0xFFFF)
#define PANGO_OT_DEFAULT_LANGUAGE ((guint) 0xFFFF)
#define PANGO_OT_TAG_DEFAULT_SCRIPT PANGO_OT_TAG_MAKE ('D', 'F', 'L', 'T')
#define PANGO_OT_TAG_DEFAULT_LANGUAGE PANGO_OT_TAG_MAKE ('d', 'f', 'l', 't')
#define PANGO_TYPE_OT_INFO (pango_ot_info_get_type ())
#define PANGO_OT_INFO(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_OT_INFO, PangoOTInfo))
#define PANGO_IS_OT_INFO(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_OT_INFO))
#define PANGO_TYPE_OT_RULESET (pango_ot_ruleset_get_type ())
#define PANGO_OT_RULESET(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_OT_RULESET, PangoOTRuleset))
#define PANGO_IS_OT_RULESET(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_OT_RULESET))
#endif
#endif
