
#ifndef PAINT_H
#define PAINT_H
#include"MyDataType.h"
#include"WriteOrRead.h"

void DrawPnt(CClientDC* dc, PNT_STRU point);//���Ƶ㺯������.

void ShowAl1Pnt(CClientDC *dc, CFile *pntTmpF,int pntNum); //��ʾ���е㺯������

void DrawSeg(CClientDC* dc, LIN_NDX_STRU line, POINT point1, POINT point2);// �����߶εĺ�������
//��ʾ�����ߵĺ�������
void ShowAllLin(CClientDC* dc, CFile* LinTmpNdxF, CFile* LinTmpDatF, int LinNum);

//��ʾ���е�(��)�ĺ�������
void ShowAllPnt (CClientDC * dc, CFile* PntTmpF, int PntNum, double zoomOffset_x, double zoomOffset_y, double zoom, char isDel);

//��ʾ������(��)�ĺ�������
void ShowAllLin(CClientDC* de, CFile*LinTmpNdxF, CFile* LinTmpDatF, int LInNum, double zoomOffset_x, double zoomOffset_y, double zoom, char isDel);

//��ʾ���ĺ�������
void ShowAllReg(CClientDC* dc, CFile* RegTmpNdxF, CFile* RegTmpDatF, int
	RegNum, double zoomOffset_x, double zoomOffset_y, double zoom, char isDel);

//������(����)�ĺ�������
void DrawReg(CClientDC* dc, REG_NDX_STRU Region, POINT* pt, long nPnt);













#endif