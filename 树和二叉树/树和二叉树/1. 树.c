#include <stdio.h>

/*树的性质
* 1. 树中的结点个数等于所有节点的度数之和加1
* 2. m叉树中第i（i>=1)层上最多有 (m的i-1次方) 个结点
* 3. 高度为h(h>=1)的m叉树最多有 (m的h平方 - 1)/(m - 1)
*/
// 根据遍历序列构造出二叉树
	/* 四种遍历方式，不管哪种遍历 + 中序遍历即可
	* 1. 先序遍历 + 中序遍历
	  2. 后序遍历 + 中序遍历
	  3. 层次遍历 + 中序遍历
	*/

// 普通二叉树的链式存储结构
//// 先考虑一下普通的线性链式存储
//typedef int ElemType;
//typedef struct LNode
//{
//	ElemType data;// 存放该节点元素
//	struct LNode* next;// 存放下一个节点的指针
//	struct LNode* pro;// 存放上一个节点的指针
//}LN;
// 树的链式存储
typedef char ElemType;
typedef struct BinTree
{
	ElemType data;// 存放节点的数据元素
	struct BinTree* left;// 存放左孩子节点地址的指针
	struct BinTree* right;// 存放右孩子结点地址的指针
	struct BinTree* Parent;// 存放父节点地址的指针
}BTNode;
// 二叉树的遍历
// 1. 层次遍历
// 2. 先序遍历
// 3. 中序遍历
// 4. 后序遍历

// 构建一个二叉树
BTNode* Great_BT()
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

	return A;
}
 
// 求一个二叉树的高度
int TreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	// 先求出左子树高度
	int ll = TreeDepth(root->left);
	// 再求出右子树高度
	int rr = TreeDepth(root->right);
	return ll > rr ? ll + 1 : rr + 1;
}

int main()
{
	BTNode* r = Great_BT();
	int d = TreeDepth(r);
	printf("%d\n", d);

	return 0;
}