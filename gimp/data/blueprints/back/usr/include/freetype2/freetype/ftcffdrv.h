// GGHASH:VQMEsztiOzi2vajU3KssbuiaOytls9586aYHWRz9pfPc00003074
#ifndef FTCFFDRV_H_
#define FTCFFDRV_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_CFF_HINTING_FREETYPE 0
#define FT_CFF_HINTING_ADOBE 1
#define FT_PARAM_TAG_RANDOM_SEED FT_MAKE_TAG( 's', 'e', 'e', 'd' )
#endif
