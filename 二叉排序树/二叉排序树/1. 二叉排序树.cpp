//#include<iostream>
//
//using namespace std;
///*二叉排序树(BST)
//* 一颗非空的二叉排序树有如下性质：
//* 1.如果左子树不为空，则左子树上所有节点的值都小于根节点的值
//* 2.如果右子树不为空，则右子树上所有节点的值都大于根节点的值
//* 3.左右子树也分别为二叉排序树
//* 
//* 创建二叉排序树
//* 1.相同的序列创建的二叉排序树是唯一的
//* 2.同一集合创建的二叉排序树是不同的
//* 3.用二叉树先序遍历序列创建的二叉排序树与原树相同
//* 
//* 删除节点有四种情况
//* 1.如果树只有根节点，且删除的节点就是根节点
//* 2.如果待删除的节点是叶子节点，则直接删除就行，不会破坏二叉排序树的性质
//* 3.如果待删除的节点只有左子树或者右子树，则让子树代替自己
//* 4.如果待删除的节点有左子树和右子树，则让左子树最右侧的节点代替自己，然后删除左子树最右侧的节点
//*	(也可以让右子树最左侧的节点代替自己，然后删除右子树最左侧的节点)
//* 
//*/
//
//#define ElemType int
//// 二叉树的数据结构
//typedef struct BSTNode
//{
//	ElemType data;
//	BSTNode* left;
//	BSTNode* right;
//}BST;
//
//// 插入 递归实现
//bool Insert(BST** root, ElemType data)
//{
//	// 判断当前节点是否为空
//	if ((*root) == NULL)
//	{
//		// (*root)->data = data;   因为空指针不能解引用，所以使用malloc方法(也可以new)
//		(*root) = (BST*)malloc(sizeof(BST));
//		// 不这样写的原因，ElemType可能为结构体类型的数据，所以采用memcpy
//		// (*root)->data = data;
//		 memcpy(&(*root)->data, &data, sizeof(ElemType));
//		(*root)->left = NULL;// 将节点左右指针置空
//		(*root)->right = NULL;
//		return true;
//	}
//	// 判断插入值与当前节点值的大小
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
//		// 插入的节点当前二叉排序树中存在
//		return false;
//	}
//}
//// 插入 非递归实现
//bool Insert1(BST** root, ElemType data)
//{
//	// 如果树是空树，创建根节点
//	if ((*root) == NULL)
//	{
//		(*root) = (BST*)malloc(sizeof(BST));
//		memcpy(&(*root)->data, &data, sizeof(ElemType));
//		(*root)->left = NULL;
//		(*root)->right = NULL;
//		return true;
//	}
//
//	BST* tem = (*root);// 临时遍历指针
//	BST* parents = NULL;// 记录双亲节点
//	int flag = 0; // 记录临时遍历指针是双亲节点的左节点还是右节点，左节点 -- 0，右节点 -- 1
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
//	// 分配新节点
//	tem = (BST*)malloc(sizeof(BST));
//	memcpy(&tem->data, &data, sizeof(ElemType));
//	tem->left = NULL;
//	tem->right = NULL;
//	// 让双亲结点的左或右指针指向新分配的结点。
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
//// 创建一颗二叉排序树
//void CreateBST(BST** root, ElemType* arr, int size)
//{	
//	// 遍历数组，将元素依次插入
//	for (int i = 0; i < size; i++)
//	{
//		// 插入
//		// Insert(root, *(arr + i));
//		Insert1(root, *(arr + i));
//
//	}
//
//	cout << "创建完成!" << endl;
//}
//
//// 查找 递归实现  找到返回该节点地址，未找到返回NULL
//BST* FindBST(BST** root, ElemType data)
//{
//	// 先判断是否为空树
//	if ((*root) == NULL)
//	{
//		return NULL;
//	}
//	// 查找成功
//	if ((*root)->data == data)
//	{
//		return (* root);
//	}
//	// 向右递归查找
//	else if (data > (*root)->data)
//	{
//		FindBST(&(*root)->right, data);
//	}
//	// 向左递归查找
//	else
//	{
//		FindBST(&(*root)->left, data);
//	}
//}
//
//// 查找 非递归实现
//BST* FindBST1(BST** root, ElemType data)
//{
//	// 临时地址tem
//	BST* tem = (*root);
//	while (tem)
//	{
//		// 向右继续找
//		if (data > tem->data)
//		{
//			tem = tem->right;
//		}
//		// 向左继续找
//		else if (data < tem->data)
//		{
//			tem = tem->left;
//		}
//		// 找到了
//		else
//		{
//			return tem;
//		}
//	}
//	// 如果是空树或者是没找到的情况
//	return tem;
//	/*
//	// 以下代码更精简，可以取代以上的代码。
//	while ( (TT!=NULL) && (*ee!=TT->data) )
//	{
//	  if (*ee<TT->data) TT=TT->lchild;  // 继续向左走。
//	  else TT=TT->rchild;  // 继续向右走。
//	}
//
//	return TT;
//	*/
//}
//
//// 二叉树中序遍历
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
//// 删除节点
//bool Delete(BST** root, ElemType data)
//{
//	// 判断是否为空树
//	if ((*root) == NULL)
//	{
//		return false;
//	}
//	//删除节点有四种情况
//	//	1.如果树只有根节点，且删除的节点就是根节点
//	if ((*root)->left == NULL && (*root)->right == NULL && (*root)->data == data)
//	{
//		free(*root);
//		(*root) = NULL;
//		return true;
//	}
//	/*BST* ret = FindBST(&(*root), data);
//	if (ret == NULL)
//	{
//		cout << "该节点不存在" << endl;
//		return false;
//	}*/
//	// 临时指针tem
//	BST* tem = (*root);
//	BST* parents = NULL;
//	int flag = 0;
//	while (tem)
//	{
//		// 找到了
//		if (data == tem->data)
//		{
//			break;
//		}
//		// 向右继续找
//		if (data > tem->data)
//		{
//			parents = tem;
//			tem = tem->right;
//			flag = 1;
//		}
//		// 向左继续找
//		else
//		{
//			parents = tem;
//			tem = tem->left;
//			flag = 0;
//		}
//	}
//	//cout << tem->data << endl;
//	//cout << parents->data << endl;
//	//	2.如果待删除的节点是叶子节点，则直接删除就行，不会破坏二叉排序树的性质
//	if (tem->left == NULL && tem->right == NULL)
//	{
//		// 释放子节点
//		free(tem);
//		tem = NULL;
//		// 将双亲结点左节点或右节点置空
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
//	//	3.如果待删除的节点只有左子树或者右子树，则让子树代替自己
//	if ((tem->left == NULL && tem->right != NULL) || (tem->right == NULL && tem->left != NULL))
//	{
//		// 只有左节点
//		if (tem->left != NULL)
//		{
//			// 左节点代替自己    // 修改双亲结点pss的左或右指针指向ss的左子树。
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
//		// 只有右节点
//		if (tem->right != NULL)
//		{
//			// 右节点代替自己  // 修改双亲结点pss的左或右指针指向ss的右子树。
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
//	//	4.如果待删除的节点有左子树和右子树，则让左子树最右侧的节点代替自己，然后删除左子树最右侧的节点
//	//	(也可以让右子树最左侧的节点代替自己，然后删除右子树最左侧的节点)
//	if (tem->left != NULL && tem->right != NULL)
//	{
//		// 找左子树最右侧节点
//		// 存放双亲结点指针
//		BST* pt = tem;
//		// 临时变量指针    从左子树开始找
//		BST* t = tem->left;
//		// 用于记录临时变量指针是双亲节点的左节点还是右节点   右节点 -- 1  左节点 -- 0
//		int flag1 = 0;
//
//		//// 1. 向右走到头(找左子树最右侧节点)
//		//while (t->right != NULL)
//		//{
//		//	pt = t;
//		//	t = t->right;
//		//	flag1 = 1;
//		//}
//
//		//// 让左子树最右侧节点代替要删除的节点，只需要将要删除节点的值用最右侧节点的值进行替换，
//		//// 然后改变最右侧节点的双亲结点的右指针或者左指针指向最右侧节点的左指针(因为都是最右侧节点，所以没有右节点，左节点也可能为空)
//		//// 复制值
//		//memcpy(&tem->data, &t->data, sizeof(ElemType));
//		//// 改变最右侧节点的双亲结点的右指针或者左指针指向最右侧节点的左子树
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
//		// 2. 向左走到头找(右子树的最左侧节点)
//		t = tem->right;
//		flag1 = 1; // t的指向改变，就要改变flag1
//		// 找的是右子树最左侧节点   因为找的是最左侧节点，所以改变双亲节点左节点或者右节点的指向最左侧节点的右子树
//		while (t->left) // 因为进入循环前存在t的左节点为空，所以不一定只是改变双亲节点的左节点也有可能是改变双亲结点的右节点
//		{
//			pt = t;
//			t = t->left; // t改变之前将其赋给双亲结点
//			flag1 = 0;
//		}
//		// 复制值
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
//		// 释放掉t   
//		// 为什么释放的是t，因为是将最右侧节点值与要删除节点值互换，所以本应该释放的要删除节点，现在变成最右侧节点
//		free(t);
//		return 0;
//	}
//}
//
//// 获取二叉树的高度
//int TreeDepth(BST* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//
//	int ll = TreeDepth(root->left);// 求左子树高度
//	int rr = TreeDepth(root->right);// 求右子树高度
//
//	return ll > rr ? (ll + 1) : (rr + 1);// 取左、右子树的较大者再加上根结点的高度。
//}
//BST* FindBST2(BST* root, ElemType data)
//{
//	// 临时地址tem
//	BST* tem = root;
//	while (tem)
//	{
//		// 向右继续找
//		if (data > tem->data)
//		{
//			tem = tem->right;
//		}
//		// 向左继续找
//		else if (data < tem->data)
//		{
//			tem = tem->left;
//		}
//		// 找到了
//		else
//		{
//			return tem;
//		}
//	}
//	// 如果是空树或者是没找到的情况
//	return tem;
//	/*
//	// 以下代码更精简，可以取代以上的代码。
//	while ( (TT!=NULL) && (*ee!=TT->data) )
//	{
//	  if (*ee<TT->data) TT=TT->lchild;  // 继续向左走。
//	  else TT=TT->rchild;  // 继续向右走。
//	}
//
//	return TT;
//	*/
//}
//int main()
//{
// 	// 首先创建二叉排序树
//	ElemType arr[] = { 50,66,60,26,21,30,70,68 };
//	// 将数组中的元素一次插入到二叉排序树
//	BST* root = NULL;
//	// 要改变root所指的内存空间，所以要使用传地址
//	CreateBST(&root, arr, sizeof(arr) / sizeof(ElemType));
//	cout << "二叉树高度为：" << TreeDepth(root) << endl;
//	// 查找
//	// 不用改变root所指的内存空间，所以不用传地址，只用传值即可，也可以选择传地址
//	BST* ret = FindBST(&root, 21);
//	cout << ret << " " << ret->data << endl;
//	ret = FindBST1(&root, 21);
//	cout << ret << " " << ret->data << endl;
//	// 不用改变root所指的内存空间，所以不用传地址，只用传值即可
//	ret = FindBST2(root, 21);
//	cout << ret << " " << ret->data << endl;
//	// 中序遍历
//	InOrder(root);
//	// 删除
//	// 要改变root所指的内存空间，所以要使用传地址
//	Delete(&root, 66);
//	cout << endl;
//	InOrder(root);
//	cout << "二叉树高度为：" << TreeDepth(root) << endl;
//	return 0;
//}