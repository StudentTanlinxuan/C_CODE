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
//void InOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	InOrder(root->left);
//	cout << root->data << " ";
//	InOrder(root->right);
//}
//
//// �ǵݹ�ʵ��
//void InOrder1(BTNode* root)
//{
//	// ����һ��ջ
//	stack<BTNode> s;
//	// �ǵݹ�ʵ����Ҫ����ջ��ʵ��
//
//	// �Ӹ��ڵ㿪ʼ���������ڵ�ͽ�����ջ
//	BTNode* tem = root;
//
//	while ((tem != NULL) || (!s.empty()))	
//	{
//		if (tem != NULL)
//		{
//			s.push(*tem);
//			tem = tem->left;
//		}
//		else
//		{
//			cout << s.top().data << " ";
//			tem = &s.top();
//			tem = tem->right;
//			s.pop();
//
//		}
//	}
//	
//
//	// ��ջ�������ջԪ�����ҽڵ㣬���俴��һ����������ڵ㶼��ջ�����û���ҽڵ㣬������ջ
//
//}
//
//int main()
//{
//	BTNode* r = Great_BT();
//	InOrder(r);
//	cout << endl;
//	InOrder1(r);
//
//	return 0;
//}