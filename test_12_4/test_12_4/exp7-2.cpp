#include<stdio.h>
#include<malloc.h>
#define MaxSize 100
typedef char ElemType;
typedef struct node
{
	ElemType data;
	struct node* lchild;
	struct node* rchild;
}BTNode;
void CreatBTree(BTNode*& b, const char* str)
{
	BTNode* St[MaxSize] = { 0 };
	BTNode* p = NULL;
	int top = -1;
	int k = 0;
	int j = 0;
	char ch;
	b = NULL;
	ch = str[j];
	while (ch != '\0')
	{
		switch (ch)
		{
		case'(':
		{
			top++;
			St[top] = p;
			k = 1;
			break;
		}
		case')':top--; break;
		case',':k = 2; break;
		default:p = (BTNode*)malloc(sizeof(BTNode));
			if (p != NULL)
			{
				p->data = ch;
				p->lchild = p->rchild = NULL;
				if (b == NULL)
					b = p;
				else
				{
					switch (k)
					{
					case 1:St[top]->lchild = p; break;
					case 2:St[top]->rchild = p; break;
					}
				}
			}
		}
		j++; ch = str[j];
	}
}
void DestoryBTree(BTNode*& b)
{
	if (b != NULL)
	{
		DestoryBTree(b->lchild);
		DestoryBTree(b->rchild);
		free(b);
	}
}
BTNode* FindNode(BTNode* b, ElemType x)
{
	BTNode* p;
	if (b == NULL)
		return NULL;
	else if (b->data == x)
		return b;
	else
	{
		p = FindNode(b->lchild, x);
		if (p != NULL)
			return p;
		else
			return FindNode(b->rchild, x);
	}
}
BTNode* LchildNode(BTNode* p)
{
	return p->lchild;
}
BTNode* RchildNode(BTNode* p)
{
	return p->rchild;
}
int BTHeight(BTNode* b)
{
	int lchild, rchild;
	if (b == NULL)
		return (0);
	else
	{
		lchild = BTHeight(b->lchild);
		rchild = BTHeight(b->rchild);
		return (lchild > rchild) ? (lchild + 1) : (rchild + 1);
	}
}
void DispBTree(BTNode* b)
{
	if (b != NULL)
	{
		printf("%c", b->data);
		if (b->lchild != NULL || b->rchild != NULL)
		{
			printf("(");
			DispBTree(b->lchild);
			if (b->rchild != NULL)
				printf(",");
			DispBTree(b->rchild);
			printf(")");
		}
	}
}

//#include"btree.cpp"
void PreOrder(BTNode* b)
{
	if (b != NULL)
	{
		printf("%c", b->data);
		PreOrder(b->lchild);
		PreOrder(b->rchild);
	}
}
void PreOrder1(BTNode* b)
{
	BTNode* St[MaxSize] = { 0 }, * p = NULL;
	int top = -1;
	if (b != NULL)
	{
		top++;
		St[top] = b;
		while (top > -1)
		{
			p = St[top];
			top--;
			printf("%c", p->data);
			if (p->rchild != NULL)
			{
				top++;
				St[top] = p->rchild;
			}
			if (p->lchild != NULL)
			{
				top++;
				St[top] = p->lchild;
			}
		}
		printf("\n");
	}
}
void InOrder(BTNode* b)
{
	if (b != NULL)
	{
		InOrder(b->lchild);
		printf("%c", b->data);
		InOrder(b->rchild);
	}
}
void InOrder1(BTNode* b)
{
	BTNode* St[MaxSize] = { 0 }, * p = NULL;
	int top = -1;
	if (b != NULL)
	{
		p = b;
		while (top > -1 || p != NULL)
		{
			while (p != NULL)
			{
				top++;
				St[top] = p;
				p = p->lchild;
			}
			if (top > -1)
			{
				p = St[top];
				top--;
				printf("%c", p->data);
				p = p->rchild;
			}
		}
		printf("\n");
	}
}
void PostOrder(BTNode* b)
{
	if (b != NULL)
	{
		PostOrder(b->lchild);
		PostOrder(b->rchild);
		printf("%c", b->data);
	}
}
void PostOrder1(BTNode* b)
{
	BTNode* St[MaxSize] = { 0 };
	BTNode* p = NULL;
	int top = -1;
	bool flag;
	if (b != NULL)
	{
		do
		{
			while (b != NULL)
			{
				top++;
				St[top] = b;
				b = b->lchild;
			}
			p = NULL;
			flag = true;
			while (top != -1 && flag)
			{
				b = St[top];
				if (b->rchild == p)
				{
					printf("%c", b->data);
					top--;
					p = b;
				}
				else
				{
					b = b->rchild;
					flag = false;
				}
			}

		} while (top != -1);
		printf("\n");
	}
}
void TravLevel(BTNode* b)
{
	BTNode* Qu[MaxSize] = { 0 };
	int front, rear;
	front = rear = 0;
	if (b != NULL)
		printf("%c", b->data);
	rear++;
	Qu[rear] = b;
	while (rear != front)
	{
		front = (front + 1) % MaxSize;
		b = Qu[front];
		if (b != NULL)
		{
			if (b->lchild != NULL)
			{
				printf("%c", b->lchild->data);
				rear = (rear + 1) % MaxSize;
				Qu[rear] = b->lchild;
			}
			if (b->rchild != NULL)
			{
				printf("%c", b->rchild->data);
				rear = (rear + 1) % MaxSize;
				Qu[rear] = b->rchild;
			}
		}
	}
	printf("\n");
}
int main()
{
	BTNode* b;
	CreatBTree(b, "A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");
	printf("二叉树 b:");
	DispBTree(b);
	printf("\n");
	printf("层次遍历序列:\n");
	TravLevel(b);
	printf("先序遍历序列:\n");
	printf("递归算法:\n");
	PreOrder(b);
	printf("\n");
	printf("非递归算法:\n");
	PreOrder1(b);
	printf("中序遍历序列:\n");
	printf("递归算法:\n");
	InOrder(b);
	printf("\n");
	printf("非递归算法:\n");
	InOrder1(b);
	printf("后序遍历序列:\n");
	printf("递归算法:\n");
	PostOrder(b);
	printf("\n");
	printf("非递归算法:\n");
	PostOrder1(b);
	DestoryBTree(b);
	return 1;
}
