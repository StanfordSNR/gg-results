// GGHASH:VlfrR0Kn.T.zc45yYvFE3IU_XwJhOwuCk39XX.2Xk6Zs0000091e
#ifndef TTUNPAT_H_
#define TTUNPAT_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_PARAM_TAG_UNPATENTED_HINTING FT_MAKE_TAG( 'u', 'n', 'p', 'a' )
#endif
