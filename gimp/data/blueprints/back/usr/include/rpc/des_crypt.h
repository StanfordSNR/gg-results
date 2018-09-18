// GGHASH:Vvve2e5OhST_uK5I.Wg5JNewPI4ILUFOZmSrlglUpM5k00000d37
#ifndef __DES_CRYPT_H__
#define __DES_CRYPT_H__ 1
#include <features.h>
#define DES_MAXDATA 8192
#define DES_DIRMASK (1 << 0)
#define DES_ENCRYPT (0*DES_DIRMASK)
#define DES_DECRYPT (1*DES_DIRMASK)
#define DES_DEVMASK (1 << 1)
#define DES_HW (0*DES_DEVMASK)
#define DES_SW (1*DES_DEVMASK)
#define DESERR_NONE 0
#define DESERR_NOHWDEVICE 1
#define DESERR_HWERROR 2
#define DESERR_BADPARAM 3
#define DES_FAILED(err) ((err) > DESERR_NOHWDEVICE)
#endif
