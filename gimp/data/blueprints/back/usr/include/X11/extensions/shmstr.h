// GGHASH:VV0urwdLF0QwtC5a2AmbXg88plBgI0XcBco3TAViW4Vk0000084b
#ifndef _SHMSTR_H_
#define _SHMSTR_H_ 
#include <X11/extensions/shmproto.h>
#ifdef _XSHM_SERVER_
#define XSHM_PUT_IMAGE_ARGS DrawablePtr , GCPtr , int , unsigned int , int , int , int , int , int , int , int , int , char *
#define XSHM_CREATE_PIXMAP_ARGS ScreenPtr , int , int , int , char *
#endif
#endif
