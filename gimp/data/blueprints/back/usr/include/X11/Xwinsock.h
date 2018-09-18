// GGHASH:VDg71DDUZzDKsLqOJk79whcfFtqde5jIlUNYxoRnBux0000008d6
#undef _XFree86Server
#ifdef XFree86Server
#define _XFree86Server 
#undef XFree86Server
#endif
#define _NO_BOOL_TYPEDEF 
#define BOOL WINBOOL
#define INT32 wINT32
#undef Status
#define Status wStatus
#define ATOM wATOM
#define BYTE wBYTE
#define FreeResource wFreeResource
#include <winsock2.h>
#undef Status
#define Status int
#undef BYTE
#undef BOOL
#undef INT32
#undef ATOM
#undef FreeResource
#undef CreateWindowA
#undef RT_FONT
#undef RT_CURSOR
#define wBOOL WINBOOL
#ifdef _XFree86Server
#define XFree86Server 
#undef _XFree86Server
#endif
