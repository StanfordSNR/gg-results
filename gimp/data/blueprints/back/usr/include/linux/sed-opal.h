// GGHASH:VdcMzWmNt3NLspPpmZM.jb9O0fyv_c.G2bWIf658SeZc00000ccb
#ifndef _SED_OPAL_H
#define _SED_OPAL_H 
#include <linux/types.h>
#define OPAL_KEY_MAX 256
#define OPAL_MAX_LRS 9
#define IOC_OPAL_SAVE _IOW('p', 220, struct opal_lock_unlock)
#define IOC_OPAL_LOCK_UNLOCK _IOW('p', 221, struct opal_lock_unlock)
#define IOC_OPAL_TAKE_OWNERSHIP _IOW('p', 222, struct opal_key)
#define IOC_OPAL_ACTIVATE_LSP _IOW('p', 223, struct opal_lr_act)
#define IOC_OPAL_SET_PW _IOW('p', 224, struct opal_new_pw)
#define IOC_OPAL_ACTIVATE_USR _IOW('p', 225, struct opal_session_info)
#define IOC_OPAL_REVERT_TPR _IOW('p', 226, struct opal_key)
#define IOC_OPAL_LR_SETUP _IOW('p', 227, struct opal_user_lr_setup)
#define IOC_OPAL_ADD_USR_TO_LR _IOW('p', 228, struct opal_lock_unlock)
#define IOC_OPAL_ENABLE_DISABLE_MBR _IOW('p', 229, struct opal_mbr_data)
#define IOC_OPAL_ERASE_LR _IOW('p', 230, struct opal_session_info)
#define IOC_OPAL_SECURE_ERASE_LR _IOW('p', 231, struct opal_session_info)
#endif
