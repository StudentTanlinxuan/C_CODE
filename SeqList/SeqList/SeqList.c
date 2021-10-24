#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


//��ʼ��
void SeqListInit(SL* ps)
{
	/*ps->capacity = 0;
	ps->size = 0;
	ps->a = NULL;*/
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ռ�ʧ��\n");
		exit(-1);//ֱ�ӽ�������
	}
	ps->capacity = 4;
	ps->size = 0;
}
//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//���������Ҫ����
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType)*ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps);
//����λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);//insert - ����
void SeqListErase(SL* ps, int pos);//erase - ����,ɾ��

//��ӡ
void SeqListPrint(SL*ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}