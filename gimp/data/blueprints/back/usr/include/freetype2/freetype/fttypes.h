// GGHASH:V__mWTWXm4jD2yZ3UqAGRVlzk3N2PuH6WAZZ39Tyq2fk00008b61
#ifndef FTTYPES_H_
#define FTTYPES_H_ 
#include <ft2build.h>
#include FT_CONFIG_CONFIG_H
#include FT_SYSTEM_H
#include FT_IMAGE_H
#include <stddef.h>
#define FT_MAKE_TAG(_x1,_x2,_x3,_x4) (FT_Tag) ( ( (FT_ULong)_x1 << 24 ) | ( (FT_ULong)_x2 << 16 ) | ( (FT_ULong)_x3 << 8 ) | (FT_ULong)_x4 )
#define FT_IS_EMPTY(list) ( (list).head == 0 )
#define FT_BOOL(x) ( (FT_Bool)( x ) )
#define FT_ERR_XCAT(x,y) x ## y
#define FT_ERR_CAT(x,y) FT_ERR_XCAT( x, y )
#define FT_ERR(e) FT_ERR_CAT( FT_ERR_PREFIX, e )
#define FT_ERROR_BASE(x) ( (x) & 0xFF )
#define FT_ERROR_MODULE(x) ( (x) & 0xFF00U )
#define FT_ERR_EQ(x,e) ( FT_ERROR_BASE( x ) == FT_ERROR_BASE( FT_ERR( e ) ) )
#define FT_ERR_NEQ(x,e) ( FT_ERROR_BASE( x ) != FT_ERROR_BASE( FT_ERR( e ) ) )
#endif
