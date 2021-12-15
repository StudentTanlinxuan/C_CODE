#pragma once
#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
//ǰ������
struct BinaryTreeNode;

typedef struct BinaryTreeNode* QDataType;
//����ʹ�õ�����ʵ��
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
//��ʼ��
void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
//��β��
void Queuepush(Queue* pq, QDataType X);
//��ͷ��
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);