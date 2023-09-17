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
//²åÈë
void HPPuch(HP* php, HPdatetype x);
//ÅÐ¿Õ
bool HPEmpty(HP* php);
//É¾³ý
void HPPop(HP* php);
//¶Ñ¶¥
HPdatetype HPTop(HP* php);
//¸öÊý
int HPSize(HP* php);


