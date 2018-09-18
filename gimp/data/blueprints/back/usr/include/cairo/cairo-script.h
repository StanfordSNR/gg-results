// GGHASH:VA9ir5eN06bi1FZjx4dspzB9CzFpSciM4rK_.AhjZtvI00000c00
#ifndef CAIRO_SCRIPT_H
#define CAIRO_SCRIPT_H 
#include "cairo.h"
#if CAIRO_HAS_SCRIPT_SURFACE
#else
# error Cairo was not compiled with support for the CairoScript backend
#endif
#endif
