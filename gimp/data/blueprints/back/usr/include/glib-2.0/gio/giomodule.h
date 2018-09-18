// GGHASH:VybJGda_.Sw02OEIMJpk0z1cBFUI0HVdstISff5ncdjA00001f80
#ifndef __G_IO_MODULE_H__
#define __G_IO_MODULE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#include <gmodule.h>
#define G_IO_TYPE_MODULE (g_io_module_get_type ())
#define G_IO_MODULE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_IO_TYPE_MODULE, GIOModule))
#define G_IO_MODULE_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_IO_TYPE_MODULE, GIOModuleClass))
#define G_IO_IS_MODULE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_IO_TYPE_MODULE))
#define G_IO_IS_MODULE_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_IO_TYPE_MODULE))
#define G_IO_MODULE_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_IO_TYPE_MODULE, GIOModuleClass))
#endif
