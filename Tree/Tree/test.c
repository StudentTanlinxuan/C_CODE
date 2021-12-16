#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
//二叉树的遍历
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//先序遍历
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

//中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}

//后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}
//int size = 0;
//void TreeSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		size++;
//	}
//	TreeSize(root->left);
//	TreeSize(root->right);
//}
//void TreeSize(BTNode* root, int* psize)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	else
//	{
//		(* psize)++;
//	}
//	TreeSize(root->left,psize);
//	TreeSize(root->right,psize);
//}
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
//求叶子节点的个数
int TreeLeafSize(BTNode* root)
{
	/*return ((root->left) == NULL && (root->right) == NULL) ? 1 :
		(TreeLeafSize(root->left) + TreeLeafSize(root->right));*/
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}
void LevelOrder(BTNode* root)
{
	//核心思路：上一层出的时候带下一层节点进
	Queue q;
	QueueInit(&q);
	if (root)
		Queuepush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);
		if (front->left)
		{
			Queuepush(&q, front->left);
		}
		if (front->right)
		{
			Queuepush(&q, front->right);
		}
	}
	printf("\n");

	QueueDestory(&q);
}
int main()
{
	//创建一个简单的二叉树
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");
	/*TreeSize(A);
	printf("TreeSize:%d ", size);

	TreeSize(B);
	printf("TreeSize:%d ", size);*/
	//此时会出现问题,因为会在一个size上加

	//第二种方法，传参,但是注意这里要传地址
	/*int Asize = 0;
	TreeSize(A, &Asize);
	printf("TreeSize:%d", Asize);
	int Bsize = 0;
	TreeSize(B, &Bsize);
	printf("TreeSize:%d", Bsize);*/

	printf("TreeSize:%d\n", TreeSize(A));

	printf("TreeSize:%d\n", TreeSize(B));
	printf("TreeLeafSize:%d\n", TreeLeafSize(A));
	printf("TreeLeafSize:%d\n", TreeLeafSize(B));
	LevelOrder(A);
	return 0;
}