#include<iostream>

using namespace std;
// ���������������ݽṹ
#define ElemType char

typedef struct TBTNode
{
	ElemType data;// ��Žڵ������Ԫ��
	TBTNode* left;// ��Žڵ����ָ�루ָ�����ӽڵ㣩
	TBTNode* right;// ��Žڵ����ָ�루ֻ�����ӽڵ㣩
	unsigned char ltag, rtag;// ����ָ������ͣ�0 - ������ָ��, 1 - ����ָ��
}TBTNode;

// ����������
TBTNode* Creat_BT()
{
	TBTNode* t1 = (TBTNode*)malloc(sizeof(TBTNode));
	t1->data = '1';
	t1->left = NULL;
	t1->right = NULL;
	t1->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t1->rtag = '0';

	TBTNode* t2 = (TBTNode*)malloc(sizeof(TBTNode));
	t2->data = '2';
	t2->left = NULL;
	t2->right = NULL;
	t2->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t2->rtag = '0';

	TBTNode* t3 = (TBTNode*)malloc(sizeof(TBTNode));
	t3->data = '3';
	t3->left = NULL;
	t3->right = NULL;
	t3->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t3->rtag = '0';

	TBTNode* t4 = (TBTNode*)malloc(sizeof(TBTNode));
	t4->data = '4';
	t4->left = NULL;
	t4->right = NULL;
	t4->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t4->rtag = '0';

	TBTNode* t5 = (TBTNode*)malloc(sizeof(TBTNode));
	t5->data = '5';
	t5->left = NULL;
	t5->right = NULL;
	t5->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t5->rtag = '0';

	TBTNode* t6 = (TBTNode*)malloc(sizeof(TBTNode));
	t6->data = '6';
	t6->left = NULL;
	t6->right = NULL;
	t6->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t6->rtag = '0';

	TBTNode* t7 = (TBTNode*)malloc(sizeof(TBTNode));
	t7->data = '7';
	t7->left = NULL;
	t7->right = NULL;
	t7->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t7->rtag = '0';

	TBTNode* t8 = (TBTNode*)malloc(sizeof(TBTNode));
	t8->data = '8';
	t8->left = NULL;
	t8->right = NULL;
	t8->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t8->rtag = '0';

	TBTNode* t9 = (TBTNode*)malloc(sizeof(TBTNode));
	t9->data = '9';
	t9->left = NULL;
	t9->right = NULL;
	t9->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
	t9->rtag = '0';

	TBTNode* t0 = (TBTNode*)malloc(sizeof(TBTNode));
	t0->data = '0';
	t0->left = NULL;
	t0->right = NULL;
	t0->ltag = '0';// �������ʼ��Ϊ������ָ��(�ڵ�����)
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

// �����������(�ݹ�)
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

// �����������(�ݹ�)
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

// �����������(�ݹ�)
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

// ������������������ĵݹ麯��
void InThread(TBTNode* cur, TBTNode** prev)
{
	if (cur == NULL)
	{
		return;
	}

	// ����������
	InThread(cur->left, prev);
	
	// �����ǰ�ڵ����ָ��Ϊ�գ�����ǰ�ڵ����ָ��ָ��ǰ���ڵ�
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
	// ���ʸ��ڵ�
	cout << cur->data << " ";
	// ���ǰ���ڵ����ָ��Ϊ�գ���ǰ���ڵ����ָ��ָ��ǰ�ڵ�
	if (((*prev) != NULL) && ((*prev)->right == NULL))
	{
		(*prev)->right = &(*cur);
		(*prev)->rtag = '1';
	}

	(*prev) = cur; // ����
	// ����������
	InThread(cur->right, prev);
}

// �������������������������
void CrtInThread(TBTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	// ���������������������Ҫһ����¼�ϸ��ڵ��Ԫ��
	TBTNode* cur = root; // ָ��ǰλ�õ�ָ��
	TBTNode* prev = NULL; // ָ���ϸ��ڵ��ָ��

	InThread(cur, &prev);// ��Ϊ�������غ�Ҫ�õ�prev��������Ҫ����ַ

	// ��Ҫ�������һ���ڵ�����ӽڵ㣬��Ϊ����ǰ�ڵ����NULLʱ���ݹ�ͽ�����
	prev->right = NULL;
	prev->rtag = '1';

	cout << "���������" << endl;
}

// �õ���������ڵ�
TBTNode* GetLeftnode(TBTNode* cur)
{
	// ע����飬��������������־����Ϊѭ��������������
	// ���while(cur->left != NULL)����д�ͻ������ѭ����
	// ��Ϊ��������ÿ���ڵ㲻����NULL�����Ǳ������ǰ���ڵ���ߺ�̽ڵ�
	while (cur->ltag != '1')
	{
		cur = cur->left;
	}
	return cur;
}

// ��������������������������ұ��������̣�
void InOrder1(TBTNode* root)
{
	// ���ȵõ�����������ڵ�
	TBTNode* cur = GetLeftnode(root);
	// ��ʱcurָ������ڵ�
	while (cur != NULL)
	{
		cout << cur->data << " ";
		// ����ýڵ����ָ���ŵ�����������ָ��ָ��Ľڵ���Ǹýڵ�ĺ�̽ڵ� 
		if (cur->rtag == '1')
		{
			cur = cur->right;
		}
		// ����ýڵ����ָ���ŵ��ǽڵ㣬ȡ����������������еĵ�һ��(����)�ڵ���Ǹýڵ�ĺ�̽ڵ�
		else
		{
			cur = GetLeftnode(cur->right);
		}
	}
}

// �õ��������ҽڵ�
TBTNode* GetRightnode(TBTNode* cur)
{
	while (cur->rtag == '0')
	{
		cur = cur->right;
	}
	return cur;
}

// ��������������������������������ǰ����
void InOrder2(TBTNode* root)
{
	// ���ȵõ����ҽڵ�
	TBTNode* cur = GetRightnode(root);
	while (cur != NULL)
	{
		// �ȷ���
		cout << cur->data << " ";
		// ����ýڵ����ָ���ŵ�����������ָ��ָ��Ľڵ���Ǹýڵ��ǰ���ڵ�
		if (cur->ltag == '1')
		{
			cur = cur->left;
		}
		// ����ýڵ����ָ���ŵ��ǽڵ㣬ȡ����������������е����һ��(����)�ڵ���Ǹýڵ��ǰ���ڵ�
		else
		{
			cur = GetRightnode(cur->left);
		}
	}
}

int main()
{
	// ���ȴ���һ��������
	TBTNode* root = Creat_BT();
	// �����������
	cout << "����������У�";
	PrevOrder(root);
	cout << endl;
	// �����������
	cout << "����������У�";
	InOrder(root);
	cout << endl;
	// �����������
	cout << "����������У�";
	PostOrder(root);
	cout << endl;

	// �������������������������
	CrtInThread(root);

	// ��������������������������ұ���
	cout << "��������������������������ұ�����";
	InOrder1(root);
	cout << endl;
	// ����������������������������
	cout << "��������������������������������";
	InOrder2(root);
	return 0;
}