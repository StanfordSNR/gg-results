// GGHASH:V3wTY9g9x7pxxr8EM_Ye_UFTo1SLuiYuVyH.crgVoi8w0000131a
#ifndef _DPMSPROTO_H_
#define _DPMSPROTO_H_ 
#include <X11/extensions/dpmsconst.h>
#define X_DPMSGetVersion 0
#define X_DPMSCapable 1
#define X_DPMSGetTimeouts 2
#define X_DPMSSetTimeouts 3
#define X_DPMSEnable 4
#define X_DPMSDisable 5
#define X_DPMSForceLevel 6
#define X_DPMSInfo 7
#define DPMSNumberEvents 0
#define DPMSNumberErrors 0
#define sz_xDPMSGetVersionReq 8
#define sz_xDPMSGetVersionReply 32
#define sz_xDPMSCapableReq 4
#define sz_xDPMSCapableReply 32
#define sz_xDPMSGetTimeoutsReq 4
#define sz_xDPMSGetTimeoutsReply 32
#define sz_xDPMSSetTimeoutsReq 12
#define sz_xDPMSEnableReq 4
#define sz_xDPMSDisableReq 4
#define sz_xDPMSForceLevelReq 8
#define sz_xDPMSInfoReq 4
#define sz_xDPMSInfoReply 32
#endif
