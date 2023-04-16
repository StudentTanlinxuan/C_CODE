//#include<iostream>
//#include<stack>
//
//using namespace std;
//
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
//// 后序遍历
//// 递归实现
//void PostOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	PostOrder(root->left);
//	PostOrder(root->right);
//	cout << root->data << " ";
//}
//// 非递归实现
//void PostOrder1(BTNode* root)
//{
//	stack<BTNode> s;
//	BTNode* tem = root;
//	BTNode* prev = NULL;
//	while (tem != NULL || !s.empty() )
//	{
//		if (tem != NULL)
//		{
//			s.push(*tem);
//			tem = tem->left;
//		}
//		else
//		{
//			tem = &s.top();
//			// 该节点的左节点为空
//			// 如果有右节点且没有被访问
//			if ((tem->right != NULL) && (tem->right->data !=  prev->data))
//			{
//				tem = tem->right;
//				// 将右子树的根节点入栈
//				//s.push(*tem);
//				// 再转向给右子树的左节点
//				//tem = tem->left;
//			}
//			// 如果没有右节点，弹出栈
//			else
//			{
//				cout << s.top().data << " ";
//				prev = &s.top();
//				s.pop();
//				// 栈顶元素弹出后，要将tem指针置空
//				// 如果不置空，或者在这里就将其指向栈顶元素，会导致重复插入刚弹出的节点
//				tem = NULL;
//			}
//
//			// 需要一个记录上个访问的节点(prev)，不然这样写会导致一直访问同一个元素
//
//		}
//	}
//
//}
//// 求一个二叉树的高度
//int TreeDepth(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	// 先求出左子树高度
//	int ll = TreeDepth(root->left);
//	// 再求出右子树高度
//	int rr = TreeDepth(root->right); 
//	return ll > rr ? ll + 1 : rr + 1;
//}
//
//void Great_Tree1()
//{
//	BTNode* b1 = (BTNode*)malloc(sizeof(BTNode));
//	b1->data = 'd';
//	b1->left = NULL;
//	b1->right = NULL;
//	// 根据遍历构造出二叉树
//	/* 四种遍历方式，不管哪种遍历 + 中序遍历即可
//	* 1. 先序遍历 + 中序遍历
//	  2. 后序遍历 + 中序遍历
//	  3. 层次遍历 + 中序遍历
//	*/
//}
//
//int main()
//{
//	BTNode* r = Great_BT();
//	PostOrder(r);
//	cout << endl;
//	PostOrder1(r);
//	cout << endl;
//	cout << "树的高度为：" << TreeDepth(r) << endl;
//	return 0;
//}