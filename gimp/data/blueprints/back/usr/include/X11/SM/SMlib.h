// GGHASH:V0q6iJD0Oxh3m294KezidHWkYqiOtxQNU2I91gPjqwRo00002c04
#ifndef _SMLIB_H_
#define _SMLIB_H_ 
#include <X11/SM/SM.h>
#include <X11/ICE/ICElib.h>
#define SmcSaveYourselfProcMask (1L << 0)
#define SmcDieProcMask (1L << 1)
#define SmcSaveCompleteProcMask (1L << 2)
#define SmcShutdownCancelledProcMask (1L << 3)
#define SmsRegisterClientProcMask (1L << 0)
#define SmsInteractRequestProcMask (1L << 1)
#define SmsInteractDoneProcMask (1L << 2)
#define SmsSaveYourselfRequestProcMask (1L << 3)
#define SmsSaveYourselfP2RequestProcMask (1L << 4)
#define SmsSaveYourselfDoneProcMask (1L << 5)
#define SmsCloseConnectionProcMask (1L << 6)
#define SmsSetPropertiesProcMask (1L << 7)
#define SmsDeletePropertiesProcMask (1L << 8)
#define SmsGetPropertiesProcMask (1L << 9)
#endif
