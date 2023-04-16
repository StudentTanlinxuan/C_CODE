//#include<iostream>
//#include<queue>
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
//// 层次遍历的实现，首先创建一个队列，将根节点入队，然后将根节点出队，
//// 出队完每一个节点，将此节点的左右孩子节点入队，依次类推，空节点不用入队
//// level  - 层次   traversal - 遍历
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
//void Level_trav(BTNode* root)
//{
//	// 创建一个队列
//	queue<BTNode*> Q;
//	//BTNode* root = Great_BT();
//
//	Q.push(root);
//	BTNode* tem = root;
//	vector<BTNode*> v1;
//
//	while (!Q.empty())
//	{
//		if (tem->left != NULL)
//		{
//			Q.push(tem->left);
//		}
//		if (tem->right != NULL)
//		{
//			Q.push(tem->right);
//		}
//		v1.push_back(Q.front());
//		Q.pop();
//		if (!Q.empty())
//		{
//			tem = Q.front();
//		}
//	}
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << ( * (v1[i])).data << " ";
//	}
//}
//
//int main()
//{
//	BTNode* r = Great_BT();
//	Level_trav(r);
//	return 0;
//}