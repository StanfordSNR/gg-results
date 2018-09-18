// GGHASH:VUnJnSuWK6BCFCwYCha8dPA3FcgAySTPbqyDnt3Nq5ZI000025cc
#ifndef _SYNC_H_
#define _SYNC_H_ 
#include <X11/Xfuncproto.h>
#include <X11/extensions/syncconst.h>
#ifdef _SYNC_SERVER
#include <X11/extensions/syncproto.h>
#else
#undef XSyncIntToValue
#undef XSyncIntsToValue
#undef XSyncValueGreaterThan
#undef XSyncValueLessThan
#undef XSyncValueGreaterOrEqual
#undef XSyncValueLessOrEqual
#undef XSyncValueEqual
#undef XSyncValueIsNegative
#undef XSyncValueIsZero
#undef XSyncValueIsPositive
#undef XSyncValueLow32
#undef XSyncValueHigh32
#undef XSyncValueAdd
#undef XSyncValueSubtract
#undef XSyncMaxValue
#undef XSyncMinValue
#endif
#endif
