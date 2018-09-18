// GGHASH:VZUGL.o.WrIjrBJFbXwKSr_U8TjCNoshkalCCmfkbBvY00002308
#ifndef RSVG_H
#define RSVG_H 
#define __RSVG_RSVG_H_INSIDE__ 
#include <glib-object.h>
#include <gio/gio.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#if defined(RSVG_DISABLE_DEPRECATION_WARNINGS) || !GLIB_CHECK_VERSION (2, 31, 0)
#define RSVG_DEPRECATED 
#define RSVG_DEPRECATED_FOR(f) 
#else
#define RSVG_DEPRECATED G_DEPRECATED
#define RSVG_DEPRECATED_FOR(f) G_DEPRECATED_FOR(f)
#endif
#define RSVG_TYPE_HANDLE (rsvg_handle_get_type ())
#define RSVG_HANDLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RSVG_TYPE_HANDLE, RsvgHandle))
#define RSVG_HANDLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RSVG_TYPE_HANDLE, RsvgHandleClass))
#define RSVG_IS_HANDLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RSVG_TYPE_HANDLE))
#define RSVG_IS_HANDLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RSVG_TYPE_HANDLE))
#define RSVG_HANDLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RSVG_TYPE_HANDLE, RsvgHandleClass))
#define RSVG_ERROR (rsvg_error_quark ())
#ifndef __GI_SCANNER__
#endif
#include "librsvg-enum-types.h"
#include "librsvg-features.h"
#include "rsvg-cairo.h"
#undef __RSVG_RSVG_H_INSIDE__
#endif
