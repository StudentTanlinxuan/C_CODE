//#include<iostream>
//#include<stack>
//
//using namespace std;
//
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
//// �ǵݹ�ʵ��
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
//			// �ýڵ����ڵ�Ϊ��
//			// ������ҽڵ���û�б�����
//			if ((tem->right != NULL) && (tem->right->data !=  prev->data))
//			{
//				tem = tem->right;
//				// ���������ĸ��ڵ���ջ
//				//s.push(*tem);
//				// ��ת�������������ڵ�
//				//tem = tem->left;
//			}
//			// ���û���ҽڵ㣬����ջ
//			else
//			{
//				cout << s.top().data << " ";
//				prev = &s.top();
//				s.pop();
//				// ջ��Ԫ�ص�����Ҫ��temָ���ÿ�
//				// ������ÿգ�����������ͽ���ָ��ջ��Ԫ�أ��ᵼ���ظ�����յ����Ľڵ�
//				tem = NULL;
//			}
//
//			// ��Ҫһ����¼�ϸ����ʵĽڵ�(prev)����Ȼ����д�ᵼ��һֱ����ͬһ��Ԫ��
//
//		}
//	}
//
//}
//// ��һ���������ĸ߶�
//int TreeDepth(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	// ������������߶�
//	int ll = TreeDepth(root->left);
//	// ������������߶�
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
//	// ���ݱ��������������
//	/* ���ֱ�����ʽ���������ֱ��� + �����������
//	* 1. ������� + �������
//	  2. ������� + �������
//	  3. ��α��� + �������
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
//	cout << "���ĸ߶�Ϊ��" << TreeDepth(r) << endl;
//	return 0;
//}