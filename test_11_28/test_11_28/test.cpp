
#include<stdio.h>
#include<malloc.h>
#define MaxSize 50
typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int Length;
}SqList;
void CreateList(SqList*& L, ElemType a[], int n)
{
	L = (SqList*)malloc(sizeof(SqList));
	for (int i = 0; i < n; i++)
		L->data[i] = a[i];
	L->Length = n;
}
void InitList(SqList*& L)
{
	L = (SqList*)malloc(sizeof(SqList));
	L->Length = 0;
}
void DestoryList(SqList*& L)
{
	free(L);
}
bool ListEmpty(SqList* L)
{
	return(L->Length == 0);
}
int ListLength(SqList* L)
{
	return(L->Length);
}
void DispList(SqList* L)
{
	for (int i = 0; i < L->Length; i++)
		printf("%c", L->data[i]);
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e)
{
	if (i<1 || i>L->Length)
		return false;
	e = L->data[i - 1];
	return true;
}
int LocateElem(SqList* L, ElemType e)
{
	int i = 0;
	while (i < L->Length&& L->data[i] != e)
		i++;
	if (i >= L->Length)
		return 0;
	else
		return i + 1;
}
bool ListInsert(SqList*& L, int i, ElemType e)
{
	int j;
	if (i<1 || i>L->Length + 1 || L->Length == MaxSize)
		return false;
	i--;
	for (j = L->Length; j > i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i] = e;
	L->Length++;
	return true;
}
bool ListDelete(SqList*& L, int i, ElemType& e)
{
	int j;
	if (i<1 || i>L->Length)
		return false;
	i--;
	e = L->data[i];
	for (j = i; j < L->Length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->Length--;
	return true;
}
int main()
{
	SqList* L;
	ElemType e;
	printf("˳���Ļ����������£�\n");
	printf("  ��1����ʼ��˳���L\n");
	InitList(L);
	printf("   ��2�����β���a��b��c��d��eԪ��\n");
	ListInsert(L, 1, 'a');
	ListInsert(L, 2, 'b');
	ListInsert(L, 3, 'c');
	ListInsert(L, 4, 'd');
	ListInsert(L, 5, 'e');
	printf("  ��3�����˳���L��");  DispList(L);
	printf("   (4)˳����ȣ�%d\n", ListLength(L));
	printf("   (5)˳���LΪ%s\n", (ListEmpty(L) ? "��" : "�ǿ�"));
	GetElem(L, 3, e);
	printf("  (6)˳����L������Ԫ�أ�%c\n", e);
	printf("   (7)Ԫ��a��λ��:%d\n", LocateElem(L, 'a'));
	printf("   (8)�ڵ�4��Ԫ��λ���ϲ���fԪ��\n");
	ListInsert(L, 4, 'f');
	printf("   (9)���˳���L:"); DispList(L);
	printf(" ��10��ɾ��L�ĵ�3��Ԫ��\n");
	ListDelete(L, 3, e);
	printf(" (11)���˳���L��"); DispList(L);
	printf("   (12)�ͷ�˳���L\n");
	DestoryList(L);
	return 1;
}