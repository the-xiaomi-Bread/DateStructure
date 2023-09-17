#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"
#include<time.h>

headsort1()
{
	HP hp;
	HPInit(&hp);
	int arr[] = { 1,3,4,23,65,44,2,53,15,17,45 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		HPPuch(&hp, arr[i]);
	}


	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		arr[i] = HPTop(&hp);
		HPPop(&hp);
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
	HPDestroy(&hp);
}

headsort2()
{
	int arr[] = { 1,3,4,23,65,44,2,53,15,17,45 };
	//向上调整建堆
	/*for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		Adjustup(arr, i);
	}*/

	//向下调整建堆
	int n = sizeof(arr) / sizeof(int);
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		Adjustdown(arr, n, i);
	}

	//开始排序
	for (int i = sizeof(arr) / sizeof(int) - 1; i > 0; i--)
	{
		Swap(&arr[i], &arr[0]);
		Adjustdown(arr, i, 0);
	}
}


void TestTopK()
{
	srand((unsigned int)time(NULL)); 
	int n = 1000;
	const char* file = "date.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen fail");
		return;
	}
	for (size_t i = 0; i < n; i++)
	{
		int a = rand() % 10000;
		fprintf(fin, "%d\n", a);
	}
	fclose(fin);
}

void PrintTopK(int k)
{
	const char* file = "date.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	int* kminheap = (int*)malloc(sizeof(int) * k);
	if (kminheap == NULL)
	{
		perror("malloc fail");
		return;
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &kminheap[i]);
	}

	//前k个数，建小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		Adjustdown(kminheap, k, i);
	}

	int tmp = 0;
	while (!feof(fout))
	{
		fscanf(fout, "%d", &tmp);
		if (tmp > kminheap[0])
		{
			kminheap[0] = tmp;
			Adjustdown(kminheap, k, 0);
		}
	}
	fclose(fout);
	for (int i = 0; i < k; i++)
	{
		printf("%d ", kminheap[i]);
	}
	printf("\n");
}

int main()
{
	//堆排序
	//headsort1();
	


	//升序，建大堆；
	//降序，建小堆。
	/*headsort2();*/


	//top-k
	
	TestTopK();
	int k = 5;
	PrintTopK(k);

	return 0;
}