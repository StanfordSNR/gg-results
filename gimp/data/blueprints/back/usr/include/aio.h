// GGHASH:V6iTbqaj2HUu3aAuCVaCesmwFVyJj9skJq8HpXVeG8F800001d20
#ifndef _AIO_H
#define _AIO_H 1
#include <features.h>
#include <sys/types.h>
#include <bits/types/sigevent_t.h>
#include <bits/sigevent-consts.h>
#include <bits/types/struct_timespec.h>
#ifndef __USE_FILE_OFFSET64
#else
#endif
#ifdef __USE_LARGEFILE64
#endif
#ifdef __USE_GNU
#endif
#define AIO_CANCELED AIO_CANCELED
#define AIO_NOTCANCELED AIO_NOTCANCELED
#define AIO_ALLDONE AIO_ALLDONE
#define LIO_READ LIO_READ
#define LIO_WRITE LIO_WRITE
#define LIO_NOP LIO_NOP
#define LIO_WAIT LIO_WAIT
#define LIO_NOWAIT LIO_NOWAIT
#ifdef __USE_GNU
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT_NTH
# else
#define aio_read aio_read64
#define aio_write aio_write64
#define lio_listio lio_listio64
#define aio_error aio_error64
#define aio_return aio_return64
#define aio_cancel aio_cancel64
#define aio_suspend aio_suspend64
#define aio_fsync aio_fsync64
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#endif
