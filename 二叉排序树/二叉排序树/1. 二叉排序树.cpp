//#include<iostream>
//
//using namespace std;
///*����������(BST)
//* һ�ŷǿյĶ������������������ʣ�
//* 1.�����������Ϊ�գ��������������нڵ��ֵ��С�ڸ��ڵ��ֵ
//* 2.�����������Ϊ�գ��������������нڵ��ֵ�����ڸ��ڵ��ֵ
//* 3.��������Ҳ�ֱ�Ϊ����������
//* 
//* ��������������
//* 1.��ͬ�����д����Ķ�����������Ψһ��
//* 2.ͬһ���ϴ����Ķ����������ǲ�ͬ��
//* 3.�ö���������������д����Ķ�����������ԭ����ͬ
//* 
//* ɾ���ڵ����������
//* 1.�����ֻ�и��ڵ㣬��ɾ���Ľڵ���Ǹ��ڵ�
//* 2.�����ɾ���Ľڵ���Ҷ�ӽڵ㣬��ֱ��ɾ�����У������ƻ�����������������
//* 3.�����ɾ���Ľڵ�ֻ���������������������������������Լ�
//* 4.�����ɾ���Ľڵ��������������������������������Ҳ�Ľڵ�����Լ���Ȼ��ɾ�����������Ҳ�Ľڵ�
//*	(Ҳ�����������������Ľڵ�����Լ���Ȼ��ɾ�������������Ľڵ�)
//* 
//*/
//
//#define ElemType int
//// �����������ݽṹ
//typedef struct BSTNode
//{
//	ElemType data;
//	BSTNode* left;
//	BSTNode* right;
//}BST;
//
//// ���� �ݹ�ʵ��
//bool Insert(BST** root, ElemType data)
//{
//	// �жϵ�ǰ�ڵ��Ƿ�Ϊ��
//	if ((*root) == NULL)
//	{
//		// (*root)->data = data;   ��Ϊ��ָ�벻�ܽ����ã�����ʹ��malloc����(Ҳ����new)
//		(*root) = (BST*)malloc(sizeof(BST));
//		// ������д��ԭ��ElemType����Ϊ�ṹ�����͵����ݣ����Բ���memcpy
//		// (*root)->data = data;
//		 memcpy(&(*root)->data, &data, sizeof(ElemType));
//		(*root)->left = NULL;// ���ڵ�����ָ���ÿ�
//		(*root)->right = NULL;
//		return true;
//	}
//	// �жϲ���ֵ�뵱ǰ�ڵ�ֵ�Ĵ�С
//	if (data < (*root)->data)
//	{
//		Insert(&(*root)->left, data);
//	}
//	else if (data > (*root)->data)
//	{
//		Insert(&(*root)->right, data);
//	}
//	else
//	{
//		// ����Ľڵ㵱ǰ�����������д���
//		return false;
//	}
//}
//// ���� �ǵݹ�ʵ��
//bool Insert1(BST** root, ElemType data)
//{
//	// ������ǿ������������ڵ�
//	if ((*root) == NULL)
//	{
//		(*root) = (BST*)malloc(sizeof(BST));
//		memcpy(&(*root)->data, &data, sizeof(ElemType));
//		(*root)->left = NULL;
//		(*root)->right = NULL;
//		return true;
//	}
//
//	BST* tem = (*root);// ��ʱ����ָ��
//	BST* parents = NULL;// ��¼˫�׽ڵ�
//	int flag = 0; // ��¼��ʱ����ָ����˫�׽ڵ����ڵ㻹���ҽڵ㣬��ڵ� -- 0���ҽڵ� -- 1
//	while (tem)
//	{
//		if (data > tem->data)
//		{
//			parents = tem;
//			tem = tem->right;
//			flag = 1;
//		}
//		else if (data < tem->data)
//		{
//			parents = tem;
//			tem = tem->left;
//			flag = 0;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	// �����½ڵ�
//	tem = (BST*)malloc(sizeof(BST));
//	memcpy(&tem->data, &data, sizeof(ElemType));
//	tem->left = NULL;
//	tem->right = NULL;
//	// ��˫�׽��������ָ��ָ���·���Ľ�㡣
//	if (flag == 1)
//	{
//		parents->right = tem;
//	}
//	else
//	{
//		parents->left = tem;
//	}
//
//	return true;
//}
//
//
//// ����һ�Ŷ���������
//void CreateBST(BST** root, ElemType* arr, int size)
//{	
//	// �������飬��Ԫ�����β���
//	for (int i = 0; i < size; i++)
//	{
//		// ����
//		// Insert(root, *(arr + i));
//		Insert1(root, *(arr + i));
//
//	}
//
//	cout << "�������!" << endl;
//}
//
//// ���� �ݹ�ʵ��  �ҵ����ظýڵ��ַ��δ�ҵ�����NULL
//BST* FindBST(BST** root, ElemType data)
//{
//	// ���ж��Ƿ�Ϊ����
//	if ((*root) == NULL)
//	{
//		return NULL;
//	}
//	// ���ҳɹ�
//	if ((*root)->data == data)
//	{
//		return (* root);
//	}
//	// ���ҵݹ����
//	else if (data > (*root)->data)
//	{
//		FindBST(&(*root)->right, data);
//	}
//	// ����ݹ����
//	else
//	{
//		FindBST(&(*root)->left, data);
//	}
//}
//
//// ���� �ǵݹ�ʵ��
//BST* FindBST1(BST** root, ElemType data)
//{
//	// ��ʱ��ַtem
//	BST* tem = (*root);
//	while (tem)
//	{
//		// ���Ҽ�����
//		if (data > tem->data)
//		{
//			tem = tem->right;
//		}
//		// ���������
//		else if (data < tem->data)
//		{
//			tem = tem->left;
//		}
//		// �ҵ���
//		else
//		{
//			return tem;
//		}
//	}
//	// ����ǿ���������û�ҵ������
//	return tem;
//	/*
//	// ���´�������򣬿���ȡ�����ϵĴ��롣
//	while ( (TT!=NULL) && (*ee!=TT->data) )
//	{
//	  if (*ee<TT->data) TT=TT->lchild;  // ���������ߡ�
//	  else TT=TT->rchild;  // ���������ߡ�
//	}
//
//	return TT;
//	*/
//}
//
//// �������������
//void InOrder(BST* root)
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
//// ɾ���ڵ�
//bool Delete(BST** root, ElemType data)
//{
//	// �ж��Ƿ�Ϊ����
//	if ((*root) == NULL)
//	{
//		return false;
//	}
//	//ɾ���ڵ����������
//	//	1.�����ֻ�и��ڵ㣬��ɾ���Ľڵ���Ǹ��ڵ�
//	if ((*root)->left == NULL && (*root)->right == NULL && (*root)->data == data)
//	{
//		free(*root);
//		(*root) = NULL;
//		return true;
//	}
//	/*BST* ret = FindBST(&(*root), data);
//	if (ret == NULL)
//	{
//		cout << "�ýڵ㲻����" << endl;
//		return false;
//	}*/
//	// ��ʱָ��tem
//	BST* tem = (*root);
//	BST* parents = NULL;
//	int flag = 0;
//	while (tem)
//	{
//		// �ҵ���
//		if (data == tem->data)
//		{
//			break;
//		}
//		// ���Ҽ�����
//		if (data > tem->data)
//		{
//			parents = tem;
//			tem = tem->right;
//			flag = 1;
//		}
//		// ���������
//		else
//		{
//			parents = tem;
//			tem = tem->left;
//			flag = 0;
//		}
//	}
//	//cout << tem->data << endl;
//	//cout << parents->data << endl;
//	//	2.�����ɾ���Ľڵ���Ҷ�ӽڵ㣬��ֱ��ɾ�����У������ƻ�����������������
//	if (tem->left == NULL && tem->right == NULL)
//	{
//		// �ͷ��ӽڵ�
//		free(tem);
//		tem = NULL;
//		// ��˫�׽����ڵ���ҽڵ��ÿ�
//		if (flag)
//		{
//			parents->right = NULL;
//		}
//		else
//		{
//			parents->left = NULL;
//		}
//		return true;
//	}
//	//	3.�����ɾ���Ľڵ�ֻ���������������������������������Լ�
//	if ((tem->left == NULL && tem->right != NULL) || (tem->right == NULL && tem->left != NULL))
//	{
//		// ֻ����ڵ�
//		if (tem->left != NULL)
//		{
//			// ��ڵ�����Լ�    // �޸�˫�׽��pss�������ָ��ָ��ss����������
//			tem = tem->left;
//			if (flag)
//			{
//				parents->right = tem;
//			}
//			else
//			{
//				parents->left = tem;
//			}
//
//			return true;
//		}
//		// ֻ���ҽڵ�
//		if (tem->right != NULL)
//		{
//			// �ҽڵ�����Լ�  // �޸�˫�׽��pss�������ָ��ָ��ss����������
//			tem = tem->right;
//			if (flag)
//			{
//				parents->right = tem;
//			}
//			else
//			{
//				parents->left = tem;
//			}
//			return true;
//		}
//	}
//	//	4.�����ɾ���Ľڵ��������������������������������Ҳ�Ľڵ�����Լ���Ȼ��ɾ�����������Ҳ�Ľڵ�
//	//	(Ҳ�����������������Ľڵ�����Լ���Ȼ��ɾ�������������Ľڵ�)
//	if (tem->left != NULL && tem->right != NULL)
//	{
//		// �����������Ҳ�ڵ�
//		// ���˫�׽��ָ��
//		BST* pt = tem;
//		// ��ʱ����ָ��    ����������ʼ��
//		BST* t = tem->left;
//		// ���ڼ�¼��ʱ����ָ����˫�׽ڵ����ڵ㻹���ҽڵ�   �ҽڵ� -- 1  ��ڵ� -- 0
//		int flag1 = 0;
//
//		//// 1. �����ߵ�ͷ(�����������Ҳ�ڵ�)
//		//while (t->right != NULL)
//		//{
//		//	pt = t;
//		//	t = t->right;
//		//	flag1 = 1;
//		//}
//
//		//// �����������Ҳ�ڵ����Ҫɾ���Ľڵ㣬ֻ��Ҫ��Ҫɾ���ڵ��ֵ�����Ҳ�ڵ��ֵ�����滻��
//		//// Ȼ��ı����Ҳ�ڵ��˫�׽�����ָ�������ָ��ָ�����Ҳ�ڵ����ָ��(��Ϊ�������Ҳ�ڵ㣬����û���ҽڵ㣬��ڵ�Ҳ����Ϊ��)
//		//// ����ֵ
//		//memcpy(&tem->data, &t->data, sizeof(ElemType));
//		//// �ı����Ҳ�ڵ��˫�׽�����ָ�������ָ��ָ�����Ҳ�ڵ��������
//		//if (flag1) 
//		//{
//		//	pt->right = t->left;
//		//}
//		//else 
//		//{
//		//	pt->left = t->left;
//		//}
//
//
//		// 2. �����ߵ�ͷ��(�������������ڵ�)
//		t = tem->right;
//		flag1 = 1; // t��ָ��ı䣬��Ҫ�ı�flag1
//		// �ҵ��������������ڵ�   ��Ϊ�ҵ��������ڵ㣬���Ըı�˫�׽ڵ���ڵ�����ҽڵ��ָ�������ڵ��������
//		while (t->left) // ��Ϊ����ѭ��ǰ����t����ڵ�Ϊ�գ����Բ�һ��ֻ�Ǹı�˫�׽ڵ����ڵ�Ҳ�п����Ǹı�˫�׽����ҽڵ�
//		{
//			pt = t;
//			t = t->left; // t�ı�֮ǰ���丳��˫�׽��
//			flag1 = 0;
//		}
//		// ����ֵ
//		memcpy(&tem->data, &t->data, sizeof(ElemType));
//		
//		if (flag1)
//		{
//			pt->right = t->right;
//		}
//		else
//		{
//			pt->left = t->right;
//		}
//		// �ͷŵ�t   
//		// Ϊʲô�ͷŵ���t����Ϊ�ǽ����Ҳ�ڵ�ֵ��Ҫɾ���ڵ�ֵ���������Ա�Ӧ���ͷŵ�Ҫɾ���ڵ㣬���ڱ�����Ҳ�ڵ�
//		free(t);
//		return 0;
//	}
//}
//
//// ��ȡ�������ĸ߶�
//int TreeDepth(BST* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//
//	int ll = TreeDepth(root->left);// ���������߶�
//	int rr = TreeDepth(root->right);// ���������߶�
//
//	return ll > rr ? (ll + 1) : (rr + 1);// ȡ���������Ľϴ����ټ��ϸ����ĸ߶ȡ�
//}
//BST* FindBST2(BST* root, ElemType data)
//{
//	// ��ʱ��ַtem
//	BST* tem = root;
//	while (tem)
//	{
//		// ���Ҽ�����
//		if (data > tem->data)
//		{
//			tem = tem->right;
//		}
//		// ���������
//		else if (data < tem->data)
//		{
//			tem = tem->left;
//		}
//		// �ҵ���
//		else
//		{
//			return tem;
//		}
//	}
//	// ����ǿ���������û�ҵ������
//	return tem;
//	/*
//	// ���´�������򣬿���ȡ�����ϵĴ��롣
//	while ( (TT!=NULL) && (*ee!=TT->data) )
//	{
//	  if (*ee<TT->data) TT=TT->lchild;  // ���������ߡ�
//	  else TT=TT->rchild;  // ���������ߡ�
//	}
//
//	return TT;
//	*/
//}
//int main()
//{
// 	// ���ȴ�������������
//	ElemType arr[] = { 50,66,60,26,21,30,70,68 };
//	// �������е�Ԫ��һ�β��뵽����������
//	BST* root = NULL;
//	// Ҫ�ı�root��ָ���ڴ�ռ䣬����Ҫʹ�ô���ַ
//	CreateBST(&root, arr, sizeof(arr) / sizeof(ElemType));
//	cout << "�������߶�Ϊ��" << TreeDepth(root) << endl;
//	// ����
//	// ���øı�root��ָ���ڴ�ռ䣬���Բ��ô���ַ��ֻ�ô�ֵ���ɣ�Ҳ����ѡ�񴫵�ַ
//	BST* ret = FindBST(&root, 21);
//	cout << ret << " " << ret->data << endl;
//	ret = FindBST1(&root, 21);
//	cout << ret << " " << ret->data << endl;
//	// ���øı�root��ָ���ڴ�ռ䣬���Բ��ô���ַ��ֻ�ô�ֵ����
//	ret = FindBST2(root, 21);
//	cout << ret << " " << ret->data << endl;
//	// �������
//	InOrder(root);
//	// ɾ��
//	// Ҫ�ı�root��ָ���ڴ�ռ䣬����Ҫʹ�ô���ַ
//	Delete(&root, 66);
//	cout << endl;
//	InOrder(root);
//	cout << "�������߶�Ϊ��" << TreeDepth(root) << endl;
//	return 0;
//}