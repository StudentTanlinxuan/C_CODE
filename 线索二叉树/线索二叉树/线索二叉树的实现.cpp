#include<iostream>

using namespace std;
// 线索二叉树的数据结构
#define ElemType char

typedef struct TBTNode
{
	ElemType data;// 存放节点的数据元素
	TBTNode* left;// 存放节点的左指针（指向左子节点）
	TBTNode* right;// 存放节点的右指针（只想右子节点）
	unsigned char ltag, rtag;// 左右指针的类型，0 - 非线索指针, 1 - 线索指针
}TBTNode;

// 创建二叉树
TBTNode* Creat_BT()
{
	TBTNode* t1 = (TBTNode*)malloc(sizeof(TBTNode));
	t1->data = '1';
	t1->left = NULL;
	t1->right = NULL;
	t1->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t1->rtag = '0';

	TBTNode* t2 = (TBTNode*)malloc(sizeof(TBTNode));
	t2->data = '2';
	t2->left = NULL;
	t2->right = NULL;
	t2->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t2->rtag = '0';

	TBTNode* t3 = (TBTNode*)malloc(sizeof(TBTNode));
	t3->data = '3';
	t3->left = NULL;
	t3->right = NULL;
	t3->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t3->rtag = '0';

	TBTNode* t4 = (TBTNode*)malloc(sizeof(TBTNode));
	t4->data = '4';
	t4->left = NULL;
	t4->right = NULL;
	t4->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t4->rtag = '0';

	TBTNode* t5 = (TBTNode*)malloc(sizeof(TBTNode));
	t5->data = '5';
	t5->left = NULL;
	t5->right = NULL;
	t5->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t5->rtag = '0';

	TBTNode* t6 = (TBTNode*)malloc(sizeof(TBTNode));
	t6->data = '6';
	t6->left = NULL;
	t6->right = NULL;
	t6->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t6->rtag = '0';

	TBTNode* t7 = (TBTNode*)malloc(sizeof(TBTNode));
	t7->data = '7';
	t7->left = NULL;
	t7->right = NULL;
	t7->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t7->rtag = '0';

	TBTNode* t8 = (TBTNode*)malloc(sizeof(TBTNode));
	t8->data = '8';
	t8->left = NULL;
	t8->right = NULL;
	t8->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t8->rtag = '0';

	TBTNode* t9 = (TBTNode*)malloc(sizeof(TBTNode));
	t9->data = '9';
	t9->left = NULL;
	t9->right = NULL;
	t9->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t9->rtag = '0';

	TBTNode* t0 = (TBTNode*)malloc(sizeof(TBTNode));
	t0->data = '0';
	t0->left = NULL;
	t0->right = NULL;
	t0->ltag = '0';// 都将其初始化为非线索指针(节点类型)
	t0->rtag = '0';

	t1->left = t2;
	t1->right = t3;

	t2->left = t4;
	t2->right = t5;

	t3->left = t6;

	t4->left = t7;
	t4->right = t8;

	t5->left = t9;

	t6->left = t0;


	return t1;
}

// 先序遍历序列(递归)
void PrevOrder(TBTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	cout << root->data << " ";
	PrevOrder(root->left);
	PrevOrder(root->right);
}

// 中序遍历序列(递归)
void InOrder(TBTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	InOrder(root->left);
	cout << root->data << " ";
	InOrder(root->right);
}

// 后序遍历序列(递归)
void PostOrder(TBTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout << root->data << " ";
}

