// GGHASH:VnLJszF8zu8H23zfLKF6TS35Yjr53Px.d3vdl4vZqCZg00002d08
#ifndef _SYNCPROTO_H_
#define _SYNCPROTO_H_ 
#include <X11/extensions/syncconst.h>
#define X_SyncInitialize 0
#define X_SyncListSystemCounters 1
#define X_SyncCreateCounter 2
#define X_SyncSetCounter 3
#define X_SyncChangeCounter 4
#define X_SyncQueryCounter 5
#define X_SyncDestroyCounter 6
#define X_SyncAwait 7
#define X_SyncCreateAlarm 8
#define X_SyncChangeAlarm 9
#define X_SyncQueryAlarm 10
#define X_SyncDestroyAlarm 11
#define X_SyncSetPriority 12
#define X_SyncGetPriority 13
#define X_SyncCreateFence 14
#define X_SyncTriggerFence 15
#define X_SyncResetFence 16
#define X_SyncDestroyFence 17
#define X_SyncQueryFence 18
#define X_SyncAwaitFence 19
#define XSyncCounter CARD32
#define XSyncAlarm CARD32
#define XSyncFence CARD32
#define Drawable CARD32
#define sz_xSyncInitializeReq 8
#define sz_xSyncInitializeReply 32
#define sz_xSyncListSystemCountersReq 4
#define sz_xSyncListSystemCountersReply 32
#define sz_xSyncSystemCounter 14
#define sz_xSyncCreateCounterReq 16
#define sz_xSyncChangeCounterReq 16
#define sz_xSyncSetCounterReq 16
#define sz_xSyncDestroyCounterReq 8
#define sz_xSyncQueryCounterReq 8
#define sz_xSyncQueryCounterReply 32
#define sz_xSyncAwaitReq 4
#define sz_xSyncWaitCondition 28
#define sz_xSyncCreateAlarmReq 12
#define sz_xSyncDestroyAlarmReq 8
#define sz_xSyncQueryAlarmReq 8
#define sz_xSyncQueryAlarmReply 40
#define sz_xSyncChangeAlarmReq 12
#define sz_xSyncSetPriorityReq 12
#define sz_xSyncGetPriorityReq 8
#define sz_xSyncGetPriorityReply 32
#define sz_xSyncCreateFenceReq 16
#define sz_xSyncTriggerFenceReq 8
#define sz_xSyncResetFenceReq 8
#define sz_xSyncDestroyFenceReq 8
#define sz_xSyncQueryFenceReq 8
#define sz_xSyncAwaitFenceReq 4
#define sz_xSyncQueryFenceReply 32
#undef XSyncCounter
#undef XSyncAlarm
#undef XSyncFence
#undef Drawable
#endif
