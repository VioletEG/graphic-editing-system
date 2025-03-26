#ifndef WRITEORREAD H
#define WRITEORREAD H
#include"MyDatatype.h"
//��������д����ʱ�ļ��ĺ�������
void WritePntToFile( CFile*PntTmpF, int i, PNT_STRU point);

void ReadTempFileToPnt(CFile*PntTmpF, int i, PNT_STRU&point);

//�������ļ�������ʱ�ļ�
void ReadPntPermanentFileToTemp(CFile* pntF, CFile* pntTmpF, int& nPnt, int& nLPnt);

//�޸���ʱ�ļ��е����ݵĺ�������
void UpdatePnt(CFile* pntTmpF, int i, PNT_STRU pnt);

//��������д������ʱ�����ļ��ĺ�������
void WriteLinNdxToFile(CFile* linTmpNdxF, int i, LIN_NDX_STRU line);

//���߽ڵ�����д������ʱ�����ļ��ĺ�������
void WriteLinDatToFile(CFile* linTmpDatF, long datoff, int i, D_DOT point);

//����ʱ�������ļ��ж�ȡ�ߵĵ����ݵĺ�������
void ReadTempFileToLinDat(CFile* LinTmpDatF, long datoff, int i, D_DOT &pnt);





//����ʱ�������ļ��ж�ȡ�������ĺ�������
void ReadTempFileToLinNdx(CFile* LinTmpNdxF, int i, LIN_NDX_STRU& LinNdx);







//���ߵ������͵�����д�������ļ��ĺ�������
void WriteTempToLinPermanentFile(CFile* LinE, CFile* LinTmpDatE, CFile* LinTmpNdxF, VERSION LinVer, int nLin, int nLLin);


void WriteTempToRegPermanentFile(CFile* RegF, CFile* RegTmpDatF, CFile* RegTmpNdxF, VERSION RegVer, int nReg, int nLReg);




//�������ļ���ȡ�����ݵ���ʱ�ļ��ĺ�������
void ReadLinPermanentFileToTemp(CFile* LinF, CFile* LinTmpDatF, CFile* LinTmpNdxF, VERSION& LinVer, int& nLin, int& nLlin, long& TmpFLinDatOffset);



void ReadRegPermanentFileToTemp(CFile* RegF, CFile* RegTmpDatF, CFile* RegTmpNdxF, VERSION& RegVer, int& nReg, int& nLReg, long& TmpFRegDatOffset);




//���������ݵĺ�������
void UpdateLin(CFile* LinTmpNdxF, int nLin, LIN_NDX_STRU line);

//�����ߵĵ����ݵ���ʱ�ļ��ĺ�������
void UpdateLin(CFile* LinTmpNdxF, CFile*LinTmpDatF, int LinNdx, double offset_x, double offset_y);

//�޸ĵ�һ���������ĺ�������
void AlterStartLin(CFile* LinTmpNdxF, long subdatoff, int nLine, int subNum);
//�޸ĵڶ����������ĺ�������
void AlterEndLin(CFile* LinTmpNdxF, int nLine);

void WriteRegNdxToFile(CFile* RegTmpNdxF, int i, REG_NDX_STRU Region);

void WriteRegDatToFile(CFile* RegTmpDatF, long datOff, int i, D_DOT point);



void ReadTempFileToRegNdx(CFile* RegTmpNdxF, int i, REG_NDX_STRU& RegNdx);

void ReadTempFileToRegDat(CFile* RegTmpDatF, long datOff, int i, D_DOT& Pnt);

//��ʱ�����ļ����������ݵĺ�������
void UpdateReg(CFile* RegTmpNdxF, int nReg, REG_NDX_STRU Region);

//�������ĺ�������
void UpdateReg(CFile* RegTmpNdxF, CFile* RegTmpDatF, int RegNdx, double offset_x, double offset_y);



#endif
