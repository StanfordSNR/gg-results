// GGHASH:V2x0SqGyJUxAVRdopwUw2U49aqGtbxiyB3QClfFxFSe4000016cb
#ifndef _MULTIBUF_H_
#define _MULTIBUF_H_ 
#include <X11/Xfuncproto.h>
#include <X11/extensions/multibufconst.h>
#define MbufGetReq(name,req,info) GetReq (name, req); req->reqType = info->codes->major_opcode; req->mbufReqType = X_ ##name;
#endif
