// GGHASH:VDrYJQ2s4TWsSa0CVkERwE4kFfbq3dxbHhyDHxz.8iOM00001a5e
#ifndef _SYNCCONST_H_
#define _SYNCCONST_H_ 
#define SYNC_NAME "SYNC"
#define SYNC_MAJOR_VERSION 3
#define SYNC_MINOR_VERSION 1
#define XSyncCounterNotify 0
#define XSyncAlarmNotify 1
#define XSyncAlarmNotifyMask (1L << XSyncAlarmNotify)
#define XSyncNumberEvents 2L
#define XSyncBadCounter 0L
#define XSyncBadAlarm 1L
#define XSyncBadFence 2L
#define XSyncNumberErrors (XSyncBadFence + 1)
#define XSyncCACounter (1L<<0)
#define XSyncCAValueType (1L<<1)
#define XSyncCAValue (1L<<2)
#define XSyncCATestType (1L<<3)
#define XSyncCADelta (1L<<4)
#define XSyncCAEvents (1L<<5)
#define _XSyncIntToValue(pv,i) ((pv)->hi=((i<0)?~0:0),(pv)->lo=(i))
#define _XSyncIntsToValue(pv,l,h) ((pv)->lo = (l), (pv)->hi = (h))
#define _XSyncValueGreaterThan(a,b) ((a).hi>(b).hi || ((a).hi==(b).hi && (a).lo>(b).lo))
#define _XSyncValueLessThan(a,b) ((a).hi<(b).hi || ((a).hi==(b).hi && (a).lo<(b).lo))
#define _XSyncValueGreaterOrEqual(a,b) ((a).hi>(b).hi || ((a).hi==(b).hi && (a).lo>=(b).lo))
#define _XSyncValueLessOrEqual(a,b) ((a).hi<(b).hi || ((a).hi==(b).hi && (a).lo<=(b).lo))
#define _XSyncValueEqual(a,b) ((a).lo==(b).lo && (a).hi==(b).hi)
#define _XSyncValueIsNegative(v) (((v).hi & 0x80000000) ? 1 : 0)
#define _XSyncValueIsZero(a) ((a).lo==0 && (a).hi==0)
#define _XSyncValueIsPositive(v) (((v).hi & 0x80000000) ? 0 : 1)
#define _XSyncValueLow32(v) ((v).lo)
#define _XSyncValueHigh32(v) ((v).hi)
#define _XSyncValueAdd(presult,a,b,poverflow) { int t = (a).lo; Bool signa = XSyncValueIsNegative(a); Bool signb = XSyncValueIsNegative(b); ((presult)->lo = (a).lo + (b).lo); ((presult)->hi = (a).hi + (b).hi); if (t>(presult)->lo) (presult)->hi++; *poverflow = ((signa == signb) && !(signa == XSyncValueIsNegative(*presult))); }
#define _XSyncValueSubtract(presult,a,b,poverflow) { int t = (a).lo; Bool signa = XSyncValueIsNegative(a); Bool signb = XSyncValueIsNegative(b); ((presult)->lo = (a).lo - (b).lo); ((presult)->hi = (a).hi - (b).hi); if (t<(presult)->lo) (presult)->hi--; *poverflow = ((signa == signb) && !(signa == XSyncValueIsNegative(*presult))); }
#define _XSyncMaxValue(pv) ((pv)->hi = 0x7fffffff, (pv)->lo = 0xffffffff)
#define _XSyncMinValue(pv) ((pv)->hi = 0x80000000, (pv)->lo = 0)
#define XSyncIntToValue(pv,i) _XSyncIntToValue(pv, i)
#define XSyncIntsToValue(pv,l,h) _XSyncIntsToValue(pv, l, h)
#define XSyncValueGreaterThan(a,b) _XSyncValueGreaterThan(a, b)
#define XSyncValueLessThan(a,b) _XSyncValueLessThan(a, b)
#define XSyncValueGreaterOrEqual(a,b) _XSyncValueGreaterOrEqual(a, b)
#define XSyncValueLessOrEqual(a,b) _XSyncValueLessOrEqual(a, b)
#define XSyncValueEqual(a,b) _XSyncValueEqual(a, b)
#define XSyncValueIsNegative(v) _XSyncValueIsNegative(v)
#define XSyncValueIsZero(a) _XSyncValueIsZero(a)
#define XSyncValueIsPositive(v) _XSyncValueIsPositive(v)
#define XSyncValueLow32(v) _XSyncValueLow32(v)
#define XSyncValueHigh32(v) _XSyncValueHigh32(v)
#define XSyncValueAdd(presult,a,b,poverflow) _XSyncValueAdd(presult,a,b,poverflow)
#define XSyncValueSubtract(presult,a,b,poverflow) _XSyncValueSubtract(presult,a,b,poverflow)
#define XSyncMaxValue(pv) _XSyncMaxValue(pv)
#define XSyncMinValue(pv) _XSyncMinValue(pv)
#endif
