// GGHASH:VklEFYvksveayAcLy5HNLbfHdNaS0Pu8pqtgj4gGd7.M0000066d
#ifndef _EXCEPTION_DEFINES_H
#define _EXCEPTION_DEFINES_H 1
#if ! __cpp_exceptions
#define __try if (true)
#define __catch(X) if (false)
#define __throw_exception_again 
#else
#define __try try
#define __catch(X) catch(X)
#define __throw_exception_again throw
#endif
#endif
