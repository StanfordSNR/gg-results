// GGHASH:VIJ41oGlgES221lbEBlFe6bIJKi7tV77FkIuxCLCfXCg00001ed5
#ifndef _RECORDPROTO_H_
#define _RECORDPROTO_H_ 
#include <X11/extensions/recordconst.h>
#define X_RecordQueryVersion 0
#define X_RecordCreateContext 1
#define X_RecordRegisterClients 2
#define X_RecordUnregisterClients 3
#define X_RecordGetContext 4
#define X_RecordEnableContext 5
#define X_RecordDisableContext 6
#define X_RecordFreeContext 7
#define sz_XRecordRange 32
#define sz_XRecordClientInfo 12
#define sz_XRecordState 16
#define sz_XRecordDatum 32
#define XRecordGlobaldef 
#define XRecordGlobalref extern
#define RecordMaxEvent (128L-1L)
#define RecordMinDeviceEvent (2L)
#define RecordMaxDeviceEvent (6L)
#define RecordMaxError (256L-1L)
#define RecordMaxCoreRequest (128L-1L)
#define RecordMaxExtRequest (256L-1L)
#define RecordMinExtRequest (129L-1L)
#define RECORD_RC CARD32
#define RECORD_XIDBASE CARD32
#define RECORD_CLIENTSPEC CARD32
#define RECORD_ELEMENT_HEADER CARD8
#define sz_RECORDRANGE 24
#define sz_xRecordRange 24
#define sz_xRecordQueryVersionReq 8
#define sz_xRecordQueryVersionReply 32
#define sz_xRecordCreateContextReq 20
#define sz_xRecordRegisterClientsReq 20
#define sz_xRecordUnregisterClientsReq 12
#define sz_xRecordGetContextReq 8
#define sz_xRecordGetContextReply 32
#define sz_xRecordEnableContextReq 8
#define sz_xRecordEnableContextReply 32
#define sz_xRecordDisableContextReq 8
#define sz_xRecordFreeContextReq 8
#undef RECORD_RC
#undef RECORD_XIDBASE
#undef RECORD_ELEMENT_HEADER
#undef RECORD_CLIENTSPEC
#endif
