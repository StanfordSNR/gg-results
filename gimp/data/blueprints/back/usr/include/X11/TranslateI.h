// GGHASH:VcUXYXZd1VoulIGF0k9z2bnsW12w_qpRJMXpvJoXIReo00004306
#define CACHE_TRANSLATIONS 
#define TM_NO_MATCH (-2)
#define _XtRStateTablePair "_XtStateTablePair"
#define XtTableReplace 0
#define XtTableAugment 1
#define XtTableOverride 2
#define XtTableUnmerge 3
#define _XtEventTimerEventType ((TMLongCard)~0L)
#define KeysymModMask (1L<<27)
#define AnyButtonMask (1L<<28)
#define TMKEYCACHELOG2 6
#define TMKEYCACHESIZE (1<<TMKEYCACHELOG2)
#ifdef TRACE_TM
#endif
#define TM_MOD_SEGMENT_SIZE 16
#define TM_TYPE_SEGMENT_SIZE 16
#define TMGetTypeMatch(idx) ((TMTypeMatch) &((_XtGlobalTM.typeMatchSegmentTbl[((idx) >> 4)])[(idx) & 15]))
#define TMGetModifierMatch(idx) ((TMModifierMatch) &((_XtGlobalTM.modMatchSegmentTbl[(idx) >> 4])[(idx) & 15]))
#define TMNewMatchSemantics() (_XtGlobalTM.newMatchSemantics)
#define TMBranchMore(branch) (branch->more)
#define TMComplexBranchHead(tree,br) (((TMComplexStateTree)tree)->complexBranchHeadTbl[TMBranchMore(br)])
#define TMGetComplexBindEntry(bindData,idx) ((TMComplexBindProcs)&(((TMComplexBindData)bindData)->bindTbl[idx]))
#define TMGetSimpleBindEntry(bindData,idx) ((TMSimpleBindProcs)&(((TMSimpleBindData)bindData)->bindTbl[idx]))
#define _InitializeKeysymTables(dpy,pd) if (pd->keysyms == NULL) _XtBuildKeysymTables(dpy, pd)
#include "CallbackI.h"
#include "EventI.h"
#include "HookObjI.h"
#include "PassivGraI.h"
#include "ThreadsI.h"
#include "InitialI.h"
#include "ResourceI.h"
#include "StringDefs.h"
#ifndef NO_MIT_HACKS
#endif
