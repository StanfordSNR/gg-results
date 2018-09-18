// GGHASH:V8.fc2SmK6r_cX4joypwKmI2CsdhH9KTbXxEBx2GlAiM00000e0d
#ifndef _PRESENT_TOKENS_H_
#define _PRESENT_TOKENS_H_ 
#define PRESENT_NAME "Present"
#define PRESENT_MAJOR 1
#define PRESENT_MINOR 2
#define PresentNumberErrors 0
#define PresentNumberEvents 0
#define X_PresentQueryVersion 0
#define X_PresentPixmap 1
#define X_PresentNotifyMSC 2
#define X_PresentSelectInput 3
#define X_PresentQueryCapabilities 4
#define PresentNumberRequests 5
#define PresentOptionNone 0
#define PresentOptionAsync (1 << 0)
#define PresentOptionCopy (1 << 1)
#define PresentOptionUST (1 << 2)
#define PresentOptionSuboptimal (1 << 3)
#define PresentAllOptions (PresentOptionAsync | PresentOptionCopy | PresentOptionUST | PresentOptionSuboptimal)
#define PresentCapabilityNone 0
#define PresentCapabilityAsync 1
#define PresentCapabilityFence 2
#define PresentCapabilityUST 4
#define PresentAllCapabilities (PresentCapabilityAsync | PresentCapabilityFence | PresentCapabilityUST)
#define PresentConfigureNotify 0
#define PresentCompleteNotify 1
#define PresentIdleNotify 2
#if PRESENT_FUTURE_VERSION
#define PresentRedirectNotify 3
#endif
#define PresentConfigureNotifyMask 1
#define PresentCompleteNotifyMask 2
#define PresentIdleNotifyMask 4
#if PRESENT_FUTURE_VERSION
#define PresentRedirectNotifyMask 8
#endif
#if PRESENT_FUTURE_VERSION
#define PRESENT_REDIRECT_NOTIFY_MASK PresentRedirectNotifyMask
#else
#define PRESENT_REDIRECT_NOTIFY_MASK 0
#endif
#define PresentAllEvents (PresentConfigureNotifyMask | PresentCompleteNotifyMask | PresentIdleNotifyMask | PRESENT_REDIRECT_NOTIFY_MASK)
#define PresentCompleteKindPixmap 0
#define PresentCompleteKindNotifyMSC 1
#define PresentCompleteModeCopy 0
#define PresentCompleteModeFlip 1
#define PresentCompleteModeSkip 2
#define PresentCompleteModeSuboptimalCopy 3
#endif
