#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDatetype;
typedef struct SLTNode
{
	SLTDatetype a;
	struct SLTNode* next;
}SLTNode;
//��ӡ
void Print(SLTNode* phead);
//����
void SLTPuchfront(SLTNode** pphead, SLTDatetype x);
void SLTPuchBack(SLTNode** pphead, SLTDatetype x);
//ǰ��
void SLTInsertPrevious(SLTNode** pphead, SLTNode* pow, SLTDatetype x);
//���
void SLTInsertAfter(SLTNode** pphead, SLTNode* pow, SLTDatetype x);
//ɾ��
void SLTPopfront(SLTNode** pphead);
void SLTPopBack(SLTNode** pphead);
//ɾ��ָ����
void SLTErase(SLTNode** pphead, SLTNode* pow);
//ǰɾ
void SLTErasePrevious(SLTNode** pphead, SLTNode* pow);
// ��ɾ
void SLTEraseAfter(SLTNode* pow);
//����
SLTNode* SLTFind(SLTNode* phead, SLTDatetype x);
//��ֵ
void SLTChagne(SLTNode* pow, SLTDatetype x);
//�ͷſռ�
void Destory(SLTNode** pphead);
