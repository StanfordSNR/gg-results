// GGHASH:Vxs4.xEZ6vGJpO.rzmdg_V5.ee5H1obkX3_yw2fVI3PM00003684
#ifndef __G_IOCHANNEL_H__
#define __G_IOCHANNEL_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gconvert.h>
#include <glib/gmain.h>
#include <glib/gstring.h>
#define G_IO_CHANNEL_ERROR g_io_channel_error_quark()
#ifdef G_OS_WIN32
#define G_WIN32_MSG_HANDLE 19981206
#if GLIB_SIZEOF_VOID_P == 8
#else
#endif
#endif
#endif
