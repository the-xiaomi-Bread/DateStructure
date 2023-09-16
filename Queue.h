#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


typedef int Qdatetype;
typedef struct QueueNode
{
	struct QueueNode* next;
	Qdatetype date;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
}QE;


void InitQE(QE* pq);
QNode* QEBuy(Qdatetype x);
void QEDestroy(QE* pq);
bool QEEmpty(QE* pq);
void QEPuch(QE* pq, Qdatetype x);
void QEPop(QE* pq);
Qdatetype QEfront(QE* pq);
Qdatetype QEback(QE* pq);
int QESize(QE* pq);

