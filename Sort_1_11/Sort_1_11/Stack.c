#include"Stack.h"

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