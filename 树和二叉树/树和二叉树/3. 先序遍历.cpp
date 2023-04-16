//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//using namespace std;
//// 树的链式存储
//typedef char ElemType;
//typedef struct BinTree
//{
//	ElemType data;// 存放节点的数据元素
//	struct BinTree* left;// 存放左孩子节点地址的指针
//	struct BinTree* right;// 存放右孩子结点地址的指针
//	struct BinTree* Parent;// 存放父节点地址的指针
//}BTNode;
//
//// 构建一个二叉树
//BTNode* Great_BT()
//{
//	//创建一个简单的二叉树
//	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL;
//
//	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
//	B->data = 'B';
//	B->left = NULL;
//	B->right = NULL;
//
//	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
//	C->data = 'C';
//	C->left = NULL;
//	C->right = NULL;
//
//	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
//	D->data = 'D';
//	D->left = NULL;
//	D->right = NULL;
//
//	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
//	E->data = 'E';
//	E->left = NULL;
//	E->right = NULL;
//
//	A->left = B;
//	A->right = C;
//	B->left = D;
//	B->right = E;
//
//	return A;
//}
//
//// 先序遍历
//// 递归实现
//void PrevOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	cout << root->data << " ";
//	PrevOrder(root->left);
//	PrevOrder(root->right);
//}
//
//// 非递归实现
//void PrevOrder1(BTNode* root)
//{
//	// 创建一个栈
//	stack<BTNode> s;
//	BTNode* tem = root;
//
//	while (tem != NULL || !s.empty())
//	{
//		if (tem != NULL)
//		{
//			s.push(*tem);
//			cout << s.top().data << " ";
//			tem = tem->left;
//		}
//		else
//		{
//			tem = &s.top();
//			s.pop();
//			tem = tem->right;
//		}
//	}
//}
//
//int main()
//{
//	BTNode* r = Great_BT();
//	PrevOrder(r);
//	cout << endl;
//	PrevOrder1(r);
//
//	return 0;
//}