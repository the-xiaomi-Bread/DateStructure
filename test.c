#define _CRT_SECURE_NO_WARNINGS 1

#include"seqlist.h"

void test2()
{
	SL sl;
	SLInit(&sl);

	SLPushback(&sl, 1);
	SLPushback(&sl, 2);
	SLPushback(&sl, 3);
	SLPushback(&sl, 4);
	Print(&sl);
	//SLPushback(&sl, 1);
	//SLPushback(&sl, 2);

	SLPopback(&sl);
	SLPopback(&sl);
	SLPopback(&sl);
	SLPopback(&sl);
	SLPopback(&sl);
	SLPopback(&sl);
	
	SLPushback(&sl, 4);

	//SLPushfront(&sl, 1);
	//SLPushfront(&sl, 2);
	//SLPushfront(&sl, 3);
	//SLPushfront(&sl, 4);
	//Print(&sl);


	Print(&sl);
	Destory(&sl);
}

void test1()
{
	SL sl;
	SLInit(&sl);

	SLPushback(&sl, 1);
	SLPushback(&sl, 2);
	SLPushback(&sl, 3);
	SLPushback(&sl, 4);
	Print(&sl);
	//SLPushback(&sl, 1);
	//SLPushback(&sl, 2);

	SLPushfront(&sl, 1);
	SLPushfront(&sl, 2);
	SLPushfront(&sl, 3);
	SLPushfront(&sl, 4);
	Print(&sl);

	/*SLPopback(&sl);
	SLPopback(&sl);*/
	//SLPopback(&sl);
	//SLPopback(&sl);
	//SLPopback(&sl);
	//SLPopback(&sl);
	//SLPopback(&sl);

	//SLPopfront(&sl);
	//SLPopfront(&sl);
	//SLPopfront(&sl);
	//SLPopfront(&sl);
	//SLPopfront(&sl);
	//SLPopfront(&sl);

	SLFind(&sl, 1);
	SLFind(&sl, 2);
	Print(&sl);

	SLChange(&sl, 3, 8);
	SLChange(&sl, 4, 8);
	Print(&sl);


	Print(&sl);
	Destory(&sl);
}


void test3()
{
	SL sl;
	SLInit(&sl);

	SLPushback(&sl, 1);
	SLPushback(&sl, 2);
	SLPushback(&sl, 3);
	SLPushback(&sl, 4);
	Print(&sl);

	SLInsert(&sl, 8, 3);
	SLInsert(&sl, 9, 3);
	SLInsert(&sl, 7, 3);

	Print(&sl);

	SLRemove(&sl, 4);
	SLRemove(&sl, 4);
	SLRemove(&sl, 4);

	Print(&sl);
	Destory(&sl);
}

void test4()
{
	//SL* sl = NULL;
	
	SL sl;
	SLInit(&sl);


	SLPushback(&sl, 1);
	SLPushback(&sl, 2);
	//SLPushback(&sl, 3);
	//SLPushback(&sl, 4);
	//SLPushfront(&sl, 1);
	//SLPushfront(&sl, 1);
	//SLPushfront(&sl, 1);
	//SLPushfront(&sl, 1);
	//SLPushback(&sl, 3);
	//SLPushback(&sl, 4);
	//SLPushfront(&sl, 1);
	//Print(&sl);
	/*SLPopback(&sl);
	SLPopback(&sl);
	SLPopback(&sl);*/

	/*SLInsert(&sl, 10, 4);
	SLInsert(&sl, 10, 4);
	SLInsert(&sl, 10, 3)*/;

	/*SLPopfront(&sl);
	SLPopfront(&sl);
	SLPopfront(&sl);*/

	//SLRemove(&sl, 4);
	//SLRemove(&sl, 4);
	//Print(&sl);

	//SLChange1(&sl, 30, 5);
	

	//SLInsert(&sl, 8, 3);
	//SLInsert(&sl, 9, 3);
	//SLInsert(&sl, 7, 3);

	//Print(&sl);

	//SLRemove(&sl, 4);
	//SLRemove(&sl, 4);
	//SLRemove(&sl, 4);

	Print(&sl);
	Destory(&sl);
}

int main()
{
	//SL sl;
	//SLInit(&sl);

	test4();


	/*Print(&sl);
	Destory(&sl);*/
	return 0;
}