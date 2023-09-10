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
//打印
void Print(SL* psl);
//检查容量平且增加
void SLCheckCap(SL* psl);
//增加
void SLPushback(SL* psl, SLDatetype x);
void SLPushfront(SL* psl, SLDatetype x);
void SLInsert(SL* psl, SLDatetype x, int n);
//删除
void SLPopback(SL* psl);
void SLPopfront(SL* psl);
void SLRemove(SL* psl, int n);
//查找
void SLFind(SL* psl, SLDatetype x);
//改数
void SLChange(SL* psl, SLDatetype x, SLDatetype y);//指定数据内的某个值全部更改
void SLChange1(SL* psl, SLDatetype x, int n);//将下表为n的数据更改