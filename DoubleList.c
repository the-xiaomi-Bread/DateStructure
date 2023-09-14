#define _CRT_SECURE_NO_WARNINGS 1

#include"DoubleList.h"

DLNode* DLIntial()
{
	DLNode* phead = DLBuy(-1);
	phead->prev = phead;
	phead->next = phead;
	return phead;
}
//void DLIntial(DLNode* phead)
//{
//	phead->next = phead;
//	phead->prev = phead;
//	phead->x = -1;
//
//}


void DLPrint(DLNode* phead)
{
	assert(phead);

	DLNode* cur = phead->next;
	printf("guard<==>");
	while (cur != phead)
	{
		printf("%d<==>", cur->x);
		cur = cur->next;
	}
	printf("\n");
}

void DLDestroy(DLNode* phead)
{
	assert(phead);
	
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		DLNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}

DLNode* DLBuy(DLDatetype x)
{
	DLNode* newnode = (DLNode*)malloc(sizeof(DLNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	else
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		newnode->x = x;
	}
	return newnode;
}

DLNode* DLFind(DLNode* phead, DLDatetype x)
{
	assert(phead);

	DLNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->x == x)
		{
			printf("找到了%d\n", x);
			return cur;
		}
		cur = cur->next;
	}
	printf("没有找到%d\n", x);
	return NULL;
}

void DLPushfront(DLNode* phead, DLDatetype x)
{
	assert(phead);

	/*DLNode* newnode = DLBuy(x);
	DLNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = next;
	next->prev = newnode;*/

	DLInsert(phead->next, x);
}

void DLPushback(DLNode* phead, DLDatetype x)
{
	assert(phead);

	DLInsert(phead, x);
}

void DLInsert(DLNode* pos, DLDatetype x)
{
	assert(pos);

	DLNode* newnode = DLBuy(x);
	DLNode* prev = pos->prev;

	prev->next = newnode;
	pos->prev = newnode;

	newnode->prev = prev;
	newnode->next = pos;
}

void DLErase(DLNode* pos)
{
	assert(pos);
	assert(!DLEmpty(pos));

	DLNode* prev = pos->prev;
	DLNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
}

void DLPopFront(DLNode* phead)
{
	assert(phead);
	assert(!DLEmpty(phead));
	DLErase(phead->next);
}

void DLPopBack(DLNode* phead)
{
	assert(phead);
	assert(!DLEmpty(phead));
	DLErase(phead->prev);
}

bool DLEmpty(DLNode* phead)
{
	assert(phead);
	return phead == phead->next;
}