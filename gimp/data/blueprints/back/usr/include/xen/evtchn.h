// GGHASH:VVf6RPh4CZ32gtilcgX9BmWIxcZTgXHxowfmZsRZEPMw00000de1
#ifndef __LINUX_PUBLIC_EVTCHN_H__
#define __LINUX_PUBLIC_EVTCHN_H__ 
#define IOCTL_EVTCHN_BIND_VIRQ _IOC(_IOC_NONE, 'E', 0, sizeof(struct ioctl_evtchn_bind_virq))
#define IOCTL_EVTCHN_BIND_INTERDOMAIN _IOC(_IOC_NONE, 'E', 1, sizeof(struct ioctl_evtchn_bind_interdomain))
#define IOCTL_EVTCHN_BIND_UNBOUND_PORT _IOC(_IOC_NONE, 'E', 2, sizeof(struct ioctl_evtchn_bind_unbound_port))
#define IOCTL_EVTCHN_UNBIND _IOC(_IOC_NONE, 'E', 3, sizeof(struct ioctl_evtchn_unbind))
#define IOCTL_EVTCHN_NOTIFY _IOC(_IOC_NONE, 'E', 4, sizeof(struct ioctl_evtchn_notify))
#define IOCTL_EVTCHN_RESET _IOC(_IOC_NONE, 'E', 5, 0)
#define IOCTL_EVTCHN_RESTRICT_DOMID _IOC(_IOC_NONE, 'E', 6, sizeof(struct ioctl_evtchn_restrict_domid))
#endif
