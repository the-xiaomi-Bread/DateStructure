#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DLDatetype;
typedef struct DLNode
{
	struct DLNode* prev;
	struct DLNode* next;
	DLDatetype x;
}DLNode;

//��ʼ��
DLNode* DLIntial();
//void DLIntial(phead);
//��ӡ
void DLPrint(DLNode* phead);
//���ٿռ�
void DLDestroy(DLNode* phead);
//����һ���½ڵ�
DLNode* DLBuy(DLDatetype x);
//����
DLNode* DLFind(DLNode* phead, DLDatetype x);
//ǰ��
void DLInsert(DLNode* pos, DLDatetype x);
//ͷ��
void DLPushfront(DLNode* phead, DLDatetype x);
//β��
void DLPushback(DLNode*phead, DLDatetype x);
//ɾ��
void DLErase(DLNode* pos);
//ͷɾ
void DLPopFront(DLNode* phead);
//βɾ
void DLPopBack(DLNode* phead);
//�п�
bool DLEmpty(DLNode* phead);