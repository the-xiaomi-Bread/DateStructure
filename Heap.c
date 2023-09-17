#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

void HPInit(HP* php)
{
	assert(php);

	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

void HPDestroy(HP* php)
{
	assert(php);

	free(php->a);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

void Adjustup(HPdatetype* a, int child)
{
	assert(a);

	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
		}
		else
		{
			return;
		}
	}

}

void Adjustdown(HPdatetype* a, int n, int parent)
{
	assert(a);

	int child = (parent * 2) + 1;
	while (child < n)
	{
		if (child < n - 1 && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[child] < a[parent])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = (parent * 2) + 1;
		}
		else
		{
			return;
		}
	}
	
}

void Swap(HPdatetype* a, HPdatetype* b)
{
	HPdatetype tmp = *a;
	*a = *b;
	*b = tmp;
}

void HPPuch(HP* php, HPdatetype x)
{
	assert(php);

	if (php->size == php->capacity)
	{
		php->capacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPdatetype* space = (HPdatetype*)realloc(php->a, sizeof(HPdatetype) * php->capacity);
		if (space == NULL)
		{
			perror("malloc fail");
			return;
		}
		php->a = space;
	}

	php->a[php->size] = x;

	Adjustup(php->a, php->size);

	php->size++;
}

bool HPEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}

void HPPop(HP* php)
{
	assert(php);
	assert(!HPEmpty(php));

	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	Adjustdown(php->a, php->size, 0);
}

HPdatetype HPTop(HP* php)
{
	assert(php);

	return php->a[0];
}

int HPSize(HP* php)
{
	assert(php);

	return php->size;
}

