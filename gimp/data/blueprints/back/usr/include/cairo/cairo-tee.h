// GGHASH:VjKdG7vKajqc14rk.aoZ0ki3nVoOm8.f_w1W6lG_IOH00000087d
#ifndef CAIRO_TEE_H
#define CAIRO_TEE_H 
#include "cairo.h"
#if CAIRO_HAS_TEE_SURFACE
#else
# error Cairo was not compiled with support for the TEE backend
#endif
#endif
