#include <stdio.h>

/*��������
* 1. ���еĽ������������нڵ�Ķ���֮�ͼ�1
* 2. m�����е�i��i>=1)��������� (m��i-1�η�) �����
* 3. �߶�Ϊh(h>=1)��m��������� (m��hƽ�� - 1)/(m - 1)
*/
// ���ݱ������й����������
	/* ���ֱ�����ʽ���������ֱ��� + �����������
	* 1. ������� + �������
	  2. ������� + �������
	  3. ��α��� + �������
	*/

// ��ͨ����������ʽ�洢�ṹ
//// �ȿ���һ����ͨ��������ʽ�洢
//typedef int ElemType;
//typedef struct LNode
//{
//	ElemType data;// ��Ÿýڵ�Ԫ��
//	struct LNode* next;// �����һ���ڵ��ָ��
//	struct LNode* pro;// �����һ���ڵ��ָ��
//}LN;
// ������ʽ�洢
typedef char ElemType;
typedef struct BinTree
{
	ElemType data;// ��Žڵ������Ԫ��
	struct BinTree* left;// ������ӽڵ��ַ��ָ��
	struct BinTree* right;// ����Һ��ӽ���ַ��ָ��
	struct BinTree* Parent;// ��Ÿ��ڵ��ַ��ָ��
}BTNode;
// �������ı���
// 1. ��α���
// 2. �������
// 3. �������
// 4. �������

// ����һ��������
BTNode* Great_BT()
{
	//����һ���򵥵Ķ�����
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	return A;
}
 
// ��һ���������ĸ߶�
int TreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	// ������������߶�
	int ll = TreeDepth(root->left);
	// ������������߶�
	int rr = TreeDepth(root->right);
	return ll > rr ? ll + 1 : rr + 1;
}

int main()
{
	BTNode* r = Great_BT();
	int d = TreeDepth(r);
	printf("%d\n", d);

	return 0;
}