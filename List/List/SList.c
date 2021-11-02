#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

SListNode* BuySListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
void SListPushBack(SListNode* *pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//��β
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	

}
void SListprint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPopBack(SListNode* *pphead)
{
	//1.����Ϊ��
	//2.����ֻ��һ�����
	//3.���>=2
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//��β
		SListNode* tail = *pphead;
		SListNode* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

void SListPushFront(SListNode* *pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

void SListPopFront(SListNode* *pphead)
{
	//1.���Ϊ��
	//2.���Ϊһ�� + 3.���Ϊһ������
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		//*pphead = (*pphead)->next;
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}

SListNode* SListFind(SListNode* phead, SListDataType x)
{
	SListNode* cur = phead;
	while (cur->next)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return 0;
}

void SListInsertAfter(SListNode* pos, SListDataType x)
{
	assert(pos);
	SListNode*newNode = BuySListNode(x);
	newNode->next = pos->next;
	pos->next = newNode;
}

void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next)
	{
		SListNode* next = pos->next;
		SListNode* nextnext = next->next;
		pos->next = nextnext;
		free(next);
	}
}