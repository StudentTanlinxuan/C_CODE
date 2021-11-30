#include"List.h"

ListNode* BuyListNode(LTDateType X)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode != NULL)
	{
		newNode->data = X;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	return newNode;
}
void ListNodePushBack(ListNode* phead, LTDateType X)
{
	assert(phead);
	ListNode* newNode = BuyListNode(X);
	ListNode* tail = phead->prev;
	tail->next = newNode;
	newNode->prev = tail;

	newNode->next = phead;
	phead->prev = newNode;
}
//void  ListInit(ListNode** pphead)
//{
//	* pphead = BuyListNode(0);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void ListClear(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	//清理所有数据的节点，保留头节点，可以继续使用
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	phead->next = phead;
	phead->prev = phead;
}
void ListDestory(ListNode* phead)
{
	assert(phead);
	//销毁
	ListClear(phead);
	free(phead);
}
void ListNodePrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListNodePopBack(ListNode* phead)
{
	assert(phead);
	/*if (phead->next == phead)
		exit(-1);*/
	//更优化的方法,采用assert
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	phead->prev = tailprev;
	tailprev->next = phead;
	free(tail);
	tail = NULL;
}
void ListNodePushFront(ListNode* phead, LTDateType X)
{
	assert(phead);
	ListNode* newNode = BuyListNode(X);
	ListNode* first = phead->next;
	phead->next = newNode;
	newNode->prev = phead;

	newNode->next = first;
	first->prev = newNode;
}
void ListNodePopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->prev = phead;
	free(first);
	first = NULL;
}
ListNode* ListFind(ListNode* phead, LTDateType X)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur->next != phead)
	{
		if (cur->data == X)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
//在pos前面插入X
void ListInsert(ListNode* pos, LTDateType X)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newNode = BuyListNode(X);
	posPrev->next = newNode;
	newNode->prev = posPrev;

	newNode->next = pos;
	pos->prev = newNode;
}
//删除pos位置
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
	pos = NULL;
}