// GGHASH:Vqqn._j6VtEr5yfQkz1fcWhkWrnIcKZ2Qc_2WDWWQw8w00000411
#ifndef _LINUX_GSMMUX_H
#define _LINUX_GSMMUX_H 
#include <linux/if.h>
#include <linux/ioctl.h>
#include <linux/types.h>
#define GSMIOC_GETCONF _IOR('G', 0, struct gsm_config)
#define GSMIOC_SETCONF _IOW('G', 1, struct gsm_config)
#define GSMIOC_ENABLE_NET _IOW('G', 2, struct gsm_netconfig)
#define GSMIOC_DISABLE_NET _IO('G', 3)
#endif
