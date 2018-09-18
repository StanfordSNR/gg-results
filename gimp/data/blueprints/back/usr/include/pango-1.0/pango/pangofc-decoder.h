// GGHASH:VvKGEXK8BwHjf02ywYi0pOJB7.8ThhWVLQMOj2qSoZDs00000f33
#ifndef __PANGO_DECODER_H_
#define __PANGO_DECODER_H_ 
#include <pango/pangofc-font.h>
#define PANGO_TYPE_FC_DECODER (pango_fc_decoder_get_type())
#define PANGO_FC_DECODER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_FC_DECODER, PangoFcDecoder))
#define PANGO_IS_FC_DECODER(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_FC_DECODER))
#define PANGO_FC_DECODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANGO_TYPE_FC_DECODER, PangoFcDecoderClass))
#define PANGO_IS_FC_DECODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANGO_TYPE_FC_DECODER))
#define PANGO_FC_DECODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANGO_TYPE_FC_DECODER, PangoFcDecoderClass))
#endif
