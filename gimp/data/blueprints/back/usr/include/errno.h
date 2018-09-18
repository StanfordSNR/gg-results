// GGHASH:Vtt68qWmixqp1YjLi3Wnr_F7o_tvcAim4aZF1GNFWiaU00000728
#ifndef _ERRNO_H
#define _ERRNO_H 1
#include <features.h>
#include <bits/errno.h>
#ifndef __ASSEMBLER__
#define errno (*__errno_location ())
# ifdef __USE_GNU
# ifndef __error_t_defined
#define __error_t_defined 1
# endif
# endif
#endif
#endif
