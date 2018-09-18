// GGHASH:V2TK9EgLKh2SQjDHSoC.XKPL9cn09ThTT0mAaXZsyG_c000018d6
#ifndef __G_HOOK_H__
#define __G_HOOK_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gmem.h>
#define G_HOOK_FLAG_USER_SHIFT (4)
#define G_HOOK(hook) ((GHook*) (hook))
#define G_HOOK_FLAGS(hook) (G_HOOK (hook)->flags)
#define G_HOOK_ACTIVE(hook) ((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE) != 0)
#define G_HOOK_IN_CALL(hook) ((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_IN_CALL) != 0)
#define G_HOOK_IS_VALID(hook) (G_HOOK (hook)->hook_id != 0 && (G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE))
#define G_HOOK_IS_UNLINKED(hook) (G_HOOK (hook)->next == NULL && G_HOOK (hook)->prev == NULL && G_HOOK (hook)->hook_id == 0 && G_HOOK (hook)->ref_count == 0)
#define g_hook_append(hook_list,hook) g_hook_insert_before ((hook_list), NULL, (hook))
#endif
