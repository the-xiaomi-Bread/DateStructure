#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPdatetype;
typedef struct Heap
{
	HPdatetype* a;
	int size;
	int capacity;
}HP;

void Adjustup(HPdatetype* a, int child);
void Adjustdown(HPdatetype* a, int n, int parent);  
void Swap(HPdatetype* a, HPdatetype* b);

void HPInit(HP* php);
void HPDestroy(HP* php);
//����
void HPPuch(HP* php, HPdatetype x);
//�п�
bool HPEmpty(HP* php);
//ɾ��
void HPPop(HP* php);
//�Ѷ�
HPdatetype HPTop(HP* php);
//����
int HPSize(HP* php);


