// GGHASH:VTJjLrZRDtx_tYuExduGHi1vtZAXy0EIeNLSXK1Duo8E000020e8
#ifndef FTTRIGON_H_
#define FTTRIGON_H_ 
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_ANGLE_PI ( 180L << 16 )
#define FT_ANGLE_2PI ( FT_ANGLE_PI * 2 )
#define FT_ANGLE_PI2 ( FT_ANGLE_PI / 2 )
#define FT_ANGLE_PI4 ( FT_ANGLE_PI / 4 )
#endif
