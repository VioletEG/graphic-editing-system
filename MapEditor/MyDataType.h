#include <wtypes.h>
#ifndef MYDATATYPE_H
#define MYDATATYPE_H
typedef struct {
	double x;//��λ����x
	double y;//��λ����y
	COLORREF color;//����ɫ
	int pattern;//��ͼ����
	char isDel;//�Ƿ�ɾ��
}PNT_STRU;
typedef struct {
	char flag[3];//��־��
	int version;//10,�����Ϊ1.0�汾
}VERSION;
typedef struct{
	char isDel; // �Ƿ�ɾ��
	COLORREF color; // ����ɫ
	int pattern; // ����(��)
	long dotNum;//�߽ڵ���
	long datOff;// �߽ڵ��������ݴ洢λ��
}LIN_NDX_STRU;
typedef struct {

	double x; // �ڵ� x����
	double y; //�ڵ� y����


}D_DOT;


typedef struct {
	char isDel; //�Ƿ�ɾ��
	COLORREF color; //�� ��ɫ
	int pattern; //ͼ��(��)
	long dotNum; //�߽�ڵ���
	long datOff; //�߽�ڵ����ݴ洢λ��
}REG_NDX_STRU;


#endif
