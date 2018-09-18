// GGHASH:VbnfyLPj.KX6b.7B_hEeQUAALIRHXPlTLfxRZFypdNa0000009cf
#ifndef __POPPLER_MOVIE_H__
#define __POPPLER_MOVIE_H__ 
#include <glib-object.h>
#include "poppler.h"
#define POPPLER_TYPE_MOVIE (poppler_movie_get_type ())
#define POPPLER_MOVIE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POPPLER_TYPE_MOVIE, PopplerMovie))
#define POPPLER_IS_MOVIE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POPPLER_TYPE_MOVIE))
#endif
