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

