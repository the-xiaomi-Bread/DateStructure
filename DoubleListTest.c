#define _CRT_SECURE_NO_WARNINGS 1

#include"DoubleList.h"

test()
{
	DLNode* phead = DLIntial();
	/*DLNode* phead = NULL;
	DLIntial(phead);*/

	DLPushfront(phead, 1);
	DLPushfront(phead, 2);
	DLPushfront(phead, 3);
	DLPushfront(phead, 4);
	DLPrint(phead);

	DLPushback(phead, 5);
	DLPushback(phead, 6);
	DLPrint(phead);
	DLPushback(phead, 7);
	DLPushback(phead, 8);
	DLPrint(phead);

	DLNode* pos1 = DLFind(phead, 1);
	DLNode* pos5 = DLFind(phead, 5);
	DLNode* pos8 = DLFind(phead, 8);

	/*DLNode* pos19 = DLFind(phead, 19);*/

	DLInsert(pos1, 100);
	DLInsert(pos5, 100);
	DLInsert(pos8, 100);
	DLPrint(phead);

	DLErase(pos1);
	pos1 = NULL;
	DLErase(pos5);
	pos5 = NULL;
	DLErase(pos8);
	pos8 = NULL;
	DLPrint(phead);

	

	//DLPushfront(phead, 1);
	//DLPushfront(phead, 2);
	//DLPushfront(phead, 3);
	//DLPushfront(phead, 4);
	//DLPrint(phead);
	 DLDestroy(phead);
}

test1()
{
	DLNode* phead = DLIntial();

	DLPushfront(phead, 1);
	DLPushfront(phead, 2);
	DLPushfront(phead, 3);
	DLPushfront(phead, 4);
	DLPrint(phead);

	DLPushback(phead, 5);
	DLPushback(phead, 6);
	DLPrint(phead);
	DLPushback(phead, 7);
	DLPushback(phead, 8);
	DLPrint(phead);

	DLPushfront(phead, 9);
	DLPushfront(phead, 10);
	DLPushfront(phead, 11);
	DLPushfront(phead, 12);
	DLPrint(phead);

	DLPopFront(phead);
	DLPopFront(phead);
	DLPopFront(phead);
	DLPopFront(phead);
	DLPrint(phead);

	DLPopBack(phead);
	DLPopBack(phead);
	DLPopBack(phead);
	DLPopBack(phead);
	DLPrint(phead);

	DLDestroy(phead);
}

int main()
{
	test1();
	return 0;
}