#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//����ͷβ����ɾ��
void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFront(&s, -1);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 3, 6);
	SeqListPrint(&s);

	SeqListErase(&s, 3);
	SeqListPrint(&s);

	SeqListPushBack(&s, 1);
	SeqListPrint(&s);

	int pos = SeqListFind(&s, 5);
	if (pos != -1)
	{
		SeqListErase(&s, pos);
	}
	SeqListPrint(&s);

	SeqListDestory(&s);
}
int main()
{
	TestSeqList1();
	return 0;
}
