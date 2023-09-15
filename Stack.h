#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDatetype;
typedef struct Stack
{
	STDatetype* a;
	int top;
	int capacity;
}ST;

//initialize-初始化
void STInit(ST* pst);
//判空
bool STEmpty(ST* pst);
//入栈
void STPuch(ST* pst, STDatetype x);
//出栈
void STPop(ST* pst);
//返回栈顶
int STTop(ST* pst);
//返回元素个数
int STSize(ST* pst);
//销毁空间
void STDestory(ST* pst);