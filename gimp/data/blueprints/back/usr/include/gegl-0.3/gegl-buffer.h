// GGHASH:VQ1CiiTbvJeofvBmKTI9PmfBCX1cMf9dvtHSekayhC1Y00006e45
#ifndef __GEGL_BUFFER_H__
#define __GEGL_BUFFER_H__ 
#include <glib-object.h>
#include <babl/babl.h>
#include <gegl-matrix.h>
#include <gegl-types.h>
#define gegl_buffer_get_x(buffer) (gegl_buffer_get_extent(buffer)->x)
#define gegl_buffer_get_y(buffer) (gegl_buffer_get_extent(buffer)->y)
#define gegl_buffer_get_width(buffer) (gegl_buffer_get_extent(buffer)->width)
#define gegl_buffer_get_height(buffer) (gegl_buffer_get_extent(buffer)->height)
#define gegl_buffer_get_pixel_count(buffer) (gegl_buffer_get_width(buffer) * gegl_buffer_get_height(buffer))
#define gegl_sampler_compute_scale(matrix,x,y) { float ax, ay, bx, by; gegl_unmap(x + 0.5, y, ax, ay); gegl_unmap(x - 0.5, y, bx, by); matrix.coeff[0][0] = ax - bx; matrix.coeff[1][0] = ay - by; gegl_unmap(x, y + 0.5, ax, ay); gegl_unmap(x, y - 0.5, bx, by); matrix.coeff[0][1] = ax - bx; matrix.coeff[1][1] = ay - by; }
#include <gegl-buffer-iterator.h>
#endif
