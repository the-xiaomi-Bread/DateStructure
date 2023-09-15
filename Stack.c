#define _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"

void STInit(ST* pst)
{
	assert(pst);

	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}

bool STEmpty(ST* pst)
{
	assert(pst);

	return pst->top == 0;
}

void STPuch(ST* pst, STDatetype x)
{
	assert(pst);

	if (pst->top == pst->capacity)
	{
		if (pst->capacity == 0)
		{
			STDatetype* newpst = (STDatetype*)malloc(sizeof(STDatetype) * 4);
			if (newpst == NULL)
			{
				perror("malloc fail");
				return;
			}
			pst->a = newpst;
		}
		else
		{
			STDatetype* newpst = (STDatetype*)realloc(pst, sizeof(STDatetype) * (pst->capacity) * 2);
			if (newpst == NULL)
			{
				perror("realloc fail");
				return;
			}
			pst->a = newpst;
		}
	}

	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst)
{
	assert(pst);
	assert(!STEmpty(pst));

	if (pst->top == 1)
	{
		pst->a = NULL;
		pst->top = 0;
	}

	pst->top--;
}

int STTop(ST* pst)
{
	assert(pst);
	assert(!STEmpty(pst));

	return pst->a[pst->top - 1];
}

int STSize(ST* pst)
{
	assert(pst);

	return pst->top;
}

void STDestory(ST* pst)
{
	assert(pst);

	free(pst->a);
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}