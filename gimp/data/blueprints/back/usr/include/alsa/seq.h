// GGHASH:VNIfx52b3x0MMR3pfkJ66inzJ2JT.t7YmBMTt7QtoVKg00007ed7
#ifndef __ALSA_SEQ_H
#define __ALSA_SEQ_H 
#ifdef __cplusplus
#endif
#define SND_SEQ_DLSYM_VERSION _dlsym_seq_001
#define SND_SEQ_OPEN_OUTPUT 1
#define SND_SEQ_OPEN_INPUT 2
#define SND_SEQ_OPEN_DUPLEX (SND_SEQ_OPEN_OUTPUT|SND_SEQ_OPEN_INPUT)
#define SND_SEQ_NONBLOCK 0x0001
#define SND_SEQ_ADDRESS_UNKNOWN 253
#define SND_SEQ_ADDRESS_SUBSCRIBERS 254
#define SND_SEQ_ADDRESS_BROADCAST 255
#define SND_SEQ_CLIENT_SYSTEM 0
#define snd_seq_system_info_alloca(ptr) __snd_alloca(ptr, snd_seq_system_info)
#define snd_seq_client_info_alloca(ptr) __snd_alloca(ptr, snd_seq_client_info)
#define snd_seq_client_pool_alloca(ptr) __snd_alloca(ptr, snd_seq_client_pool)
#define SND_SEQ_PORT_SYSTEM_TIMER 0
#define SND_SEQ_PORT_SYSTEM_ANNOUNCE 1
#define SND_SEQ_PORT_CAP_READ (1<<0)
#define SND_SEQ_PORT_CAP_WRITE (1<<1)
#define SND_SEQ_PORT_CAP_SYNC_READ (1<<2)
#define SND_SEQ_PORT_CAP_SYNC_WRITE (1<<3)
#define SND_SEQ_PORT_CAP_DUPLEX (1<<4)
#define SND_SEQ_PORT_CAP_SUBS_READ (1<<5)
#define SND_SEQ_PORT_CAP_SUBS_WRITE (1<<6)
#define SND_SEQ_PORT_CAP_NO_EXPORT (1<<7)
#define SND_SEQ_PORT_TYPE_SPECIFIC (1<<0)
#define SND_SEQ_PORT_TYPE_MIDI_GENERIC (1<<1)
#define SND_SEQ_PORT_TYPE_MIDI_GM (1<<2)
#define SND_SEQ_PORT_TYPE_MIDI_GS (1<<3)
#define SND_SEQ_PORT_TYPE_MIDI_XG (1<<4)
#define SND_SEQ_PORT_TYPE_MIDI_MT32 (1<<5)
#define SND_SEQ_PORT_TYPE_MIDI_GM2 (1<<6)
#define SND_SEQ_PORT_TYPE_SYNTH (1<<10)
#define SND_SEQ_PORT_TYPE_DIRECT_SAMPLE (1<<11)
#define SND_SEQ_PORT_TYPE_SAMPLE (1<<12)
#define SND_SEQ_PORT_TYPE_HARDWARE (1<<16)
#define SND_SEQ_PORT_TYPE_SOFTWARE (1<<17)
#define SND_SEQ_PORT_TYPE_SYNTHESIZER (1<<18)
#define SND_SEQ_PORT_TYPE_PORT (1<<19)
#define SND_SEQ_PORT_TYPE_APPLICATION (1<<20)
#define snd_seq_port_info_alloca(ptr) __snd_alloca(ptr, snd_seq_port_info)
#define snd_seq_port_subscribe_alloca(ptr) __snd_alloca(ptr, snd_seq_port_subscribe)
#define snd_seq_query_subscribe_alloca(ptr) __snd_alloca(ptr, snd_seq_query_subscribe)
#define SND_SEQ_QUEUE_DIRECT 253
#define snd_seq_queue_info_alloca(ptr) __snd_alloca(ptr, snd_seq_queue_info)
#define snd_seq_queue_status_alloca(ptr) __snd_alloca(ptr, snd_seq_queue_status)
#define snd_seq_queue_tempo_alloca(ptr) __snd_alloca(ptr, snd_seq_queue_tempo)
#define snd_seq_queue_timer_alloca(ptr) __snd_alloca(ptr, snd_seq_queue_timer)
#define SND_SEQ_REMOVE_INPUT (1<<0)
#define SND_SEQ_REMOVE_OUTPUT (1<<1)
#define SND_SEQ_REMOVE_DEST (1<<2)
#define SND_SEQ_REMOVE_DEST_CHANNEL (1<<3)
#define SND_SEQ_REMOVE_TIME_BEFORE (1<<4)
#define SND_SEQ_REMOVE_TIME_AFTER (1<<5)
#define SND_SEQ_REMOVE_TIME_TICK (1<<6)
#define SND_SEQ_REMOVE_EVENT_TYPE (1<<7)
#define SND_SEQ_REMOVE_IGNORE_OFF (1<<8)
#define SND_SEQ_REMOVE_TAG_MATCH (1<<9)
#define snd_seq_remove_events_alloca(ptr) __snd_alloca(ptr, snd_seq_remove_events)
#define _SND_SEQ_TYPE(x) (1<<(x))
#define _SND_SEQ_TYPE_OPT(x) ((x)<<24)
#define snd_seq_type_check(ev,x) (snd_seq_event_types[(ev)->type] & _SND_SEQ_TYPE(x))
#define snd_seq_ev_is_result_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_RESULT)
#define snd_seq_ev_is_note_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_NOTE)
#define snd_seq_ev_is_control_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_CONTROL)
#define snd_seq_ev_is_channel_type(ev) (snd_seq_event_types[(ev)->type] & (_SND_SEQ_TYPE(SND_SEQ_EVFLG_NOTE) | _SND_SEQ_TYPE(SND_SEQ_EVFLG_CONTROL)))
#define snd_seq_ev_is_queue_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_QUEUE)
#define snd_seq_ev_is_message_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_MESSAGE)
#define snd_seq_ev_is_subscribe_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_CONNECTION)
#define snd_seq_ev_is_sample_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_SAMPLE)
#define snd_seq_ev_is_user_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_USERS)
#define snd_seq_ev_is_instr_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_INSTR)
#define snd_seq_ev_is_fixed_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_FIXED)
#define snd_seq_ev_is_variable_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_VARIABLE)
#define snd_seq_ev_is_varusr_type(ev) snd_seq_type_check(ev, SND_SEQ_EVFLG_VARUSR)
#define snd_seq_ev_is_reserved(ev) (! snd_seq_event_types[(ev)->type])
#define snd_seq_ev_is_prior(ev) (((ev)->flags & SND_SEQ_PRIORITY_MASK) == SND_SEQ_PRIORITY_HIGH)
#define snd_seq_ev_length_type(ev) ((ev)->flags & SND_SEQ_EVENT_LENGTH_MASK)
#define snd_seq_ev_is_fixed(ev) (snd_seq_ev_length_type(ev) == SND_SEQ_EVENT_LENGTH_FIXED)
#define snd_seq_ev_is_variable(ev) (snd_seq_ev_length_type(ev) == SND_SEQ_EVENT_LENGTH_VARIABLE)
#define snd_seq_ev_is_varusr(ev) (snd_seq_ev_length_type(ev) == SND_SEQ_EVENT_LENGTH_VARUSR)
#define snd_seq_ev_timestamp_type(ev) ((ev)->flags & SND_SEQ_TIME_STAMP_MASK)
#define snd_seq_ev_is_tick(ev) (snd_seq_ev_timestamp_type(ev) == SND_SEQ_TIME_STAMP_TICK)
#define snd_seq_ev_is_real(ev) (snd_seq_ev_timestamp_type(ev) == SND_SEQ_TIME_STAMP_REAL)
#define snd_seq_ev_timemode_type(ev) ((ev)->flags & SND_SEQ_TIME_MODE_MASK)
#define snd_seq_ev_is_abstime(ev) (snd_seq_ev_timemode_type(ev) == SND_SEQ_TIME_MODE_ABS)
#define snd_seq_ev_is_reltime(ev) (snd_seq_ev_timemode_type(ev) == SND_SEQ_TIME_MODE_REL)
#define snd_seq_ev_is_direct(ev) ((ev)->queue == SND_SEQ_QUEUE_DIRECT)
#ifdef __cplusplus
#endif
#endif
