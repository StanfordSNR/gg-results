// GGHASH:VTFhTKV30xcw083kkWvw2WjnL48ztAc7AfZDQLWzF3MQ000005e9
#ifndef _BITS_SOCKADDR_H
#define _BITS_SOCKADDR_H 1
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ##family
#define __SOCKADDR_COMMON_SIZE (sizeof (unsigned short int))
#define _SS_SIZE 128
#endif
