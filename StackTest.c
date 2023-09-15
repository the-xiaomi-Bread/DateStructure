#define _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"

test1()
{
	ST st;
	STInit(&st);

	STPuch(&st, 1);
	STPuch(&st, 2);
	printf("%d ", STTop(&st));
	STPop(&st);

	int size = STSize(&st);
	printf("%d\n", size);

	STPuch(&st, 3);
	STPuch(&st, 4);

	int size1 = STSize(&st);
	printf("%d\n", size1);

	while ((&st)->a != NULL)
	{
		printf("%d ", STTop(&st));
		STPop(&st);
	}

	STDestory(&st);
}

int main()
{
	test1();
	return 0;
}



