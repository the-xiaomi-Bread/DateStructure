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

//初始化
DLNode* DLIntial();
//void DLIntial(phead);
//打印
void DLPrint(DLNode* phead);
//销毁空间
void DLDestroy(DLNode* phead);
//建立一个新节点
DLNode* DLBuy(DLDatetype x);
//查找
DLNode* DLFind(DLNode* phead, DLDatetype x);
//前插
void DLInsert(DLNode* pos, DLDatetype x);
//头插
void DLPushfront(DLNode* phead, DLDatetype x);
//尾插
void DLPushback(DLNode*phead, DLDatetype x);
//删除
void DLErase(DLNode* pos);
//头删
void DLPopFront(DLNode* phead);
//尾删
void DLPopBack(DLNode* phead);
//判空
bool DLEmpty(DLNode* phead);