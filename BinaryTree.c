#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

BTNode* BTNodeBuy(BTdatetype x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->date = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BTNodeBuy(1);
	BTNode* node2 = BTNodeBuy(2);
	BTNode* node3 = BTNodeBuy(3);
	BTNode* node4 = BTNodeBuy(4);
	BTNode* node5 = BTNodeBuy(5);
	BTNode* node6 = BTNodeBuy(6);
	/*BTNode* node7 = BTNodeBuy(7);*/
	BTNode* node8 = BTNodeBuy(8);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	/*node5->left = node7;*/
	node2->right = node8;

	return node1;
}

void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("%c ", 'N');
		return;
	}
	printf("%d ", root->date);
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("%c ", 'N');
		return;
	}
	InOrder(root->left);
	printf("%d ", root->date);
	InOrder(root->right);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("%c ", 'N');
		return;
	}
	InOrder(root->left);
	InOrder(root->right);
	printf("%d ", root->date);
}

void LevelOrder(BTNode* root)
{
	QE q;
	InitQE(&q);

	QEPuch(&q, root);

	while (!QEEmpty(&q))
	{
		BTNode* front = QEfront(&q);
		QEPop(&q);
		printf("%d ", front->date);

		if (front->left)
		{
			QEPuch(&q, front->left);
		}
		if (front->right)
		{
			QEPuch(&q, front->right);
		}
	}
	printf("\n");

	QEDestroy(&q);
}

int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

int BinaryTreelevelkSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreelevelkSize(root->left, k - 1) + BinaryTreelevelkSize(root->right, k - 1);
}

BTNode* BinaryTreeFind(BTNode* root, BTdatetype x)
{
	if (root == NULL)
		return NULL;
	if (root->date == x)
		return root;
	BTNode* a = BinaryTreeFind(root->left, x);
	if (a != NULL)
		return a;
	BTNode* b = BinaryTreeFind(root->right, x);
	if (b != NULL)
		return b;
	return NULL;
}

int BinaryTreeHighSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	/*if (root->left == NULL && root->right == NULL)
		return 1;*/
	int left = BinaryTreeHighSize(root->left) + 1;
	int right = BinaryTreeHighSize(root->right) + 1;
	return left > right ? left : right;
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
}

bool BinaryTreeComplete(BTNode* root)
{
	QE q;
	InitQE(&q);

	QEPuch(&q, root);

	while (!QEEmpty(&q))
	{
		BTNode* front = QEfront(&q);
		QEPop(&q);

		if (front == NULL)
			break;
		
		QEPuch(&q, front->left);
		QEPuch(&q, front->right);
		
	}
	while (!QEEmpty(&q))
	{
		BTNode* front = QEfront(&q);
		QEPop(&q);
		if (front != NULL)
			return false;
	}

	QEDestroy(&q);
	return true;
}