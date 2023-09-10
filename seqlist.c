#define _CRT_SECURE_NO_WARNINGS 1

#include"seqlist.h"

void SLInit(SL* psl)
{
	assert(psl);
	psl->a = (SLDatetype*)malloc(sizeof(SLDatetype) * 4);
	if (psl->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	psl->size = 0;
	psl->capacity = 4;
}

void Destory(SL* psl)
{
	assert(psl);
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

void Print(SL* psl)
{
	assert(psl);
	for(int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void SLCheckCap(SL* psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		SLDatetype* psl1 = (SLDatetype*)realloc(psl->a, sizeof(SLDatetype) * (psl->capacity * 2));
		if (psl1 == NULL)
		{
			perror("realloc fail");
			return;
		}
		psl->a = psl1;
		psl1 = NULL;
		psl->capacity *= 2;
	}
}

void SLPushback(SL* psl, SLDatetype x)
{
	assert(psl);
	/*SLCheckCap(psl);
	psl->a[psl->size] = x;
	psl->size++;*/
	SLInsert(psl, x, psl->size);
}

void SLPushfront(SL* psl, SLDatetype x)
{
	assert(psl);
	/*SLCheckCap(psl);
	memmove((psl->a) + 1, psl->a, sizeof(SLDatetype) * psl->size);
	psl->a[0] = x;
	psl->size++;*/
	SLInsert(psl, x, 0);
}

void SLInsert(SL* psl, SLDatetype x, int n)
{
	assert(psl);
	assert(n >= 0 && n <= psl->size);
	SLCheckCap(psl);
	
    memmove((psl->a) + n + 1, (psl->a) + n, sizeof(SLDatetype) * (psl->size - n));
	psl->a[n] = x;
	psl->size++;
}

void SLPopback(SL* psl)
{
	assert(psl);
	//assert(psl->size > 0);
	///*if (psl->size == 0)
	//{
	//	printf("已经没有数据\n");
	//	return;
	//}*/
	//psl->size--;
	SLRemove(psl, psl->size - 1);
}

void SLPopfront(SL* psl)
{
	assert(psl);
	//if (psl->size == 0)
	//{
	//	printf("已经没有数据\n");
	//	return;
	//}
	//memmove(psl->a, (psl->a) + 1, sizeof(SLDatetype)* (psl->size - 1));
	//psl->size--;
	SLRemove(psl, 0);
}

void SLRemove(SL* psl, int n)
{
	assert(psl);
	assert(psl->size > 0);//判断是否有数据
	assert(n >= 0 && n < psl->size);
	memmove(psl->a + n, psl->a + n + 1, sizeof(SLDatetype) * (psl->size - n - 1));
	
	psl->size--;
}

void SLFind(SL* psl, SLDatetype x)
{
	assert(psl);
	assert(psl->size > 0);
	int count = 0;
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			printf("找到了%d，第%d个数\n", x, i + 1);
			count++;
		}
	}
	if (count == 0)
	{
		printf("没有找到\n");
	}
}

void SLChange(SL* psl, SLDatetype x, SLDatetype y)
{
	assert(psl);
	int count = 0;
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			psl->a[i] = y;
			count++;
		}
	}
	if (count == 0)
	{
		printf("修改失败，数据中没有此数据\n");
	}
}

void SLChange1(SL* psl, SLDatetype x, int n)
{
	assert(psl);
	/*assert(psl->size > 0);*/
	assert(n >= 0 && n <= psl->size);
	psl->a[n] = x;
}
