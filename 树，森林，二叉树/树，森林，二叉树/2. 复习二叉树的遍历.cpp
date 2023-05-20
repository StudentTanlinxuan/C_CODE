//#include<iostream>
//#include<stack>
//
//using namespace std;
//#define ElemType char
//struct BTNode
//{
//	ElemType data;
//	BTNode* left;
//	BTNode* right;
//};
//// �������ı���
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
//// �ǵݹ�ʵ��
//void PrevOrder1(BTNode* root)
//{
//	// ����һ��ջ
//	stack<BTNode> s;
//	BTNode* cur = root;
//	while (cur != NULL || !s.empty())
//	{
//		if (cur != NULL)
//		{
//			cout << cur->data << " ";
//			s.push(*cur);
//			cur = cur->left;
//		}
//		else
//		{
//			cur = &s.top();
//			cur = cur->right;
//			s.pop();
//		}
//	}
//}
//// �������
//// �ݹ�ʵ��
//void MidOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	MidOrder(root->left);
//	cout << root->data << " ";
//	MidOrder(root->right);
//}
//// �ǵݹ�ʵ��
//void MidOrder1(BTNode* root)
//{
//	stack<BTNode*> s;
//	BTNode* cur = root;
//	while (cur != NULL || !s.empty())
//	{
//		if (cur != NULL)
//		{
//			s.push(cur);
//			cur = cur->left;
//		}
//		else
//		{
//			cur = s.top();
//			cout << cur->data << " ";
//			cur = cur->right;
//			s.pop();
//		}
//	}
//}
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
//	stack<BTNode*> s;
//	BTNode* cur = root;
//	BTNode* prev = NULL;
//	while (cur != NULL || !s.empty())
//	{
//		if (cur != NULL)
//		{
//			s.push(cur);
//			cur = cur->left;
//		}
//		else
//		{
//			cur = s.top();
//			if (cur->right != NULL && cur->right != prev)
//			{
//				cur = cur->right;
//			}
//			else
//			{
//				cout << cur->data << " ";
//				prev = cur;
//				s.pop();
//				// ��cur�ÿ�,Ҳ�Ϳ��Լ���ȡ����ջ��Ԫ��(�����ĸ��ڵ�)
//				cur = NULL;
//			}
//		}
//	}
//}
//int main()
//{
//	// ����һ��������
//	BTNode* t1 = (BTNode*)malloc(sizeof(BTNode));
//	t1->data = '1';
//	t1->left = NULL;
//	t1->right = NULL;
//
//	BTNode* t2 = (BTNode*)malloc(sizeof(BTNode));
//	t2->data = '2';
//	t2->left = NULL;
//	t2->right = NULL;
//
//	BTNode* t3 = (BTNode*)malloc(sizeof(BTNode));
//	t3->data = '3';
//	t3->left = NULL;
//	t3->right = NULL;
//
//	BTNode* t4 = (BTNode*)malloc(sizeof(BTNode));
//	t4->data = '4';
//	t4->left = NULL;
//	t4->right = NULL;
//
//	BTNode* t5 = (BTNode*)malloc(sizeof(BTNode));
//	t5->data = '5';
//	t5->left = NULL;
//	t5->right = NULL;
//
//	BTNode* t6 = (BTNode*)malloc(sizeof(BTNode));
//	t6->data = '6';
//	t6->left = NULL;
//	t6->right = NULL;
//
//	BTNode* t7 = (BTNode*)malloc(sizeof(BTNode));
//	t7->data = '7';
//	t7->left = NULL;
//	t7->right = NULL;
//
//	BTNode* t8 = (BTNode*)malloc(sizeof(BTNode));
//	t8->data = '8';
//	t8->left = NULL;
//	t8->right = NULL;
//
//	BTNode* t9 = (BTNode*)malloc(sizeof(BTNode));
//	t9->data = '9';
//	t9->left = NULL;
//	t9->right = NULL;
//
//	BTNode* t0 = (BTNode*)malloc(sizeof(BTNode));
//	t0->data = '0';
//	t0->left = NULL;
//	t0->right = NULL;
//
//	t1->left = t2;
//	t1->right = t3;
//
//	t2->left = t4;
//	t2->right = t5;
//
//	t3->left = t6;
//
//	t4->left = t7;
//	t4->right = t8;
//
//	t5->left = t9;
//
//	t6->left = t0;
//
//	cout << "�����������1��";
//	PrevOrder(t1);
//	cout << endl;
//	cout << "�����������2��";
//	PrevOrder1(t1);
//	cout << endl;
//	cout << "�����������1��";
//	MidOrder(t1);
//	cout << endl;
//	cout << "�����������2��";
//	MidOrder1(t1);
//	cout << endl;
//	cout << "�����������1��";
//	PostOrder(t1);
//	cout << endl;
//	cout << "�����������2��";
//	PostOrder1(t1);
//	cout << endl;
//	return 0;
//}