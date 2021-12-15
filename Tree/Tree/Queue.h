#pragma once
#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
//前置声明
struct BinaryTreeNode;

typedef struct BinaryTreeNode* QDataType;
//队列使用单链表实现
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;
typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;
//初始化
void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
//队尾入
void Queuepush(Queue* pq, QDataType X);
//队头出
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);