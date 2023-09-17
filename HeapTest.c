#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"


test()
{
	HP hp;
	HPInit(&hp);
	int arr[] = { 12, 23, 34, 14, 11, 25, 11, 24 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		HPPuch(&hp, arr[i]);
	}

	/*HPdatetype a = HPTop(&hp);
	printf("%d ", a);*/

	/*HPPop(&hp);
	HPPop(&hp);
	HPPop(&hp);
	HPPop(&hp);
	HPPop(&hp);*/


	HPDestroy(&hp);

}

//int main()
//{
//	test();
//	return 0;
//}
