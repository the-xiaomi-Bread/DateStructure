#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDatetype;
typedef struct SeqList
{
	SLDatetype* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* psl);
void Destory(SL* psl);
//��ӡ
void Print(SL* psl);
//�������ƽ������
void SLCheckCap(SL* psl);
//����
void SLPushback(SL* psl, SLDatetype x);
void SLPushfront(SL* psl, SLDatetype x);
void SLInsert(SL* psl, SLDatetype x, int n);
//ɾ��
void SLPopback(SL* psl);
void SLPopfront(SL* psl);
void SLRemove(SL* psl, int n);
//����
void SLFind(SL* psl, SLDatetype x);
//����
void SLChange(SL* psl, SLDatetype x, SLDatetype y);//ָ�������ڵ�ĳ��ֵȫ������
void SLChange1(SL* psl, SLDatetype x, int n);//���±�Ϊn�����ݸ���