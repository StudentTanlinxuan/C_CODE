#include"List.h"

void TestListNode3()
{
	ListNode* phead = ListInit();
	ListNodePushBack(phead, 1);
	ListNodePushBack(phead, 2);
	ListNodePushBack(phead, 3);
	ListNodePushBack(phead, 4);
	ListNodePrint(phead);
	ListNode* pos = ListFind(phead, 3);
	ListInsert(pos, 30);
	ListNodePrint(phead);
	ListErase(pos);
	ListNodePrint(phead);
	ListDestory(phead);

}
void TestListNode2()
{
	ListNode* phead = ListInit();
	ListNodePushBack(phead, 1);
	ListNodePushBack(phead, 2);
	ListNodePushBack(phead, 3);
	ListNodePushBack(phead, 4);
	ListNodePrint(phead);
	ListNodePopFront(phead);
	ListNodePopFront(phead);
	ListNodePopFront(phead);
	/*ListNodePopFront(phead);
	ListNodePopFront(phead);*/
	ListNodePrint(phead);
	ListNodePushFront(phead, 5);
	ListNodePushFront(phead, 6);
	ListNodePushFront(phead, 7);
	ListNodePushFront(phead, 8);
	ListNodePrint(phead);
	ListDestory(phead);

}
void TestListNode1()
{
	/*ListNode* phead;
	ListInit(&phead);*/
	ListNode* phead = ListInit();
	ListNodePushBack(phead, 1);
	ListNodePushBack(phead, 2);
	ListNodePushBack(phead, 3);
	ListNodePushBack(phead, 4);
	ListNodePrint(phead);

	ListNodePopBack(phead);
	ListNodePopBack(phead);
	ListNodePrint(phead);
	ListDestory(phead);
}
int main()
{
	//TestListNode1();
	//TestListNode2();
	TestListNode3();

	return 0;
}