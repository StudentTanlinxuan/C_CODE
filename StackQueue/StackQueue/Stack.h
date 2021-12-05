#pragma once

#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
//#define MaxSize 100
//typedef struct Skack
//{
//	TYDataType a[MaxSize];
//	int top;
//}ST;
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

