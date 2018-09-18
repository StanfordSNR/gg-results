// GGHASH:VsD5AODQI9Y7u0vMuyw1n2FM1UvkdqL9uRYnWLURWD9o00002c86
#ifndef FTINCREM_H_
#define FTINCREM_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_PARAM_TAG_INCREMENTAL FT_MAKE_TAG( 'i', 'n', 'c', 'r' )
#endif
