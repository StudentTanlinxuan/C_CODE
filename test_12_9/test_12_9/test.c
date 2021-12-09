#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
typedef int TYDataType;
typedef struct Skack
{
	TYDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
//��ջ������Ԫ��
//��ջ
void StackPush(ST* ps, TYDataType X);
//��ջ
void StackPop(ST* ps);
//����ջ��Ԫ��
TYDataType StackTop(ST* ps);
//��ջ�е�Ԫ�ظ���
int StackSize(ST* ps);
//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* ps);


void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (TYDataType*)malloc(sizeof(TYDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 4;
	//��topȡ0����topָ��ջ��Ԫ�ص���һ��
	//��topȡ-1����topָ��ջ��Ԫ��
	ps->top = 0;
}
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}
//��ջ������Ԫ��
//��ջ
void StackPush(ST* ps, TYDataType X)
{
	assert(ps);
	//�������,����Ҫ����
	if (ps->top == ps->capacity)
	{
		TYDataType* tmp = (TYDataType*)realloc(ps->a, sizeof(TYDataType) * (ps->capacity * 2));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = X;
	ps->top++;
}
//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	//���ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
	assert(ps->top > 0);
	ps->top--;
}
//����ջ��Ԫ��
TYDataType StackTop(ST* ps)
{
	assert(ps);
	//���ջ���ˣ�����Top��ֱ����ֹ���򱨴�
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//��ջ�е�Ԫ�ظ���
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
//��ջʵ�ֶ���
//�����ʹ������ջʵ�������ȳ����С�
//����Ӧ��֧��һ�����֧�ֵ����в�����push��pop��peek��empty)
// ʵ�� MyQueue �ࣺ
//void push(int x) ��Ԫ�� x �Ƶ����е�ĩβ
//int pop() �Ӷ��еĿ�ͷ�Ƴ�������Ԫ��
//int peek() ���ض��п�ͷ��Ԫ��
//boolean empty() �������Ϊ�գ����� true �����򣬷��� false
// https://leetcode-cn.com/problems/implement-queue-using-stacks/
//��������ջ
typedef struct {
	ST st1;
	ST st2;
} MyQueue;

//��ʼ��
MyQueue* myQueueCreate() {
	MyQueue* ps = (MyQueue*)malloc(sizeof(MyQueue));
	if (ps == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	StackInit(&ps->st1);
	StackInit(&ps->st2);
	return ps;
}
//���
void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->st1, x);
}
//����
int myQueuePop(MyQueue* obj) {
	if (StackEmpty(&obj->st2))
	{
		while (StackSize(&obj->st1) > 0)
		{
			StackPush(&obj->st2, StackTop(&obj->st1));
			StackPop(&obj->st1);
		}
	}
	int top = StackTop(&obj->st2);
	StackPop(&obj->st2);
	return top;
}
//���ضӿ�ͷ��Ԫ��
int myQueuePeek(MyQueue* obj) {
	if (StackEmpty(&obj->st2))
	{
		while (StackSize(&obj->st1) > 0)
		{
			StackPush(&obj->st2, StackTop(&obj->st1));
			StackPop(&obj->st1);
		}
	}
	return StackTop(&obj->st2);
}
//�ж϶����Ƿ�Ϊ��
bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->st1) && StackEmpty(&obj->st2);
}
//���ٶ���
void myQueueFree(MyQueue* obj) {
	StackDestory(&obj->st1);
	StackDestory(&obj->st2);
	free(obj);
}


//�������ı���
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//�������
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

//�������
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}

//�������
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}

int main()
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

	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");
	return 0;
}