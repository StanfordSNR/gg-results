// GGHASH:Vcg.yVAVoX41UFdQYtoiazVjoIHDcksFm75QF7rwdRKQ00001da5
#ifndef FTOTVAL_H_
#define FTOTVAL_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_VALIDATE_BASE 0x0100
#define FT_VALIDATE_GDEF 0x0200
#define FT_VALIDATE_GPOS 0x0400
#define FT_VALIDATE_GSUB 0x0800
#define FT_VALIDATE_JSTF 0x1000
#define FT_VALIDATE_MATH 0x2000
#define FT_VALIDATE_OT ( FT_VALIDATE_BASE | FT_VALIDATE_GDEF | FT_VALIDATE_GPOS | FT_VALIDATE_GSUB | FT_VALIDATE_JSTF | FT_VALIDATE_MATH )
#endif
