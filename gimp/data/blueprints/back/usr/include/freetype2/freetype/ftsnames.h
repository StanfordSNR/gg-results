// GGHASH:VahxUiywSr8eBso0axQ.T2S1DE0WABAAq0qy26Eprf2E000040db
#ifndef FTSNAMES_H_
#define FTSNAMES_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_PARAM_TAG_IGNORE_TYPOGRAPHIC_FAMILY FT_MAKE_TAG( 'i', 'g', 'p', 'f' )
#define FT_PARAM_TAG_IGNORE_PREFERRED_FAMILY FT_PARAM_TAG_IGNORE_TYPOGRAPHIC_FAMILY
#define FT_PARAM_TAG_IGNORE_TYPOGRAPHIC_SUBFAMILY FT_MAKE_TAG( 'i', 'g', 'p', 's' )
#define FT_PARAM_TAG_IGNORE_PREFERRED_SUBFAMILY FT_PARAM_TAG_IGNORE_TYPOGRAPHIC_SUBFAMILY
#endif
