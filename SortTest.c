#define _CRT_SECURE_NO_WARNINGS 1

#include"Sort.h"

Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

InsertSortTest()
{
	int a[] = { 2, 5, 3, 6, 7, 2, 1, 8, 6, 9 };
	Print(a, sizeof(a) / sizeof(int));
	InsertSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

ShellSortTest()
{
	int a[] = { 2, 5, 3, 6, 7, 2, 1, 8, 6, 9 };
	Print(a, sizeof(a) / sizeof(int));
	ShellSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

SelectSortTest()
{
	int a[] = { 9, 8, 3, 6, 7, 2, 1, 6, 6, 7 };
	Print(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	Print(a, sizeof(a) / sizeof(int));
}

void test()
{
	srand((unsigned int)time(NULL));
	int n = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * n);
	if (a1 == NULL)
	{
		perror("malloc fail");
		return;
	}
	int* a2 = (int*)malloc(sizeof(int) * n);
	if (a2 == NULL)
	{
		perror("malloc fail");
		return;
	}
	int* a3 = (int*)malloc(sizeof(int) * n);
	if (a3 == NULL)
	{
		perror("malloc fail");
		return;
	}
	int* a4 = (int*)malloc(sizeof(int) * n);
	if (a4 == NULL)
	{
		perror("malloc fail");
		return;
	}
	int* a5 = (int*)malloc(sizeof(int) * n);
	if (a5 == NULL)
	{
		perror("malloc fail");
		return;
	}
	int* a6 = (int*)malloc(sizeof(int) * n);
	if (a6 == NULL)
	{
		perror("malloc fail");
		return;
	}
	int* a7 = (int*)malloc(sizeof(int) * n);
	if (a7 == NULL)
	{
		perror("malloc fail");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];
	}

	int begin1 = clock();
	InsertSort(a1, n);
	int end1 = clock();
	printf("InsertSort:>%d\n", end1 - begin1);

	int begin2 = clock();
	ShellSort(a2, n);
	int end2 = clock();
	printf("ShellSort:>%d\n", end2 - begin2);

	int begin3 = clock();
	SelectSort(a2, n);
	int end3 = clock();
	printf("SelectSort:>%d\n", end3 - begin3);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);
}


int main()
{
	/*InsertSortTest();*/
	/*ShellSortTest();*/
	/*SelectSortTest();*/

	test();

	return 0;
}