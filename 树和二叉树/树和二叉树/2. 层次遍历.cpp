//#include<iostream>
//#include<queue>
//
//using namespace std;
//// ������ʽ�洢
//typedef char ElemType;
//typedef struct BinTree
//{
//	ElemType data;// ��Žڵ������Ԫ��
//	struct BinTree* left;// ������ӽڵ��ַ��ָ��
//	struct BinTree* right;// ����Һ��ӽ���ַ��ָ��
//	struct BinTree* Parent;// ��Ÿ��ڵ��ַ��ָ��
//}BTNode;
//
//// ��α�����ʵ�֣����ȴ���һ�����У������ڵ���ӣ�Ȼ�󽫸��ڵ���ӣ�
//// ������ÿһ���ڵ㣬���˽ڵ�����Һ��ӽڵ���ӣ��������ƣ��սڵ㲻�����
//// level  - ���   traversal - ����
//
//// ����һ��������
//BTNode* Great_BT()
//{
//	//����һ���򵥵Ķ�����
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
//	// ����һ������
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