// GGHASH:VEFTsujGJpETTZ1ejJDmQV4Vj9wjsP632PPEjuTfU.Ig00003dc8
#ifndef _XKBGEOM_H_
#define _XKBGEOM_H_ 
#include <X11/extensions/XKBstr.h>
#ifdef XKB_IN_SERVER
#define XkbAddGeomKeyAlias SrvXkbAddGeomKeyAlias
#define XkbAddGeomColor SrvXkbAddGeomColor
#define XkbAddGeomDoodad SrvXkbAddGeomDoodad
#define XkbAddGeomKey SrvXkbAddGeomKey
#define XkbAddGeomOutline SrvXkbAddGeomOutline
#define XkbAddGeomOverlay SrvXkbAddGeomOverlay
#define XkbAddGeomOverlayRow SrvXkbAddGeomOverlayRow
#define XkbAddGeomOverlayKey SrvXkbAddGeomOverlayKey
#define XkbAddGeomProperty SrvXkbAddGeomProperty
#define XkbAddGeomRow SrvXkbAddGeomRow
#define XkbAddGeomSection SrvXkbAddGeomSection
#define XkbAddGeomShape SrvXkbAddGeomShape
#define XkbAllocGeomKeyAliases SrvXkbAllocGeomKeyAliases
#define XkbAllocGeomColors SrvXkbAllocGeomColors
#define XkbAllocGeomDoodads SrvXkbAllocGeomDoodads
#define XkbAllocGeomKeys SrvXkbAllocGeomKeys
#define XkbAllocGeomOutlines SrvXkbAllocGeomOutlines
#define XkbAllocGeomPoints SrvXkbAllocGeomPoints
#define XkbAllocGeomProps SrvXkbAllocGeomProps
#define XkbAllocGeomRows SrvXkbAllocGeomRows
#define XkbAllocGeomSectionDoodads SrvXkbAllocGeomSectionDoodads
#define XkbAllocGeomSections SrvXkbAllocGeomSections
#define XkbAllocGeomOverlays SrvXkbAllocGeomOverlays
#define XkbAllocGeomOverlayRows SrvXkbAllocGeomOverlayRows
#define XkbAllocGeomOverlayKeys SrvXkbAllocGeomOverlayKeys
#define XkbAllocGeomShapes SrvXkbAllocGeomShapes
#define XkbAllocGeometry SrvXkbAllocGeometry
#define XkbFreeGeomKeyAliases SrvXkbFreeGeomKeyAliases
#define XkbFreeGeomColors SrvXkbFreeGeomColors
#define XkbFreeGeomDoodads SrvXkbFreeGeomDoodads
#define XkbFreeGeomProperties SrvXkbFreeGeomProperties
#define XkbFreeGeomOverlayKeys SrvXkbFreeGeomOverlayKeys
#define XkbFreeGeomOverlayRows SrvXkbFreeGeomOverlayRows
#define XkbFreeGeomOverlays SrvXkbFreeGeomOverlays
#define XkbFreeGeomKeys SrvXkbFreeGeomKeys
#define XkbFreeGeomRows SrvXkbFreeGeomRows
#define XkbFreeGeomSections SrvXkbFreeGeomSections
#define XkbFreeGeomPoints SrvXkbFreeGeomPoints
#define XkbFreeGeomOutlines SrvXkbFreeGeomOutlines
#define XkbFreeGeomShapes SrvXkbFreeGeomShapes
#define XkbFreeGeometry SrvXkbFreeGeometry
#endif
#define XkbBoundsWidth(b) (((b)->x2)-((b)->x1))
#define XkbBoundsHeight(b) (((b)->y2)-((b)->y1))
#define XkbOutlineIndex(s,o) ((int)((o)-&(s)->outlines[0]))
#define XkbShapeDoodadColor(g,d) (&(g)->colors[(d)->color_ndx])
#define XkbShapeDoodadShape(g,d) (&(g)->shapes[(d)->shape_ndx])
#define XkbSetShapeDoodadColor(g,d,c) ((d)->color_ndx= (c)-&(g)->colors[0])
#define XkbSetShapeDoodadShape(g,d,s) ((d)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbTextDoodadColor(g,d) (&(g)->colors[(d)->color_ndx])
#define XkbSetTextDoodadColor(g,d,c) ((d)->color_ndx= (c)-&(g)->colors[0])
#define XkbIndicatorDoodadShape(g,d) (&(g)->shapes[(d)->shape_ndx])
#define XkbIndicatorDoodadOnColor(g,d) (&(g)->colors[(d)->on_color_ndx])
#define XkbIndicatorDoodadOffColor(g,d) (&(g)->colors[(d)->off_color_ndx])
#define XkbSetIndicatorDoodadOnColor(g,d,c) ((d)->on_color_ndx= (c)-&(g)->colors[0])
#define XkbSetIndicatorDoodadOffColor(g,d,c) ((d)->off_color_ndx= (c)-&(g)->colors[0])
#define XkbSetIndicatorDoodadShape(g,d,s) ((d)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbLogoDoodadColor(g,d) (&(g)->colors[(d)->color_ndx])
#define XkbLogoDoodadShape(g,d) (&(g)->shapes[(d)->shape_ndx])
#define XkbSetLogoDoodadColor(g,d,c) ((d)->color_ndx= (c)-&(g)->colors[0])
#define XkbSetLogoDoodadShape(g,d,s) ((d)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbUnknownDoodad 0
#define XkbOutlineDoodad 1
#define XkbSolidDoodad 2
#define XkbTextDoodad 3
#define XkbIndicatorDoodad 4
#define XkbLogoDoodad 5
#define XkbKeyShape(g,k) (&(g)->shapes[(k)->shape_ndx])
#define XkbKeyColor(g,k) (&(g)->colors[(k)->color_ndx])
#define XkbSetKeyShape(g,k,s) ((k)->shape_ndx= (s)-&(g)->shapes[0])
#define XkbSetKeyColor(g,k,c) ((k)->color_ndx= (c)-&(g)->colors[0])
#define XkbGeomColorIndex(g,c) ((int)((c)-&(g)->colors[0]))
#define XkbGeomPropertiesMask (1<<0)
#define XkbGeomColorsMask (1<<1)
#define XkbGeomShapesMask (1<<2)
#define XkbGeomSectionsMask (1<<3)
#define XkbGeomDoodadsMask (1<<4)
#define XkbGeomKeyAliasesMask (1<<5)
#define XkbGeomAllMask (0x3f)
#endif
