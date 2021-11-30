#pragma once
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

typedef int LTDateType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDateType data;
}ListNode;
void ListNodePushBack(ListNode* phead, LTDateType X);
ListNode* BuyListNode(LTDateType X);
//void  ListInit(ListNode** pphead);
ListNode* ListInit();
void ListClear(ListNode* phead);
void ListDestory(ListNode* phead);
void ListNodePrint(ListNode* phead);
void ListNodePopBack(ListNode* phead);
void ListNodePushFront(ListNode* phead, LTDateType X);
void ListNodePopFront(ListNode* phead);
ListNode* ListFind(ListNode* phead, LTDateType X);
void ListInsert(ListNode* pos, LTDateType X);
void ListErase(ListNode* pos);

