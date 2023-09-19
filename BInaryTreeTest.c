#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

test1()
{
	BTNode* pbt = CreatBinaryTree();

	PreOrder(pbt);
	printf("\n");
	InOrder(pbt);
	printf("\n");
	PostOrder(pbt);
	printf("\n");

	printf("Size = %d\n", BinaryTreeSize(pbt));
	printf("Size = %d\n", BinaryTreeSize(pbt));

	printf("LeafSize = %d\n", BinaryTreeLeafSize(pbt));
	printf("LeafSize = %d\n", BinaryTreeLeafSize(pbt));

	printf("LevelkSize = %d\n", BinaryTreelevelkSize(pbt, 1));
	printf("LevelkSize = %d\n", BinaryTreelevelkSize(pbt, 2));
	printf("LevelkSize = %d\n", BinaryTreelevelkSize(pbt, 3));
	printf("LevelkSize = %d\n", BinaryTreelevelkSize(pbt, 4));

	printf("Find = %p\n", BinaryTreeFind(pbt, 1));
	printf("Find = %p\n", BinaryTreeFind(pbt, 3));
	printf("Find = %p\n", BinaryTreeFind(pbt, 5));
	printf("Find = %p\n", BinaryTreeFind(pbt, 8));

	printf("HighSize = %d\n", BinaryTreeHighSize(pbt));
	printf("HighSize = %d\n", BinaryTreeHighSize(pbt));

	LevelOrder(pbt);

	printf("BinaryTreeComplete:> %d", BinaryTreeComplete(pbt));

	BinaryTreeDestory(pbt);
	pbt = NULL;
}

int main()
{
	test1();
	return 0;
}

