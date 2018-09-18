// GGHASH:VJU33vUqb7zoibhn8AxAlKveSFOxpAa2jpK2I.ixCzMw0000167d
#ifndef _PRESENT_PROTO_H_
#define _PRESENT_PROTO_H_ 
#include <X11/extensions/presenttokens.h>
#define Window CARD32
#define Pixmap CARD32
#define Region CARD32
#define XSyncFence CARD32
#define EventID CARD32
#define sz_xPresentNotify 8
#define sz_xPresentQueryVersionReq 12
#define sz_xPresentQueryVersionReply 32
#define sz_xPresentPixmapReq 72
#define sz_xPresentNotifyMSCReq 40
#define sz_xPresentSelectInputReq 16
#define sz_xPresentQueryCapabilitiesReq 8
#define sz_xPresentQueryCapabilitiesReply 32
#define sz_xPresentConfigureNotify 40
#define sz_xPresentCompleteNotify 40
#define sz_xPresentIdleNotify 32
#if PRESENT_FUTURE_VERSION
#define sz_xPresentRedirectNotify 104
#endif
#undef Window
#undef Pixmap
#undef Region
#undef XSyncFence
#undef EventID
#endif
