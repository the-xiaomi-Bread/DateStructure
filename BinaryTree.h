#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#include"Queue.h"




typedef int BTdatetype;
typedef struct BinaryTreeNode
{
	BTdatetype date;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BTNodeBuy(BTdatetype x);


BTNode* CreatBinaryTree();


void PreOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);

int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreelevelkSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTdatetype x);
int BinaryTreeHighSize(BTNode* root);

void LevelOrder(BTNode* root);
void BinaryTreeDestory(BTNode* root);
bool BinaryTreeComplete(BTNode* root);


