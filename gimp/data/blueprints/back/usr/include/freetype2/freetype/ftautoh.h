// GGHASH:VvdKcj3sGg2FixnE2_ffUF9Yw0DrVjkd6o4XkquVQjaw00004dbf
#ifndef FTAUTOH_H_
#define FTAUTOH_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_AUTOHINTER_SCRIPT_NONE 0
#define FT_AUTOHINTER_SCRIPT_LATIN 1
#define FT_AUTOHINTER_SCRIPT_CJK 2
#define FT_AUTOHINTER_SCRIPT_INDIC 3
#define FT_PARAM_TAG_STEM_DARKENING FT_MAKE_TAG( 'd', 'a', 'r', 'k' )
#endif
