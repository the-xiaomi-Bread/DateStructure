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
//打印
void Print(SLTNode* phead);
//增加
void SLTPuchfront(SLTNode** pphead, SLTDatetype x);
void SLTPuchBack(SLTNode** pphead, SLTDatetype x);
//前插
void SLTInsertPrevious(SLTNode** pphead, SLTNode* pow, SLTDatetype x);
//后插
void SLTInsertAfter(SLTNode** pphead, SLTNode* pow, SLTDatetype x);
//删除
void SLTPopfront(SLTNode** pphead);
void SLTPopBack(SLTNode** pphead);
//删除指定项
void SLTErase(SLTNode** pphead, SLTNode* pow);
//前删
void SLTErasePrevious(SLTNode** pphead, SLTNode* pow);
// 后删
void SLTEraseAfter(SLTNode* pow);
//查找
SLTNode* SLTFind(SLTNode* phead, SLTDatetype x);
//该值
void SLTChagne(SLTNode* pow, SLTDatetype x);
//释放空间
void Destory(SLTNode** pphead);
