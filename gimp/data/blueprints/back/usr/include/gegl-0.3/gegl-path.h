// GGHASH:Vjqh_37tX7Kw9PRGAfDgVoiP.SDds_m.o2r6A64z7YLY00004262
#ifndef __GEGL_PATH_H__
#define __GEGL_PATH_H__ 
#include <glib-object.h>
#include <gegl-matrix.h>
#define GEGL_TYPE_PATH (gegl_path_get_type ())
#define GEGL_PATH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_PATH, GeglPath))
#define GEGL_PATH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_PATH, GeglPathClass))
#define GEGL_IS_PATH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_PATH))
#define GEGL_IS_PATH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_PATH))
#define GEGL_PATH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_PATH, GeglPathClass))
#define LP (
#define RP )
#undef LP
#undef RP
#define GEGL_TYPE_PARAM_PATH (gegl_param_path_get_type ())
#define GEGL_IS_PARAM_PATH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_PARAM_PATH))
#endif
