// GGHASH:VYTIS2zvNi_45fS94R7z_LwC_ofGDfmITirzBBbgOVuI0000385d
#ifndef __ALSA_SEQMID_H
#define __ALSA_SEQMID_H 
#ifdef __cplusplus
#endif
#define snd_seq_ev_clear(ev) memset(ev, 0, sizeof(snd_seq_event_t))
#define snd_seq_ev_set_tag(ev,t) ((ev)->tag = (t))
#define snd_seq_ev_set_dest(ev,c,p) ((ev)->dest.client = (c), (ev)->dest.port = (p))
#define snd_seq_ev_set_subs(ev) ((ev)->dest.client = SND_SEQ_ADDRESS_SUBSCRIBERS, (ev)->dest.port = SND_SEQ_ADDRESS_UNKNOWN)
#define snd_seq_ev_set_broadcast(ev) ((ev)->dest.client = SND_SEQ_ADDRESS_BROADCAST, (ev)->dest.port = SND_SEQ_ADDRESS_BROADCAST)
#define snd_seq_ev_set_source(ev,p) ((ev)->source.port = (p))
#define snd_seq_ev_set_direct(ev) ((ev)->queue = SND_SEQ_QUEUE_DIRECT)
#define snd_seq_ev_schedule_tick(ev,q,relative,ttick) ((ev)->flags &= ~(SND_SEQ_TIME_STAMP_MASK | SND_SEQ_TIME_MODE_MASK), (ev)->flags |= SND_SEQ_TIME_STAMP_TICK, (ev)->flags |= (relative) ? SND_SEQ_TIME_MODE_REL : SND_SEQ_TIME_MODE_ABS, (ev)->time.tick = (ttick), (ev)->queue = (q))
#define snd_seq_ev_schedule_real(ev,q,relative,rtime) ((ev)->flags &= ~(SND_SEQ_TIME_STAMP_MASK | SND_SEQ_TIME_MODE_MASK), (ev)->flags |= SND_SEQ_TIME_STAMP_REAL, (ev)->flags |= (relative) ? SND_SEQ_TIME_MODE_REL : SND_SEQ_TIME_MODE_ABS, (ev)->time.time = *(rtime), (ev)->queue = (q))
#define snd_seq_ev_set_priority(ev,high_prior) ((ev)->flags &= ~SND_SEQ_PRIORITY_MASK, (ev)->flags |= (high_prior) ? SND_SEQ_PRIORITY_HIGH : SND_SEQ_PRIORITY_NORMAL)
#define snd_seq_ev_set_fixed(ev) ((ev)->flags &= ~SND_SEQ_EVENT_LENGTH_MASK, (ev)->flags |= SND_SEQ_EVENT_LENGTH_FIXED)
#define snd_seq_ev_set_variable(ev,datalen,dataptr) ((ev)->flags &= ~SND_SEQ_EVENT_LENGTH_MASK, (ev)->flags |= SND_SEQ_EVENT_LENGTH_VARIABLE, (ev)->data.ext.len = (datalen), (ev)->data.ext.ptr = (dataptr))
#define snd_seq_ev_set_varusr(ev,datalen,dataptr) ((ev)->flags &= ~SND_SEQ_EVENT_LENGTH_MASK, (ev)->flags |= SND_SEQ_EVENT_LENGTH_VARUSR, (ev)->data.ext.len = (datalen), (ev)->data.ext.ptr = (dataptr))
#define snd_seq_ev_set_queue_control(ev,typ,q,val) ((ev)->type = (typ), snd_seq_ev_set_dest(ev, SND_SEQ_CLIENT_SYSTEM, SND_SEQ_PORT_SYSTEM_TIMER), (ev)->data.queue.queue = (q), (ev)->data.queue.param.value = (val))
#define snd_seq_ev_set_queue_start(ev,q) snd_seq_ev_set_queue_control(ev, SND_SEQ_EVENT_START, q, 0)
#define snd_seq_ev_set_queue_stop(ev,q) snd_seq_ev_set_queue_control(ev, SND_SEQ_EVENT_STOP, q, 0)
#define snd_seq_ev_set_queue_continue(ev,q) snd_seq_ev_set_queue_control(ev, SND_SEQ_EVENT_CONTINUE, q, 0)
#define snd_seq_ev_set_queue_tempo(ev,q,val) snd_seq_ev_set_queue_control(ev, SND_SEQ_EVENT_TEMPO, q, val)
#define snd_seq_ev_set_queue_pos_real(ev,q,rtime) ((ev)->type = SND_SEQ_EVENT_SETPOS_TIME, snd_seq_ev_set_dest(ev, SND_SEQ_CLIENT_SYSTEM, SND_SEQ_PORT_SYSTEM_TIMER), (ev)->data.queue.queue = (q), (ev)->data.queue.param.time.time = *(rtime))
#define snd_seq_ev_set_queue_pos_tick(ev,q,ttime) ((ev)->type = SND_SEQ_EVENT_SETPOS_TICK, snd_seq_ev_set_dest(ev, SND_SEQ_CLIENT_SYSTEM, SND_SEQ_PORT_SYSTEM_TIMER), (ev)->data.queue.queue = (q), (ev)->data.queue.param.time.tick = (ttime))
#define snd_seq_start_queue(seq,q,ev) snd_seq_control_queue(seq, q, SND_SEQ_EVENT_START, 0, ev)
#define snd_seq_stop_queue(seq,q,ev) snd_seq_control_queue(seq, q, SND_SEQ_EVENT_STOP, 0, ev)
#define snd_seq_continue_queue(seq,q,ev) snd_seq_control_queue(seq, q, SND_SEQ_EVENT_CONTINUE, 0, ev)
#define snd_seq_change_queue_tempo(seq,q,tempo,ev) snd_seq_control_queue(seq, q, SND_SEQ_EVENT_TEMPO, tempo, ev)
#define snd_seq_ev_set_note(ev,ch,key,vel,dur) ((ev)->type = SND_SEQ_EVENT_NOTE, snd_seq_ev_set_fixed(ev), (ev)->data.note.channel = (ch), (ev)->data.note.note = (key), (ev)->data.note.velocity = (vel), (ev)->data.note.duration = (dur))
#define snd_seq_ev_set_noteon(ev,ch,key,vel) ((ev)->type = SND_SEQ_EVENT_NOTEON, snd_seq_ev_set_fixed(ev), (ev)->data.note.channel = (ch), (ev)->data.note.note = (key), (ev)->data.note.velocity = (vel))
#define snd_seq_ev_set_noteoff(ev,ch,key,vel) ((ev)->type = SND_SEQ_EVENT_NOTEOFF, snd_seq_ev_set_fixed(ev), (ev)->data.note.channel = (ch), (ev)->data.note.note = (key), (ev)->data.note.velocity = (vel))
#define snd_seq_ev_set_keypress(ev,ch,key,vel) ((ev)->type = SND_SEQ_EVENT_KEYPRESS, snd_seq_ev_set_fixed(ev), (ev)->data.note.channel = (ch), (ev)->data.note.note = (key), (ev)->data.note.velocity = (vel))
#define snd_seq_ev_set_controller(ev,ch,cc,val) ((ev)->type = SND_SEQ_EVENT_CONTROLLER, snd_seq_ev_set_fixed(ev), (ev)->data.control.channel = (ch), (ev)->data.control.param = (cc), (ev)->data.control.value = (val))
#define snd_seq_ev_set_pgmchange(ev,ch,val) ((ev)->type = SND_SEQ_EVENT_PGMCHANGE, snd_seq_ev_set_fixed(ev), (ev)->data.control.channel = (ch), (ev)->data.control.value = (val))
#define snd_seq_ev_set_pitchbend(ev,ch,val) ((ev)->type = SND_SEQ_EVENT_PITCHBEND, snd_seq_ev_set_fixed(ev), (ev)->data.control.channel = (ch), (ev)->data.control.value = (val))
#define snd_seq_ev_set_chanpress(ev,ch,val) ((ev)->type = SND_SEQ_EVENT_CHANPRESS, snd_seq_ev_set_fixed(ev), (ev)->data.control.channel = (ch), (ev)->data.control.value = (val))
#define snd_seq_ev_set_sysex(ev,datalen,dataptr) ((ev)->type = SND_SEQ_EVENT_SYSEX, snd_seq_ev_set_variable(ev, datalen, dataptr))
#ifdef __cplusplus
#endif
#endif
