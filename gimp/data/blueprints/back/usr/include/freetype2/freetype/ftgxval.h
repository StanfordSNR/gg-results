// GGHASH:VRv.Gacuyv7TpiMSYMSPzyqbvTicRFVvLjgVSFuy2T0E00003457
#ifndef FTGXVAL_H_
#define FTGXVAL_H_ 
#include <ft2build.h>
#include FT_FREETYPE_H
#ifdef FREETYPE_H
#error "freetype.h of FreeType 1 has been loaded!"
#error "Please fix the directory search order for header files"
#error "so that freetype.h of FreeType 2 is found first."
#endif
#define FT_VALIDATE_feat_INDEX 0
#define FT_VALIDATE_mort_INDEX 1
#define FT_VALIDATE_morx_INDEX 2
#define FT_VALIDATE_bsln_INDEX 3
#define FT_VALIDATE_just_INDEX 4
#define FT_VALIDATE_kern_INDEX 5
#define FT_VALIDATE_opbd_INDEX 6
#define FT_VALIDATE_trak_INDEX 7
#define FT_VALIDATE_prop_INDEX 8
#define FT_VALIDATE_lcar_INDEX 9
#define FT_VALIDATE_GX_LAST_INDEX FT_VALIDATE_lcar_INDEX
#define FT_VALIDATE_GX_LENGTH (FT_VALIDATE_GX_LAST_INDEX + 1)
#define FT_VALIDATE_GX_START 0x4000
#define FT_VALIDATE_GX_BITFIELD(tag) ( FT_VALIDATE_GX_START << FT_VALIDATE_ ##tag ##_INDEX )
#define FT_VALIDATE_feat FT_VALIDATE_GX_BITFIELD( feat )
#define FT_VALIDATE_mort FT_VALIDATE_GX_BITFIELD( mort )
#define FT_VALIDATE_morx FT_VALIDATE_GX_BITFIELD( morx )
#define FT_VALIDATE_bsln FT_VALIDATE_GX_BITFIELD( bsln )
#define FT_VALIDATE_just FT_VALIDATE_GX_BITFIELD( just )
#define FT_VALIDATE_kern FT_VALIDATE_GX_BITFIELD( kern )
#define FT_VALIDATE_opbd FT_VALIDATE_GX_BITFIELD( opbd )
#define FT_VALIDATE_trak FT_VALIDATE_GX_BITFIELD( trak )
#define FT_VALIDATE_prop FT_VALIDATE_GX_BITFIELD( prop )
#define FT_VALIDATE_lcar FT_VALIDATE_GX_BITFIELD( lcar )
#define FT_VALIDATE_GX ( FT_VALIDATE_feat | FT_VALIDATE_mort | FT_VALIDATE_morx | FT_VALIDATE_bsln | FT_VALIDATE_just | FT_VALIDATE_kern | FT_VALIDATE_opbd | FT_VALIDATE_trak | FT_VALIDATE_prop | FT_VALIDATE_lcar )
#define FT_VALIDATE_MS ( FT_VALIDATE_GX_START << 0 )
#define FT_VALIDATE_APPLE ( FT_VALIDATE_GX_START << 1 )
#define FT_VALIDATE_CKERN ( FT_VALIDATE_MS | FT_VALIDATE_APPLE )
#endif
