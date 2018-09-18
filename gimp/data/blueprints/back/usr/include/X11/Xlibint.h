// GGHASH:VhQy1.Ibz.6b63lze_i7KemqB0SNguIzXF5KsocG7wiE00009e14
#ifndef _X11_XLIBINT_H_
#define _X11_XLIBINT_H_ 1
#include <stdint.h>
#include <X11/Xlib.h>
#include <X11/Xproto.h>
#include <X11/XlibConf.h>
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#endif
#ifdef WIN32
#define _XFlush _XFlushIt
#endif
#ifndef LONG64
#endif
#define XAllocIDs(dpy,ids,n) (*(dpy)->idlist_alloc)(dpy,ids,n)
#ifndef LONG64
#define X_DPY_GET_REQUEST(dpy) ( ((uint64_t)(((struct _XDisplay*)dpy)->request)) + (((uint64_t)(((struct _XDisplay*)dpy)->request_upper32bit)) << 32) )
#define X_DPY_SET_REQUEST(dpy,value) ( (((struct _XDisplay*)dpy)->request = (value) & 0xFFFFFFFFUL), (((struct _XDisplay*)dpy)->request_upper32bit = ((uint64_t)(value)) >> 32), (void)0 )
#define X_DPY_GET_LAST_REQUEST_READ(dpy) ( ((uint64_t)(((struct _XDisplay*)dpy)->last_request_read)) + ( ((uint64_t)( ((struct _XDisplay*)dpy)->last_request_read_upper32bit )) << 32 ) )
#define X_DPY_SET_LAST_REQUEST_READ(dpy,value) ( (((struct _XDisplay*)dpy)->last_request_read = (value) & 0xFFFFFFFFUL), (((struct _XDisplay*)dpy)->last_request_read_upper32bit = ((uint64_t)(value)) >> 32), (void)0 )
#define X_DPY_WIDEN_UNSIGNED_LONG_SEQ(dpy,ulseq) ( ((uint64_t)ulseq) + (( ((uint64_t)(((struct _XDisplay*)dpy)->request_upper32bit)) - (uint64_t)( (ulseq) > (((struct _XDisplay*)dpy)->request) ) ) << 32) )
#define X_DPY_REQUEST_INCREMENT(dpy) ( ((struct _XDisplay*)dpy)->request++, ( (((struct _XDisplay*)dpy)->request == 0) ? ( ((struct _XDisplay*)dpy)->request_upper32bit++ ) : 0 ), (void)0 )
#define X_DPY_REQUEST_DECREMENT(dpy) ( ( (((struct _XDisplay*)dpy)->request == 0) ? ( ((struct _XDisplay*)dpy)->request--, ((struct _XDisplay*)dpy)->request_upper32bit-- ) : ( ((struct _XDisplay*)dpy)->request-- ) ), (void)0 )
#else
#define X_DPY_GET_REQUEST(dpy) (((struct _XDisplay*)dpy)->request)
#define X_DPY_SET_REQUEST(dpy,value) ((struct _XDisplay*)dpy)->request = (value)
#define X_DPY_GET_LAST_REQUEST_READ(dpy) (((struct _XDisplay*)dpy)->last_request_read)
#define X_DPY_SET_LAST_REQUEST_READ(dpy,value) ((struct _XDisplay*)dpy)->last_request_read = (value)
#define X_DPY_WIDEN_UNSIGNED_LONG_SEQ(dpy,ulseq) ulseq
#define X_DPY_REQUEST_INCREMENT(dpy) ((struct _XDisplay*)dpy)->request++
#define X_DPY_REQUEST_DECREMENT(dpy) ((struct _XDisplay*)dpy)->request--
#endif
#ifndef _XEVENT_
#endif
#include <X11/Xproto.h>
#ifdef __sgi
#define _SGI_MP_SOURCE 
#endif
#include <errno.h>
#define _XBCOPYFUNC _Xbcopy
#include <X11/Xfuncs.h>
#include <X11/Xosdefs.h>
#ifdef dirty
#undef dirty
#endif
#include <stdlib.h>
#include <string.h>
#include <X11/Xfuncproto.h>
#ifdef XTHREADS
#if defined(XTHREADS_WARN) || defined(XTHREADS_FILE_LINE)
#endif
#if defined(XTHREADS_WARN) || defined(XTHREADS_FILE_LINE)
#endif
#if defined(WIN32) && !defined(_XLIBINT_)
#define _XCreateMutex_fn (*_XCreateMutex_fn_p)
#define _XFreeMutex_fn (*_XFreeMutex_fn_p)
#define _XLockMutex_fn (*_XLockMutex_fn_p)
#define _XUnlockMutex_fn (*_XUnlockMutex_fn_p)
#define _Xglobal_lock (*_Xglobal_lock_p)
#endif
#if defined(XTHREADS_WARN) || defined(XTHREADS_FILE_LINE)
#endif
#if defined(XTHREADS_WARN) || defined(XTHREADS_FILE_LINE)
#endif
#if defined(XTHREADS_WARN) || defined(XTHREADS_FILE_LINE)
#define LockDisplay(d) if ((d)->lock_fns) (*(d)->lock_fns->lock_display)((d),__FILE__,__LINE__)
#define UnlockDisplay(d) if ((d)->lock_fns) (*(d)->lock_fns->unlock_display)((d),__FILE__,__LINE__)
#define _XLockMutex(lock) if (_XLockMutex_fn) (*_XLockMutex_fn)(lock,__FILE__,__LINE__)
#define _XUnlockMutex(lock) if (_XUnlockMutex_fn) (*_XUnlockMutex_fn)(lock,__FILE__,__LINE__)
#else
#define LockDisplay(d) if ((d)->lock_fns) (*(d)->lock_fns->lock_display)(d)
#define UnlockDisplay(d) if ((d)->lock_fns) (*(d)->lock_fns->unlock_display)(d)
#define _XLockMutex(lock) if (_XLockMutex_fn) (*_XLockMutex_fn)(lock)
#define _XUnlockMutex(lock) if (_XUnlockMutex_fn) (*_XUnlockMutex_fn)(lock)
#endif
#define _XCreateMutex(lock) if (_XCreateMutex_fn) (*_XCreateMutex_fn)(lock);
#define _XFreeMutex(lock) if (_XFreeMutex_fn) (*_XFreeMutex_fn)(lock);
#else
#define LockDisplay(dis) 
#define _XLockMutex(lock) 
#define _XUnlockMutex(lock) 
#define UnlockDisplay(dis) 
#define _XCreateMutex(lock) 
#define _XFreeMutex(lock) 
#endif
#define Xfree(ptr) free((ptr))
#if defined(MALLOC_0_RETURNS_NULL) || defined(__clang_analyzer__)
#define Xmalloc(size) malloc(((size) == 0 ? 1 : (size)))
#define Xrealloc(ptr,size) realloc((ptr), ((size) == 0 ? 1 : (size)))
#define Xcalloc(nelem,elsize) calloc(((nelem) == 0 ? 1 : (nelem)), (elsize))
#else
#define Xmalloc(size) malloc((size))
#define Xrealloc(ptr,size) realloc((ptr), (size))
#define Xcalloc(nelem,elsize) calloc((nelem), (elsize))
#endif
#include <stddef.h>
#define LOCKED 1
#define UNLOCKED 0
#ifndef BUFSIZE
#define BUFSIZE 2048
#endif
#ifndef PTSPERBATCH
#define PTSPERBATCH 1024
#endif
#ifndef WLNSPERBATCH
#define WLNSPERBATCH 50
#endif
#ifndef ZLNSPERBATCH
#define ZLNSPERBATCH 1024
#endif
#ifndef WRCTSPERBATCH
#define WRCTSPERBATCH 10
#endif
#ifndef ZRCTSPERBATCH
#define ZRCTSPERBATCH 256
#endif
#ifndef FRCTSPERBATCH
#define FRCTSPERBATCH 256
#endif
#ifndef FARCSPERBATCH
#define FARCSPERBATCH 256
#endif
#ifndef CURSORFONT
#define CURSORFONT "cursor"
#endif
#define XlibDisplayIOError (1L << 0)
#define XlibDisplayClosing (1L << 1)
#define XlibDisplayNoXkb (1L << 2)
#define XlibDisplayPrivSync (1L << 3)
#define XlibDisplayProcConni (1L << 4)
#define XlibDisplayReadEvents (1L << 5)
#define XlibDisplayReply (1L << 5)
#define XlibDisplayWriting (1L << 6)
#define XlibDisplayDfltRMDB (1L << 7)
#define WORD64ALIGN 
#define GetReqSized(name,sz,req) req = (x ##name ##Req *) _XGetRequest(dpy, X_ ##name, sz)
#define GetReq(name,req) GetReqSized(name, SIZEOF(x ##name ##Req), req)
#define GetReqExtra(name,n,req) GetReqSized(name, SIZEOF(x ##name ##Req) + n, req)
#define GetResReq(name,rid,req) req = (xResourceReq *) _XGetRequest(dpy, X_ ##name, SIZEOF(xResourceReq)); req->id = (rid)
#define GetEmptyReq(name,req) req = (xReq *) _XGetRequest(dpy, X_ ##name, SIZEOF(xReq))
#ifdef LONG64
#define MakeBigReq(req,n) { CARD64 _BRdat; CARD32 _BRlen = req->length - 1; req->length = 0; _BRdat = ((CARD32 *)req)[_BRlen]; memmove(((char *)req) + 8, ((char *)req) + 4, (_BRlen - 1) << 2); ((CARD32 *)req)[1] = _BRlen + n + 2; Data32(dpy, &_BRdat, 4); }
#else
#define MakeBigReq(req,n) { CARD32 _BRdat; CARD32 _BRlen = req->length - 1; req->length = 0; _BRdat = ((CARD32 *)req)[_BRlen]; memmove(((char *)req) + 8, ((char *)req) + 4, (_BRlen - 1) << 2); ((CARD32 *)req)[1] = _BRlen + n + 2; Data32(dpy, &_BRdat, 4); }
#endif
#ifndef __clang_analyzer__
#define SetReqLen(req,n,badlen) if ((req->length + n) > (unsigned)65535) { if (dpy->bigreq_size) { MakeBigReq(req,n) } else { n = badlen; req->length += n; } } else req->length += n
#else
#define SetReqLen(req,n,badlen) req->length += n
#endif
#define SyncHandle() if (dpy->synchandler) (*dpy->synchandler)(dpy)
#define FlushGC(dpy,gc) if ((gc)->dirty) _XFlushGCCache((dpy), (gc))
#ifndef DataRoutineIsProcedure
#define Data(dpy,data,len) { if (dpy->bufptr + (len) <= dpy->bufmax) { memcpy(dpy->bufptr, data, (int)len); dpy->bufptr += ((len) + 3) & ~3; } else _XSend(dpy, data, len);}
#endif
#define BufAlloc(type,ptr,n) if (dpy->bufptr + (n) > dpy->bufmax) _XFlush (dpy); ptr = (type) dpy->bufptr; memset(ptr, '\0', n); dpy->bufptr += (n);
#define Data16(dpy,data,len) Data((dpy), (_Xconst char *)(data), (len))
#define _XRead16Pad(dpy,data,len) _XReadPad((dpy), (char *)(data), (len))
#define _XRead16(dpy,data,len) _XRead((dpy), (char *)(data), (len))
#ifdef LONG64
#define Data32(dpy,data,len) _XData32(dpy, (_Xconst long *)data, len)
#else
#define Data32(dpy,data,len) Data((dpy), (_Xconst char *)(data), (len))
#define _XRead32(dpy,data,len) _XRead((dpy), (char *)(data), (len))
#endif
#define PackData16(dpy,data,len) Data16 (dpy, data, len)
#define PackData32(dpy,data,len) Data32 (dpy, data, len)
#define PackData(dpy,data,len) PackData16 (dpy, data, len)
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define CI_NONEXISTCHAR(cs) (((cs)->width == 0) && (((cs)->rbearing|(cs)->lbearing| (cs)->ascent|(cs)->descent) == 0))
#define CI_GET_CHAR_INFO_1D(fs,col,def,cs) { cs = def; if (col >= fs->min_char_or_byte2 && col <= fs->max_char_or_byte2) { if (fs->per_char == NULL) { cs = &fs->min_bounds; } else { cs = &fs->per_char[(col - fs->min_char_or_byte2)]; if (CI_NONEXISTCHAR(cs)) cs = def; } } }
#define CI_GET_DEFAULT_INFO_1D(fs,cs) CI_GET_CHAR_INFO_1D (fs, fs->default_char, NULL, cs)
#define CI_GET_CHAR_INFO_2D(fs,row,col,def,cs) { cs = def; if (row >= fs->min_byte1 && row <= fs->max_byte1 && col >= fs->min_char_or_byte2 && col <= fs->max_char_or_byte2) { if (fs->per_char == NULL) { cs = &fs->min_bounds; } else { cs = &fs->per_char[((row - fs->min_byte1) * (fs->max_char_or_byte2 - fs->min_char_or_byte2 + 1)) + (col - fs->min_char_or_byte2)]; if (CI_NONEXISTCHAR(cs)) cs = def; } } }
#define CI_GET_DEFAULT_INFO_2D(fs,cs) { unsigned int r = (fs->default_char >> 8); unsigned int c = (fs->default_char & 0xff); CI_GET_CHAR_INFO_2D (fs, r, c, NULL, cs); }
#define OneDataCard32(dpy,dstaddr,srcvar) { *(CARD32 *)(dstaddr) = (srcvar); }
#define DeqAsyncHandler(dpy,handler) { if (dpy->async_handlers == (handler)) dpy->async_handlers = (handler)->next; else _XDeqAsyncHandler(dpy, handler); }
#ifdef _X_COLD
#define _XLIB_COLD _X_COLD
#elif defined(__GNUC__) && ((__GNUC__ * 100 + __GNUC_MINOR__) >= 403)
#define _XLIB_COLD __attribute__((__cold__))
#else
#define _XLIB_COLD 
#endif
#ifdef DataRoutineIsProcedure
#endif
#if defined(__SUNPRO_C)
#pragma rarely_called(_XEatData, _XEatDataWords)
#endif
#ifdef __UNIXOS2__
#endif
#if defined(WIN32)
#else
#define _XOpenFile(path,flags) open(path,flags)
#define _XOpenFileMode(path,flags,mode) open(path,flags,mode)
#define _XFopenFile(path,mode) fopen(path,mode)
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif
