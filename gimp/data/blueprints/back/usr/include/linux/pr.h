// GGHASH:VFWrgoqlPsShlfQlcHnCt8682vhyCES7AkrwY7Sq42JU00000431
#ifndef _PR_H
#define _PR_H 
#include <linux/types.h>
#define PR_FL_IGNORE_KEY (1 << 0)
#define IOC_PR_REGISTER _IOW('p', 200, struct pr_registration)
#define IOC_PR_RESERVE _IOW('p', 201, struct pr_reservation)
#define IOC_PR_RELEASE _IOW('p', 202, struct pr_reservation)
#define IOC_PR_PREEMPT _IOW('p', 203, struct pr_preempt)
#define IOC_PR_PREEMPT_ABORT _IOW('p', 204, struct pr_preempt)
#define IOC_PR_CLEAR _IOW('p', 205, struct pr_clear)
#endif
