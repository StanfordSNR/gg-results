// GGHASH:VKctmK.qIkRGO_ZhL0mMz3Wm4liBicf6WZ8iwuotCUOs000020b7
#ifndef __GEGL_AUDIO_FRAGMENT_H__
#define __GEGL_AUDIO_FRAGMENT_H__ 
#include <glib-object.h>
#define GEGL_TYPE_AUDIO_FRAGMENT (gegl_audio_fragment_get_type ())
#define GEGL_AUDIO_FRAGMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEGL_TYPE_AUDIO_FRAGMENT, GeglAudioFragment))
#define GEGL_AUDIO_FRAGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEGL_TYPE_AUDIO_FRAGMENT, GeglAudioFragmentClass))
#define GEGL_IS_AUDIO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEGL_TYPE_AUDIO_FRAGMENT))
#define GEGL_IS_AUDIO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEGL_TYPE_AUDIO_FRAGMENT))
#define GEGL_AUDIO_FRAGMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEGL_TYPE_AUDIO_FRAGMENT, GeglAudioFragmentClass))
#define GEGL_MAX_AUDIO_CHANNELS 8
#define GEGL_CH_FRONT_LEFT 0x00000001
#define GEGL_CH_FRONT_RIGHT 0x00000002
#define GEGL_CH_FRONT_CENTER 0x00000004
#define GEGL_CH_LOW_FREQUENCY 0x00000008
#define GEGL_CH_BACK_LEFT 0x00000010
#define GEGL_CH_BACK_RIGHT 0x00000020
#define GEGL_CH_FRONT_LEFT_OF_CENTER 0x00000040
#define GEGL_CH_FRONT_RIGHT_OF_CENTER 0x00000080
#define GEGL_CH_BACK_CENTER 0x00000100
#define GEGL_CH_SIDE_LEFT 0x00000200
#define GEGL_CH_SIDE_RIGHT 0x00000400
#define GEGL_CH_TOP_CENTER 0x00000800
#define GEGL_CH_TOP_FRONT_LEFT 0x00001000
#define GEGL_CH_TOP_FRONT_CENTER 0x00002000
#define GEGL_CH_TOP_FRONT_RIGHT 0x00004000
#define GEGL_CH_TOP_BACK_LEFT 0x00008000
#define GEGL_CH_TOP_BACK_CENTER 0x00010000
#define GEGL_CH_TOP_BACK_RIGHT 0x00020000
#define GEGL_CH_STEREO_LEFT 0x20000000
#define GEGL_CH_STEREO_RIGHT 0x40000000
#define GEGL_CH_WIDE_LEFT 0x0000000080000000ULL
#define GEGL_CH_WIDE_RIGHT 0x0000000100000000ULL
#define GEGL_CH_SURROUND_DIRECT_LEFT 0x0000000200000000ULL
#define GEGL_CH_SURROUND_DIRECT_RIGHT 0x0000000400000000ULL
#define GEGL_CH_LOW_FREQUENCY_2 0x0000000800000000ULL
#define GEGL_CH_LAYOUT_NATIVE 0x8000000000000000ULL
#define GEGL_CH_LAYOUT_MONO (GEGL_CH_FRONT_CENTER)
#define GEGL_CH_LAYOUT_STEREO (GEGL_CH_FRONT_LEFT|GEGL_CH_FRONT_RIGHT)
#define GEGL_CH_LAYOUT_2POINT1 (GEGL_CH_LAYOUT_STEREO|GEGL_CH_LOW_FREQUENCY)
#define GEGL_CH_LAYOUT_2_1 (GEGL_CH_LAYOUT_STEREO|GEGL_CH_BACK_CENTER)
#define GEGL_CH_LAYOUT_SURROUND (GEGL_CH_LAYOUT_STEREO|GEGL_CH_FRONT_CENTER)
#define GEGL_CH_LAYOUT_3POINT1 (GEGL_CH_LAYOUT_SURROUND|GEGL_CH_LOW_FREQUENCY)
#define GEGL_CH_LAYOUT_4POINT0 (GEGL_CH_LAYOUT_SURROUND|GEGL_CH_BACK_CENTER)
#define GEGL_CH_LAYOUT_4POINT1 (GEGL_CH_LAYOUT_4POINT0|GEGL_CH_LOW_FREQUENCY)
#define GEGL_CH_LAYOUT_2_2 (GEGL_CH_LAYOUT_STEREO|GEGL_CH_SIDE_LEFT|GEGL_CH_SIDE_RIGHT)
#define GEGL_CH_LAYOUT_QUAD (GEGL_CH_LAYOUT_STEREO|GEGL_CH_BACK_LEFT|GEGL_CH_BACK_RIGHT)
#define GEGL_CH_LAYOUT_5POINT0 (GEGL_CH_LAYOUT_SURROUND|GEGL_CH_SIDE_LEFT|GEGL_CH_SIDE_RIGHT)
#define GEGL_CH_LAYOUT_5POINT1 (GEGL_CH_LAYOUT_5POINT0|GEGL_CH_LOW_FREQUENCY)
#define GEGL_CH_LAYOUT_5POINT0_BACK (GEGL_CH_LAYOUT_SURROUND|GEGL_CH_BACK_LEFT|GEGL_CH_BACK_RIGHT)
#define GEGL_CH_LAYOUT_5POINT1_BACK (GEGL_CH_LAYOUT_5POINT0_BACK|GEGL_CH_LOW_FREQUENCY)
#define GEGL_CH_LAYOUT_6POINT0 (GEGL_CH_LAYOUT_5POINT0|GEGL_CH_BACK_CENTER)
#define GEGL_CH_LAYOUT_6POINT0_FRONT (GEGL_CH_LAYOUT_2_2|GEGL_CH_FRONT_LEFT_OF_CENTER|GEGL_CH_FRONT_RIGHT_OF_CENTER)
#define GEGL_CH_LAYOUT_HEXAGONAL (GEGL_CH_LAYOUT_5POINT0_BACK|GEGL_CH_BACK_CENTER)
#define GEGL_CH_LAYOUT_6POINT1 (GEGL_CH_LAYOUT_5POINT1|GEGL_CH_BACK_CENTER)
#define GEGL_CH_LAYOUT_6POINT1_BACK (GEGL_CH_LAYOUT_5POINT1_BACK|GEGL_CH_BACK_CENTER)
#define GEGL_CH_LAYOUT_6POINT1_FRONT (GEGL_CH_LAYOUT_6POINT0_FRONT|GEGL_CH_LOW_FREQUENCY)
#define GEGL_CH_LAYOUT_7POINT0 (GEGL_CH_LAYOUT_5POINT0|GEGL_CH_BACK_LEFT|GEGL_CH_BACK_RIGHT)
#define GEGL_CH_LAYOUT_7POINT0_FRONT (GEGL_CH_LAYOUT_5POINT0|GEGL_CH_FRONT_LEFT_OF_CENTER|GEGL_CH_FRONT_RIGHT_OF_CENTER)
#define GEGL_CH_LAYOUT_7POINT1 (GEGL_CH_LAYOUT_5POINT1|GEGL_CH_BACK_LEFT|GEGL_CH_BACK_RIGHT)
#define GEGL_CH_LAYOUT_7POINT1_WIDE (GEGL_CH_LAYOUT_5POINT1|GEGL_CH_FRONT_LEFT_OF_CENTER|GEGL_CH_FRONT_RIGHT_OF_CENTER)
#define GEGL_CH_LAYOUT_7POINT1_WIDE_BACK (GEGL_CH_LAYOUT_5POINT1_BACK|GEGL_CH_FRONT_LEFT_OF_CENTER|GEGL_CH_FRONT_RIGHT_OF_CENTER)
#define GEGL_CH_LAYOUT_OCTAGONAL (GEGL_CH_LAYOUT_5POINT0|GEGL_CH_BACK_LEFT|GEGL_CH_BACK_CENTER|GEGL_CH_BACK_RIGHT)
#define GEGL_CH_LAYOUT_HEXADECAGONAL (GEGL_CH_LAYOUT_OCTAGONAL|GEGL_CH_WIDE_LEFT|GEGL_CH_WIDE_RIGHT|GEGL_CH_TOP_BACK_LEFT|GEGL_CH_TOP_BACK_RIGHT|GEGL_CH_TOP_BACK_CENTER|GEGL_CH_TOP_FRONT_CENTER|GEGL_CH_TOP_FRONT_LEFT|GEGL_CH_TOP_FRONT_RIGHT)
#define GEGL_CH_LAYOUT_STEREO_DOWNMIX (GEGL_CH_STEREO_LEFT|GEGL_CH_STEREO_RIGHT)
#define GEGL_TYPE_PARAM_AUDIO_FRAGMENT (gegl_param_audio_fragment_get_type ())
#define GEGL_IS_PARAM_SPEC_AUDIO_FRAGMENT(pspec) (G_TYPE_CHECK_INSTANCE_TYPE ((pspec), GEGL_TYPE_PARAM_AUDIO_FRAGMENT))
#endif
