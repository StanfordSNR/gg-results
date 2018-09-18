// GGHASH:VqZZzUw.099BjtKywO.is23nhHrnS43zDEHiPMqKSx8I0000173d
#ifndef _X11_XREGION_H_
#define _X11_XREGION_H_ 
#define TRUE 1
#define FALSE 0
#define MAXSHORT 32767
#define MINSHORT -MAXSHORT
#ifndef MAX
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#endif
#ifndef MIN
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#endif
#define EXTENTCHECK(r1,r2) ((r1)->x2 > (r2)->x1 && (r1)->x1 < (r2)->x2 && (r1)->y2 > (r2)->y1 && (r1)->y1 < (r2)->y2)
#define EXTENTS(r,idRect) { if((r)->x1 < (idRect)->extents.x1) (idRect)->extents.x1 = (r)->x1; if((r)->y1 < (idRect)->extents.y1) (idRect)->extents.y1 = (r)->y1; if((r)->x2 > (idRect)->extents.x2) (idRect)->extents.x2 = (r)->x2; if((r)->y2 > (idRect)->extents.y2) (idRect)->extents.y2 = (r)->y2; }
#define MEMCHECK(reg,rect,firstrect) { if ((reg)->numRects >= ((reg)->size - 1)){ BoxPtr tmpRect = Xrealloc ((firstrect), (2 * (sizeof(BOX)) * ((reg)->size))); if (tmpRect == NULL) return(0); (firstrect) = tmpRect; (reg)->size *= 2; (rect) = &(firstrect)[(reg)->numRects]; } }
#define CHECK_PREVIOUS(Reg,R,Rx1,Ry1,Rx2,Ry2) (!(((Reg)->numRects > 0)&& ((R-1)->y1 == (Ry1)) && ((R-1)->y2 == (Ry2)) && ((R-1)->x1 <= (Rx1)) && ((R-1)->x2 >= (Rx2))))
#define ADDRECT(reg,r,rx1,ry1,rx2,ry2) { if (((rx1) < (rx2)) && ((ry1) < (ry2)) && CHECK_PREVIOUS((reg), (r), (rx1), (ry1), (rx2), (ry2))){ (r)->x1 = (rx1); (r)->y1 = (ry1); (r)->x2 = (rx2); (r)->y2 = (ry2); EXTENTS((r), (reg)); (reg)->numRects++; (r)++; } }
#define ADDRECTNOX(reg,r,rx1,ry1,rx2,ry2) { if ((rx1 < rx2) && (ry1 < ry2) && CHECK_PREVIOUS((reg), (r), (rx1), (ry1), (rx2), (ry2))){ (r)->x1 = (rx1); (r)->y1 = (ry1); (r)->x2 = (rx2); (r)->y2 = (ry2); (reg)->numRects++; (r)++; } }
#define EMPTY_REGION(pReg) pReg->numRects = 0
#define REGION_NOT_EMPTY(pReg) pReg->numRects
#define INBOX(r,x,y) ( ( ((r).x2 > x)) && ( ((r).x1 <= x)) && ( ((r).y2 > y)) && ( ((r).y1 <= y)) )
#define NUMPTSTOBUFFER 200
#endif
