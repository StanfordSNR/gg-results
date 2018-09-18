// GGHASH:V0l_J5BjGqQ2_nG1w30LgJ_urwu40QSzpP7aM7e7eGLk00000765
#ifndef _DAMAGEWIRE_H_
#define _DAMAGEWIRE_H_ 
#define DAMAGE_NAME "DAMAGE"
#define DAMAGE_MAJOR 1
#define DAMAGE_MINOR 1
#define XDamageReportRawRectangles 0
#define XDamageReportDeltaRectangles 1
#define XDamageReportBoundingBox 2
#define XDamageReportNonEmpty 3
#define X_DamageQueryVersion 0
#define X_DamageCreate 1
#define X_DamageDestroy 2
#define X_DamageSubtract 3
#define X_DamageAdd 4
#define XDamageNumberRequests (X_DamageAdd + 1)
#define XDamageNotify 0
#define XDamageNumberEvents (XDamageNotify + 1)
#define BadDamage 0
#define XDamageNumberErrors (BadDamage + 1)
#endif
