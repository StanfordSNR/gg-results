// GGHASH:VGbX1masNo1yMBQe1QDdkdNlnSvEgu_5QaKdQhfC3woc00003c88
#ifndef FTTTDRV_H_
#define FTTTDRV_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define TT_INTERPRETER_VERSION_35 35
#define TT_INTERPRETER_VERSION_38 38
#define TT_INTERPRETER_VERSION_40 40
#endif
