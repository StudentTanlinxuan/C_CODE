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
	//assert(ps);
	////���������Ҫ����
	//SeqListCheckCapacity(ps);
	//ps->a[ps->size] = x;
	//ps->size++;
	SeqListInsert(ps, ps->size, x);
}
void SeqListPopBack(SL* ps)
{
	//assert(ps);
	////ps->a[ps->size - 1] = 0;
	//ps->size--;
	SeqListErase(ps, ps->size - 1);
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	/*assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;*/
	SeqListInsert(ps, 0, x);
}
void SeqListPopFront(SL* ps)
{
	/*assert(ps);
	int start = 0;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;*/
	SeqListErase(ps, 0);
}
//����λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0);
	int start = pos;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}

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
//����Ƿ���Ҫ����
void SeqListCheckCapacity(SL*ps)
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
}

//�ͷ�
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
}

//����
int SeqListFind(SL* ps, SLDataType x)
{
	int i = 0;
	while (i < ps->size)
	{
		if (x == ps->a[i])
		{
			return i;
		}
		else
		{
			i++;
		}
	}
	return -1;
}