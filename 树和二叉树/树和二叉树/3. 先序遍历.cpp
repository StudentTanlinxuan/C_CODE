//#include<iostream>
//#include<stack>
//
//using namespace std;
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
//
//// �������
//// �ݹ�ʵ��
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
//// �ǵݹ�ʵ��
//void PrevOrder1(BTNode* root)
//{
//	// ����һ��ջ
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