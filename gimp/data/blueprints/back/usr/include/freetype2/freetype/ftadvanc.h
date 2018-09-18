// GGHASH:VM9VNp7Bp0yR4faxXjM2586kCODKbucTMPZAV7ZGD9oc0000298c
#ifndef FTADVANC_H_
#define FTADVANC_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_ADVANCE_FLAG_FAST_ONLY 0x20000000L
#endif
