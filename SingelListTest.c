#define _CRT_SECURE_NO_WARNINGS 1

#include"SingelList.h"

void test1()
{
	SLTNode* slist = NULL;

	SLTPuchfront(&slist, 1);
	SLTPuchfront(&slist, 2);
	SLTPuchfront(&slist, 3);
	SLTPuchfront(&slist, 4);

	Print(slist);
	SLTPopfront(&slist);
	Print(slist);
	SLTPopfront(&slist);
	Print(slist);
	SLTPopfront(&slist);
	Print(slist);
	SLTPopfront(&slist);
	Print(slist);
}

void test2()
{
	SLTNode* slist = NULL;
	SLTPuchBack(&slist, 1);
	SLTPuchBack(&slist, 2);
	SLTPuchBack(&slist, 3);
	SLTPuchBack(&slist, 4);
	Print(slist);

	//SLTPuchfront(&slist, 1);
	//SLTPuchfront(&slist, 2);
	//SLTPuchfront(&slist, 3);
	//SLTPuchfront(&slist, 4);
	//Print(slist);

	SLTPopfront(&slist);
	SLTPopfront(&slist);
	SLTPopfront(&slist);
	Print(slist);

	SLTPopBack(&slist);
	SLTPopBack(&slist);
	SLTPopBack(&slist);
	Print(slist);

	Print(slist);
}

void test3()
{
	SLTNode* slist = NULL;
	SLTPuchBack(&slist, 1);
	SLTPuchBack(&slist, 2);
	SLTPuchBack(&slist, 3);
	SLTPuchBack(&slist, 4);
	Print(slist);

	SLTPuchfront(&slist, 1);
	SLTPuchfront(&slist, 2);
	SLTPuchfront(&slist, 3);
	SLTPuchfront(&slist, 5);
	Print(slist);

	SLTNode* pow = SLTFind(slist, 1);
	if (pow == NULL)
	{
		printf("没有此数据\n");
	}
	else
	{
		printf("找到%d数据\n", pow->a);
	}

	SLTNode* pow1 = SLTFind(slist, 4);
	if (pow1 == NULL)
	{
		printf("没有此数据\n");
	}
	else
	{
		printf("找到%d数据\n", pow1->a);
	}

	SLTNode* pow2 = SLTFind(slist, 5);
	if (pow2 == NULL)
	{
		printf("没有此数据\n");
	}
	else
	{
		printf("找到%d数据\n", pow2->a);
	}

	/*SLTNode* pow1 = SLTFind(slist, 10);
	if (pow1 == NULL)
	{
		printf("没有此数据\n");
	}
	else
	{
		printf("找到%d数据\n", pow1->a);
	}*/

	Print(slist);
	SLTInsertPrevious(&slist, pow, 20);
	Print(slist);
	SLTInsertAfter(&slist, pow1, 30);
	Print(slist);

	SLTChagne(pow, 88);
	SLTChagne(pow1, 88);
	SLTChagne(pow2, 88);
	Print(slist);

	//SLTErasePrevious(&slist, pow2);
	//Print(slist);
	//SLTErasePrevious(&slist, pow1);
	//Print(slist);

	/*SLTEraseAfter(pow);
	Print(slist);

	SLTEraseAfter(pow1);
	Print(slist);

	SLTEraseAfter(pow2);
	Print(slist);*/
	/*SLTErasePrevious(&slist, pow1);*/

	/*Print(slist);*/

	/*SLTErasePrevious(&slist, pow);
	SLTErasePrevious(&slist, pow1);
	SLTErasePrevious(&slist, pow2);
	Print(slist);*/

	/*SLTErase(&slist, pow);
	SLTErase(&slist, pow1);
	SLTErase(&slist, pow2);
	Print(slist);*/
	/*SLTPopfront(&slist);
	SLTPopfront(&slist);
	SLTPopfront(&slist);
	Print(slist);

	SLTPopBack(&slist);
	SLTPopBack(&slist);
	SLTPopBack(&slist);
	Print(slist);*/

	/*Print(slist);*/
	Destory(&slist);
}
int main()
{

	test3();

	return 0;
}

