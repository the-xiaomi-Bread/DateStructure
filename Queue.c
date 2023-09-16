#define _CRT_SECURE_NO_WARNINGS 1

#include"Queue.h"

QNode* QEBuy(Qdatetype x)
{
	 QNode* newnode = (QNode*)malloc(sizeof(QNode));
	 if (newnode == NULL)
	 {
		 perror("malloc fail");
		 return NULL;
	 }
	 newnode->next = NULL;
	 newnode->date = x;
	 return newnode;
}

void InitQE(QE* pq)
{
	assert(pq);

	pq->phead = NULL;
	pq->ptail = NULL;
}

void QEDestroy(QE* pq)
{
	assert(pq);
	/*assert(!QEEmpty(pq));*/

	QNode* cur = pq->ptail;
	while (cur != NULL)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = NULL;
	pq->ptail = NULL;
}

bool QEEmpty(QE* pq)
{
	assert(pq);

	return pq->phead == NULL
		&& pq->ptail == NULL;
}

void QEPuch(QE* pq, Qdatetype x)
{
	assert(pq);

	QNode* newnode = QEBuy(x);
	if (pq->phead == NULL)
	{
		assert(!pq->ptail);
		
		pq->phead = newnode;
		pq->ptail = newnode;
		
	}
	else
	{
		QNode* cur = pq->ptail;
		pq->ptail = newnode;
		pq->ptail->next = cur;
	}
}

void QEPop(QE* pq)
{
	assert(pq);
	assert(!QEEmpty(pq));

	if (pq->phead == pq->ptail)
	{
		free(pq->phead);
		pq->phead = NULL;
		pq->ptail = NULL;
	}
	else
	{
		QNode* cur = pq->ptail;
		while (cur->next != pq->phead)
		{
			cur = cur->next;
		}
		free(pq->phead);
		pq->phead = cur;
		pq->phead->next = NULL;
	}
}

Qdatetype QEfront(QE* pq)
{
	assert(pq);
	assert(!QEEmpty(pq));

	return pq->phead->date;
}

Qdatetype QEback(QE* pq)
{
	assert(pq);
	assert(!QEEmpty(pq));

	return pq->ptail->date;
}

int QESize(QE* pq)
{
	assert(pq);

	QNode* cur = pq->ptail;
	int count = 0;
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	return count;
}
