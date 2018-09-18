// GGHASH:VLKccdhyAfrFvuXCZ7w.Ma4d8YfSeP1aAdet2KDey9hA00000e30
#ifndef CAIRO_PS_H
#define CAIRO_PS_H 
#include "cairo.h"
#if CAIRO_HAS_PS_SURFACE
#include <stdio.h>
#else
# error Cairo was not compiled with support for the ps backend
#endif
#endif
