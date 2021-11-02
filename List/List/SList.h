#pragma once
#include<stdio.h>

#include<assert.h>
#include<stdlib.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

void SListPushBack(SListNode* *pphead, SListDataType x);
void SListPopBack(SListNode* *pphead);
void SListPushFront(SListNode* *pphead, SListDataType x);
void SListPopFront(SListNode* *pphead);
SListNode* SListFind(SListNode* phead, SListDataType x);
void SListprint(SListNode* phead);
//单链表在pos位置之后插入?
//分析思考为什么不在pos位置之前插入?
void SListInsertAfter(SListNode* pos, SListDataType x);//insert - 插入
//单链表在pos位置之后插入?
//分析思考为什么不在pos位置之前插入?
void SListEraseAfter(SListNode* pos);//erase - 擦掉