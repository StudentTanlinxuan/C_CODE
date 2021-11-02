#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"
void SListNodeTest2()
{
	SListNode* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListprint(phead);
	/*SListNode* pos = SListFind(phead, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListprint(phead);*/
	SListNode* pos = SListFind(phead, 2);
	if (pos)
	{
		//SListInsertAfter(pos, 20);
		SListEraseAfter(pos);
	}
	SListprint(phead);

}
void SListNodeTest1()
{
	SListNode* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListprint(phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListprint(phead);
	SListPushFront(&phead, 1);
	SListPushFront(&phead, 2);
	SListPushFront(&phead, 3);
	SListPushFront(&phead, 4);
	SListPushFront(&phead, 5);
	SListprint(phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPopFront(&phead);

	SListprint(phead);

}
int main()
{
	//SListNodeTest1();
	SListNodeTest2();

	return 0;
}