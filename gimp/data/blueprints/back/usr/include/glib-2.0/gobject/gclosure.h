// GGHASH:V9JeCe3F7DAey5.ixOtcd7HMNMu8WLU087xBi05uR6Zs00002b2c
#ifndef __G_CLOSURE_H__
#define __G_CLOSURE_H__ 
#if !defined (__GLIB_GOBJECT_H_INSIDE__) && !defined (GOBJECT_COMPILATION)
#error "Only <glib-object.h> can be included directly."
#endif
#include <gobject/gtype.h>
#define G_CLOSURE_NEEDS_MARSHAL(closure) (((GClosure*) (closure))->marshal == NULL)
#define G_CLOSURE_N_NOTIFIERS(cl) (((cl)->n_guards << 1L) + (cl)->n_fnotifiers + (cl)->n_inotifiers)
#define G_CCLOSURE_SWAP_DATA(cclosure) (((GClosure*) (cclosure))->derivative_flag)
#define G_CALLBACK(f) ((GCallback) (f))
#endif
