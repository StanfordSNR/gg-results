// GGHASH:VbOKwdFgh_jm9zN7wfmJnLuUq1RiQ9nEyiDrzMZcviwU000015f1
#ifndef CAIRO_PDF_H
#define CAIRO_PDF_H 
#include "cairo.h"
#if CAIRO_HAS_PDF_SURFACE
#define CAIRO_PDF_OUTLINE_ROOT 0
#else
# error Cairo was not compiled with support for the pdf backend
#endif
#endif
