#define _CRT_SECURE_NO_WARNINGS 1

#include"SingelList.h"

void Print(SLTNode* phead)
{
	/*assert(phead);*/
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->a);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLTNode* BuySTLNode(SLTDatetype x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->a = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPuchfront(SLTNode** pphead, SLTDatetype x)
{
	/*assert(pphead);*/
	//SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	//if (newnode == NULL)
	//{
	//	perror("malloc fail");
	//	return;
	//}
	//newnode->a = x;
	//newnode->next = NULL;
	SLTNode* newnode = BuySTLNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPuchBack(SLTNode** pphead, SLTDatetype x)
{
	/*SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perroe("mallod fail");
		return;
	}
	newnode->a = x;
	newnode->next = NULL;*/
	SLTNode* newnode = BuySTLNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
		newnode = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		while ((tail)->next != NULL)
		{
			tail = (tail)->next;
		}
		(tail)->next = newnode;
		newnode = NULL;
	}

}

void SLTInsertPrevious(SLTNode** pphead, SLTNode* pow, SLTDatetype x)
{
	assert(pphead);
	assert(*pphead);
	assert(pow);

	SLTNode* newnode = BuySTLNode(x);
	SLTNode* cur = *pphead;
	if (pow->next == NULL)
	{
		*pphead = newnode;
		newnode->next = cur;
	}
	else
	{
		while (cur->next != pow)
		{
			cur = cur->next;
		}
		newnode->next = cur->next;
		cur->next = newnode;
	}
}

void SLTInsertAfter(SLTNode** pphead, SLTNode* pow, SLTDatetype x)
{
	assert(pphead);
	assert(*pphead);
	assert(pow);

	SLTNode* newnode = BuySTLNode(x);

	if (pow->next == NULL)
	{
		pow->next = newnode;
		newnode->next = NULL;
	}
	else
	{
		/*SLTNode* cur = pow->next;*/
		newnode->next = pow->next;
		pow->next = newnode;
	}
}

void SLTPopfront(SLTNode** pphead)
{
	assert(*pphead);

	//if ((*pphead)->next == NULL)
	//{
	//	free(*pphead);
	//	*pphead = NULL;
	//}
	//else
	//{
	//	SLTNode* cur = *pphead;
	//	*pphead = cur->next;
	//	free(cur);
	//	cur = NULL;
	//}

	SLTNode* cur = *pphead;
	*pphead = cur->next;
	free(cur);
}

void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);
	//一个节点，多个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		(*pphead) = NULL;
	}
	else
	{
		SLTNode* pre = *pphead;
		while (pre->next->next != NULL)
		{
			pre = pre->next;
		}
		free(pre->next);
		pre->next = NULL;
	}
}

void SLTErase(SLTNode** pphead, SLTNode* pow)
{
	assert(pphead);
	assert(*pphead);
	assert(pow);

	if ((*pphead) == pow)
	{
		*pphead = (*pphead)->next;
		free(pow);
		pow = NULL;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next != pow)
		{
			cur = cur->next;
		}
		if (pow->next == NULL)
		{
			free(pow);
			cur->next = NULL;
		}
		else
		{
			cur->next = pow->next;
			free(pow);
		}
	}
}

void SLTErasePrevious(SLTNode** pphead, SLTNode* pow)
{
	assert(pphead);
	assert(*pphead);
	assert(pow);

	if ((*pphead) == pow)
	{
		printf("前面没有任何的数据\n");
		return;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next->next != pow)
		{
			cur = cur->next;
		}
		SLTNode* cur1 = cur->next;
		cur->next = pow;
		free(cur1);
		cur1 = NULL;
	}
}

void SLTEraseAfter(SLTNode* pow)
{
	if (pow->next == NULL)
	{
		printf("后面没有任何数据");
		return;
	}
	else
	{
		SLTNode* cur = pow->next;
		pow->next = pow->next->next;
		free(cur);
		cur = NULL;
	}
}

SLTNode* SLTFind(SLTNode* phead, SLTDatetype x)
{
	while (phead)
	{
		if (phead->a == x)
		{
			return phead;
		}
		else
		{
			phead = phead->next;
		}
		
	}
	return NULL;
}

void SLTChagne(SLTNode* pow, SLTDatetype x)
{
	assert(pow);

	pow->a = x;
}

void Destory(SLTNode** pphead)
{
	assert(pphead);

	while (*pphead != NULL)
	{
		SLTNode* cur = *pphead;
		*pphead = (*pphead)->next;
		free(cur);
	}
}