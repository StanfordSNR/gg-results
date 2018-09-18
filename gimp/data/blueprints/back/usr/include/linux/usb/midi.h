// GGHASH:VKX.ZODRIiIBytdxy6fvEEaVzemt6SGmxxr.v_tkPbW000000d6a
#ifndef __LINUX_USB_MIDI_H
#define __LINUX_USB_MIDI_H 
#include <linux/types.h>
#define USB_MS_HEADER 0x01
#define USB_MS_MIDI_IN_JACK 0x02
#define USB_MS_MIDI_OUT_JACK 0x03
#define USB_MS_ELEMENT 0x04
#define USB_MS_GENERAL 0x01
#define USB_MS_EMBEDDED 0x01
#define USB_MS_EXTERNAL 0x02
#define USB_DT_MS_HEADER_SIZE 7
#define USB_DT_MIDI_IN_SIZE 6
#define USB_DT_MIDI_OUT_SIZE(p) (7 + 2 * (p))
#define DECLARE_USB_MIDI_OUT_JACK_DESCRIPTOR(p) struct usb_midi_out_jack_descriptor_ ##p { __u8 bLength; __u8 bDescriptorType; __u8 bDescriptorSubtype; __u8 bJackType; __u8 bJackID; __u8 bNrInputPins; struct usb_midi_source_pin pins[p]; __u8 iJack; } __attribute__ ((packed))
#define USB_DT_MS_ENDPOINT_SIZE(n) (4 + (n))
#define DECLARE_USB_MS_ENDPOINT_DESCRIPTOR(n) struct usb_ms_endpoint_descriptor_ ##n { __u8 bLength; __u8 bDescriptorType; __u8 bDescriptorSubtype; __u8 bNumEmbMIDIJack; __u8 baAssocJackID[n]; } __attribute__ ((packed))
#endif
