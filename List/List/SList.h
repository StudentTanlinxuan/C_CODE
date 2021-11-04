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
//��������posλ��֮�����?
//����˼��Ϊʲô����posλ��֮ǰ����?
void SListInsertAfter(SListNode* pos, SListDataType x);//insert - ����
//��������posλ��֮�����?
//����˼��Ϊʲô����posλ��֮ǰ����?
void SListEraseAfter(SListNode* pos);//erase - ����