// 中序遍历线索二叉树的递归函数
void InThread(TBTNode* cur, TBTNode** prev)
{
	if (cur == NULL)
	{
		return;
	}

	// 访问左子树
	InThread(cur->left, prev);
	
	// 如果当前节点的左指针为空，将当前节点的左指针指向前驱节点
	if (cur->left == NULL)
	{
		if (prev == NULL)
		{
			cur->left = (*prev);
		}
		else
		{
			cur->left = &(**prev);
		}
		cur->ltag = '1';
	}
	// 访问根节点
	cout << cur->data << " ";
	// 如果前驱节点的右指针为空，将前驱节点的右指针指向当前节点
	if (((*prev) != NULL) && ((*prev)->right == NULL))
	{
		(*prev)->right = &(*cur);
		(*prev)->rtag = '1';
	}

	(*prev) = cur; // 迭代
	// 访问右子树
	InThread(cur->right, prev);
}

// 中序遍历二叉树线索化主函数
void CrtInThread(TBTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	// 中序遍历二叉树线索化需要一个记录上个节点的元素
	TBTNode* cur = root; // 指向当前位置的指针
	TBTNode* prev = NULL; // 指向上个节点的指针

	InThread(cur, &prev);// 因为函数返回后还要用到prev，所以需要传地址

	// 需要处理最后一个节点的右子节点，因为当当前节点等于NULL时，递归就结束了
	prev->right = NULL;
	prev->rtag = '1';

	cout << "线索化完成" << endl;
}

// 得到树的最左节点
TBTNode* GetLeftnode(TBTNode* cur)
{
	// 注意这块，必须用线索化标志来作为循环结束的条件，
	// 如果while(cur->left != NULL)这样写就会出现死循环，
	// 因为线索化后每个节点不再有NULL，而是变成它的前驱节点或者后继节点
	while (cur->ltag != '1')
	{
		cur = cur->left;
	}
	return cur;
}

// 中序遍历二叉树线索化从左往右遍历（求后继）
void InOrder1(TBTNode* root)
{
	// 首先得到二叉树最左节点
	TBTNode* cur = GetLeftnode(root);
	// 此时cur指向最左节点
	while (cur != NULL)
	{
		cout << cur->data << " ";
		// 如果该节点的右指针存放的是线索，右指针指向的节点就是该节点的后继节点 
		if (cur->rtag == '1')
		{
			cur = cur->right;
		}
		// 如果该节点的右指针存放的是节点，取右子树中序遍历序列的第一个(最左)节点既是该节点的后继节点
		else
		{
			cur = GetLeftnode(cur->right);
		}
	}
}

// 得到树的最右节点
TBTNode* GetRightnode(TBTNode* cur)
{
	while (cur->rtag == '0')
	{
		cur = cur->right;
	}
	return cur;
}

// 中序遍历二叉线索化从右往左遍历（求前驱）
void InOrder2(TBTNode* root)
{
	// 首先得到最右节点
	TBTNode* cur = GetRightnode(root);
	while (cur != NULL)
	{
		// 先访问
		cout << cur->data << " ";
		// 如果该节点的左指针存放的是线索，左指针指向的节点就是该节点的前驱节点
		if (cur->ltag == '1')
		{
			cur = cur->left;
		}
		// 如果该节点的左指针存放的是节点，取左子树中序遍历序列的最后一个(最右)节点既是该节点的前驱节点
		else
		{
			cur = GetRightnode(cur->left);
		}
	}
}

int main()
{
	// 首先创建一个二叉树
	TBTNode* root = Creat_BT();
	// 先序遍历序列
	cout << "先序遍历序列：";
	PrevOrder(root);
	cout << endl;
	// 中序遍历序列
	cout << "中序遍历序列：";
	InOrder(root);
	cout << endl;
	// 后序遍历序列
	cout << "后序遍历序列：";
	PostOrder(root);
	cout << endl;

	// 中序遍历二叉树线索化主函数
	CrtInThread(root);

	// 中序遍历二叉树线索化从左往右遍历
	cout << "中序遍历二叉树线索化从左往右遍历：";
	InOrder1(root);
	cout << endl;
	// 中序遍历二叉线索化从右往左遍历
	cout << "中序遍历二叉树线索化从右往左遍历：";
	InOrder2(root);
	return 0;
}