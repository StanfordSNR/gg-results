// GGHASH:VURJOB1Q6K3JQdugBvSL1Yzd0I4e2LpjqnPJG..DiEbY00000650
#ifndef _LINUX_STM_H
#define _LINUX_STM_H 
#include <linux/types.h>
#define STP_POLICY_ID_SET _IOWR('%', 0, struct stp_policy_id)
#define STP_POLICY_ID_GET _IOR('%', 1, struct stp_policy_id)
#define STP_SET_OPTIONS _IOW('%', 2, __u64)
#endif
