// GGHASH:VIwhdFCCG3vkI973XHIRTiyk81gQ54VgG76HvWfznCKM000020da
#ifndef _ICEMSG_H_
#define _ICEMSG_H_ 
#include <X11/Xfuncproto.h>
#include <X11/ICE/ICEconn.h>
#define IceValidIO(_iceConn) _iceConn->io_ok
#define IceGetHeader(_iceConn,_major,_minor,_headerSize,_msgType,_pMsg) if ((_iceConn->outbufptr + _headerSize) > _iceConn->outbufmax) IceFlush (_iceConn); _pMsg = (_msgType *) _iceConn->outbufptr; _pMsg->majorOpcode = _major; _pMsg->minorOpcode = _minor; _pMsg->length = (_headerSize - SIZEOF (iceMsg)) >> 3; _iceConn->outbufptr += _headerSize; _iceConn->send_sequence++
#define IceGetHeaderExtra(_iceConn,_major,_minor,_headerSize,_extra,_msgType,_pMsg,_pData) if ((_iceConn->outbufptr + _headerSize + ((_extra) << 3)) > _iceConn->outbufmax) IceFlush (_iceConn); _pMsg = (_msgType *) _iceConn->outbufptr; if ((_iceConn->outbufptr + _headerSize + ((_extra) << 3)) <= _iceConn->outbufmax) _pData = (char *) _pMsg + _headerSize; else _pData = NULL; _pMsg->majorOpcode = _major; _pMsg->minorOpcode = _minor; _pMsg->length = ((_headerSize - SIZEOF (iceMsg)) >> 3) + (_extra); _iceConn->outbufptr += (_headerSize + ((_extra) << 3)); _iceConn->send_sequence++
#define IceSimpleMessage(_iceConn,_major,_minor) { iceMsg *_pMsg; IceGetHeader (_iceConn, _major, _minor, SIZEOF (iceMsg), iceMsg, _pMsg); }
#define IceErrorHeader(_iceConn,_offendingMajorOpcode,_offendingMinorOpcode,_offendingSequenceNum,_severity,_errorClass,_dataLength) { iceErrorMsg *_pMsg; IceGetHeader (_iceConn, _offendingMajorOpcode, ICE_Error, SIZEOF (iceErrorMsg), iceErrorMsg, _pMsg); _pMsg->length += (_dataLength); _pMsg->offendingMinorOpcode = (CARD8) _offendingMinorOpcode; _pMsg->severity = (CARD8) _severity; _pMsg->offendingSequenceNum = (CARD32) _offendingSequenceNum; _pMsg->errorClass = (CARD16) _errorClass; }
#define IceWriteData(_iceConn,_bytes,_data) { if ((_iceConn->outbufptr + (_bytes)) > _iceConn->outbufmax) { IceFlush (_iceConn); _IceWrite (_iceConn, (unsigned long) (_bytes), _data); } else { memcpy (_iceConn->outbufptr, _data, _bytes); _iceConn->outbufptr += (_bytes); } }
#define IceWriteData16(_iceConn,_bytes,_data) IceWriteData (_iceConn, _bytes, (char *) _data)
#define IceWriteData32(_iceConn,_bytes,_data) IceWriteData (_iceConn, _bytes, (char *) _data)
#define IceSendData(_iceConn,_bytes,_data) { if (_iceConn->outbufptr > _iceConn->outbuf) IceFlush (_iceConn); _IceWrite (_iceConn, (unsigned long) (_bytes), _data); }
#define IceWritePad(_iceConn,_bytes) { if ((_iceConn->outbufptr + (_bytes)) > _iceConn->outbufmax) { char _dummy[7] = { 0 }; IceFlush (_iceConn); _IceWrite (_iceConn, (unsigned long) (_bytes), _dummy); } else { _iceConn->outbufptr += (_bytes); } }
#define IceReadCompleteMessage(_iceConn,_headerSize,_msgType,_pMsg,_pData) { unsigned long _bytes; IceReadMessageHeader (_iceConn, _headerSize, _msgType, _pMsg); _bytes = (_pMsg->length << 3) - (_headerSize - SIZEOF (iceMsg)); if ((_iceConn->inbufmax - _iceConn->inbufptr) >= _bytes) { _IceRead (_iceConn, _bytes, _iceConn->inbufptr); _pData = _iceConn->inbufptr; _iceConn->inbufptr += _bytes; } else { _pData = malloc (_bytes); if (_pData) _IceRead (_iceConn, _bytes, _pData); else _IceReadSkip (_iceConn, _bytes); } }
#define IceDisposeCompleteMessage(_iceConn,_pData) if ((char *) _pData < _iceConn->inbuf || (char *) _pData >= _iceConn->inbufmax) free (_pData);
#define IceReadSimpleMessage(_iceConn,_msgType,_pMsg) _pMsg = (_msgType *) (_iceConn->inbuf);
#define IceReadMessageHeader(_iceConn,_headerSize,_msgType,_pMsg) { _IceRead (_iceConn, (unsigned long) (_headerSize - SIZEOF (iceMsg)), _iceConn->inbufptr); _pMsg = (_msgType *) (_iceConn->inbuf); _iceConn->inbufptr += (_headerSize - SIZEOF (iceMsg)); }
#define IceReadData(_iceConn,_bytes,_pData) _IceRead (_iceConn, (unsigned long) (_bytes), (char *) _pData);
#define IceReadData16(_iceConn,_swap,_bytes,_pData) { _IceRead (_iceConn, (unsigned long) (_bytes), (char *) _pData); }
#define IceReadData32(_iceConn,_swap,_bytes,_pData) { _IceRead (_iceConn, (unsigned long) (_bytes), (char *) _pData); }
#define IceReadPad(_iceConn,_bytes) { char _dummy[7]; _IceRead (_iceConn, (unsigned long) (_bytes), _dummy); }
#endif
