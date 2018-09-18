// GGHASH:V0tGta4H_RDUmjDDrtc4D1jQQ3WkViP4IJy8oZZQSgvo000012b5
#ifndef FTGASP_H_
#define FTGASP_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_GASP_NO_TABLE -1
#define FT_GASP_DO_GRIDFIT 0x01
#define FT_GASP_DO_GRAY 0x02
#define FT_GASP_SYMMETRIC_GRIDFIT 0x04
#define FT_GASP_SYMMETRIC_SMOOTHING 0x08
#endif
