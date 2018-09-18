// GGHASH:VmDCQx.Xn6v8nEU7CFoiaitJuQK2Pu3i4rmwJOR3GFUM000000e0
# ifdef __i386__
# include <asm/posix_types_32.h>
# elif defined(__ILP32__)
# include <asm/posix_types_x32.h>
# else
# include <asm/posix_types_64.h>
# endif
