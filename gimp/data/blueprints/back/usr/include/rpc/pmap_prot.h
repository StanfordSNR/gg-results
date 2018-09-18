// GGHASH:Vle2CFIcPWHe0J5HCMFmM1i3DG7QxZbvuUw63s6KIM4g00000ee2
#ifndef _RPC_PMAP_PROT_H
#define _RPC_PMAP_PROT_H 1
#include <features.h>
#include <rpc/xdr.h>
#define PMAPPORT ((u_short)111)
#define PMAPPROG ((u_long)100000)
#define PMAPVERS ((u_long)2)
#define PMAPVERS_PROTO ((u_long)2)
#define PMAPVERS_ORIG ((u_long)1)
#define PMAPPROC_NULL ((u_long)0)
#define PMAPPROC_SET ((u_long)1)
#define PMAPPROC_UNSET ((u_long)2)
#define PMAPPROC_GETPORT ((u_long)3)
#define PMAPPROC_DUMP ((u_long)4)
#define PMAPPROC_CALLIT ((u_long)5)
#endif
