// GGHASH:VppeagB6l3T9mwwv7x8AXWRGQdLrh382uGV_eE6kGXDs00007913
#ifndef _X11_XKBLIB_H_
#define _X11_XKBLIB_H_ 
#include <X11/Xlib.h>
#include <X11/extensions/XKBstr.h>
#define XkbOD_Success 0
#define XkbOD_BadLibraryVersion 1
#define XkbOD_ConnectionRefused 2
#define XkbOD_NonXkbServer 3
#define XkbOD_BadServerVersion 4
#define XkbLC_ForceLatin1Lookup (1<<0)
#define XkbLC_ConsumeLookupMods (1<<1)
#define XkbLC_AlwaysConsumeShiftAndLock (1<<2)
#define XkbLC_IgnoreNewKeyboards (1<<3)
#define XkbLC_ControlFallback (1<<4)
#define XkbLC_ConsumeKeysOnComposeFail (1<<29)
#define XkbLC_ComposeLED (1<<30)
#define XkbLC_BeepOnComposeFail (1<<31)
#define XkbLC_AllComposeControls (0xc0000000)
#define XkbLC_AllControls (0xc000001f)
#if NeedWidePrototypes
#else
#endif
#define XkbNoteIndicatorMapChanges(o,n,w) ((o)->map_changes|=((n)->map_changes&(w)))
#define XkbNoteIndicatorStateChanges(o,n,w) ((o)->state_changes|=((n)->state_changes&(w)))
#define XkbGetIndicatorMapChanges(d,x,c) (XkbGetIndicatorMap((d),(c)->map_changes,x))
#define XkbChangeIndicatorMaps(d,x,c) (XkbSetIndicatorMap((d),(c)->map_changes,x))
#define XkbGetControlsChanges(d,x,c) XkbGetControls(d,(c)->changed_ctrls,x)
#define XkbChangeControls(d,x,c) XkbSetControls(d,(c)->changed_ctrls,x)
#endif
