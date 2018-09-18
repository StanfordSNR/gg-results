// GGHASH:VY3Yp76nBc4RvZ5Ad1vm1jPRZDgqgheQGlhfrFYboD9E00000d40
#include <linux/types.h>
#define CRYPTO_MSG_MAX (__CRYPTO_MSG_MAX - 1)
#define CRYPTO_NR_MSGTYPES (CRYPTO_MSG_MAX + 1 - CRYPTO_MSG_BASE)
#define CRYPTO_MAX_NAME 64
#define CRYPTOCFGA_MAX (__CRYPTOCFGA_MAX - 1)
#define CRYPTO_REPORT_MAXSIZE (sizeof(struct crypto_user_alg) + sizeof(struct crypto_report_blkcipher))
