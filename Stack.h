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

//initialize-��ʼ��
void STInit(ST* pst);
//�п�
bool STEmpty(ST* pst);
//��ջ
void STPuch(ST* pst, STDatetype x);
//��ջ
void STPop(ST* pst);
//����ջ��
int STTop(ST* pst);
//����Ԫ�ظ���
int STSize(ST* pst);
//���ٿռ�
void STDestory(ST* pst);