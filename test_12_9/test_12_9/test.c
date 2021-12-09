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
//从栈顶插入元素
//入栈
void StackPush(ST* ps, TYDataType X);
//出栈
void StackPop(ST* ps);
//查找栈顶元素
TYDataType StackTop(ST* ps);
//求栈中的元素个数
int StackSize(ST* ps);
//判断栈是否为空
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
	//若top取0，则top指向栈顶元素的下一个
	//若top取-1，则top指向栈顶元素
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
//从栈顶插入元素
//入栈
void StackPush(ST* ps, TYDataType X)
{
	assert(ps);
	//如果满了,则需要扩容
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
//出栈
void StackPop(ST* ps)
{
	assert(ps);
	//如果栈空了，调用Pop，直接终止程序报错
	assert(ps->top > 0);
	ps->top--;
}
//查找栈顶元素
TYDataType StackTop(ST* ps)
{
	assert(ps);
	//如果栈空了，调用Top，直接终止程序报错
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//求栈中的元素个数
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//判断栈是否为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
//用栈实现队列
//请你仅使用两个栈实现先入先出队列。
//队列应当支持一般队列支持的所有操作（push、pop、peek、empty)
// 实现 MyQueue 类：
//void push(int x) 将元素 x 推到队列的末尾
//int pop() 从队列的开头移除并返回元素
//int peek() 返回队列开头的元素
//boolean empty() 如果队列为空，返回 true ；否则，返回 false
// https://leetcode-cn.com/problems/implement-queue-using-stacks/
//创建两个栈
typedef struct {
	ST st1;
	ST st2;
} MyQueue;

//初始化
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
//入队
void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->st1, x);
}
//出队
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
//返回队开头的元素
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
//判断队列是否为空
bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->st1) && StackEmpty(&obj->st2);
}
//销毁队列
void myQueueFree(MyQueue* obj) {
	StackDestory(&obj->st1);
	StackDestory(&obj->st2);
	free(obj);
}


//二叉树的遍历
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//先序遍历
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

//中序遍历
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

//后序遍历
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
	//创建一个简单的二叉树
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