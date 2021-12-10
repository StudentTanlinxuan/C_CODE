#include<stdio.h>
#define MaxSize 100
typedef struct
{
	char data[MaxSize];
	int length;
}SqString;
void StrAssign(SqString& s, const char cstr[])
{
	int i = 0;
	for (i = 0; cstr[i] != '\0'; i++)
		s.data[i] = cstr[i];
	s.length = i;
}
void DestoryStr(SqString& s)
{

}
void StrCopy(SqString s, SqString t)
{
	for (int i = 0; i < t.length; i++)
		s.data[i] = t.data[i];
	s.length = t.length;
}
bool StrEqual(SqString s, SqString t)
{
	bool same = true;
	if (s.length != t.length)
		same = false;
	else
	{
		for (int i = 0; i < s.length; i++)
		{
			if (s.data[i] != t.data[i])
			{
				same = false;
				break;
			}
		}
	}
	return same;
}
int StrLength(SqString s)
{
	return s.length;
}
SqString Concat(SqString s, SqString t)
{
	SqString str;
	int i;
	str.length = s.length + t.length;
	for (i = 0; i < s.length; i++)
		str.data[i] = s.data[i];
	for (i = 0; i < t.length; i++)
		str.data[s.length + i] = t.data[i];
	return str;
}
SqString SubStr(SqString s, int i, int j)
{
	SqString str;
	int k;
	str.length = 0;
	if (i <= 0 || i > s.length || j < 0 || i + j - 1 > s.length)
		return str;
	for (k = i - 1; k < i + j - 1; k++)
		str.data[k - i + 1] = s.data[k];
	str.length = j;
	return str;
}
SqString InStr(SqString s1, int i, SqString s2)
{
	int j;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s1.length + 1)
		return str;
	for (j = 0; j < i - 1; j++)
		str.data[j] = s1.data[j];
	for (j = 0; j < s2.length; j++)
		str.data[i + j - 1] = s2.data[j];
	for (j = i - 1; j < s1.length; j++)
		str.data[s2.length + j] = s1.data[j];
	str.length = s1.length + s2.length;
	return str;
}
SqString DelStr(SqString s, int i, int j)
{
	int k;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || i + j > s.length + 1)
		return str;
	for (k = 0; k < i - 1; k++)
		str.data[k] = s.data[k];
	for (k = i + j - 1; k < s.length; k++)
		str.data[k - j] = s.data[k];
	str.length = s.length - j;
	return str;
}
SqString RepStr(SqString s, int i, int j, SqString t)
{
	int k;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || i + j - 1 > s.length)
		return str;
	for (k = 0; k < i - 1; k++)
		str.data[k] = s.data[k];
	for (k = 0; k < t.length; k++)
		str.data[i + k - 1] = t.data[k];
	for (k = i + j - 1; k < s.length; k++)
		str.data[t.length + k - j] = s.data[k];
	str.length = s.length - j + t.length;
	return str;
}
void DispStr(SqString s)
{
	if (s.length > 0)
	{
		for (int i = 0; i < s.length; i++)
			printf("%c", s.data[i]);
		printf("\n");
	}
}

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
void CreateBTree(BTNode*& b, const char* str)
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

//#include"btree.cpp"      //包含二叉树的基本运算算法
//#include<sqstring.cpp"   //包含顺序串的基本运算算法
int i = 0;
SqString PreOrderSeq(BTNode* b)
{
	SqString str, str1, leftstr, rightstr;
	if (b == NULL)
	{
		StrAssign(str, "#");
		return str;
	}
	str.data[0] = b->data;
	str.length = 1;
	leftstr = PreOrderSeq(b->lchild);
	str1 = Concat(str, leftstr);
	rightstr = PreOrderSeq(b->rchild);
	str = Concat(str1, rightstr);
	return str;
}
BTNode* CreatePreSeq(SqString str)
{
	BTNode* b;
	char value;
	if (i >= str.length)
		return NULL;
	value = str.data[i];
	i++;
	if (value == '#')
		return NULL;
	b = (BTNode*)malloc(sizeof(BTNode));
	b->data = value;
	b->lchild = CreatePreSeq(str);
	b->rchild = CreatePreSeq(str);
	return b;
}

void GetNext(SqString t, int next[])
{
	int j, k;
	j = 0;
	k = -1;
	next[0] = -1;
	while (j < t.length - 1)
	{
		if (k == -1 || t.data[j] == t.data[k])
		{
			j++;
			k++;
			next[j] = k;
		}
		else
			k = next[k];
	}
}
int KMPIndex(SqString s, SqString t)
{
	int next[MaxSize], i = 0, j = 0;
	GetNext(t, next);
	while (i < s.length && j < t.length)
	{
		if (j == -1 || s.data[i] == t.data[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j >= t.length)
		return i - t.length;
	else
		return -1;
}
	//include<preseq.cpp>
	//GetNext和KMPIndex函数的代码参见本书第4章实验3

	bool isSubtree(BTNode * b1, BTNode * b2)
	{
		SqString s1 = PreOrderSeq(b1);
		SqString s2 = PreOrderSeq(b2);
		if (KMPIndex(s1, s2) != -1)
			return true;
		else
			return false;
	}
	int main()
	{
		BTNode* b1, * b2;
		CreateBTree(b1, "A(B(D,E(,G)),C(,F(H,I)))");
		printf("二叉树b1:");
		DispBTree(b1);
		printf("\n");
		CreateBTree(b2, "C(,F(H,I))");
		printf("二叉树b2:");
		DispBTree(b2);
		printf("\n");
		if (isSubtree(b1, b2))
			printf("结果:b2是b1的子树\n");
		else
			printf("结果:b2不是b1的子树\n");
		DestoryBTree(b1);
		DestoryBTree(b2);
		return 1;
	}


