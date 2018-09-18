// GGHASH:V2eZZGjQd00nJ8VO.88yV7xx8y4dSkzCInJGjAgptQns0000119b
#ifndef CAIRO_SVG_H
#define CAIRO_SVG_H 
#include "cairo.h"
#if CAIRO_HAS_SVG_SURFACE
#else
# error Cairo was not compiled with support for the svg backend
#endif
#endif
