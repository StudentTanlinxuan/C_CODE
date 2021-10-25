#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


//初始化
void SeqListInit(SL* ps)
{
	/*ps->capacity = 0;
	ps->size = 0;
	ps->a = NULL;*/
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("申请内存空间失败\n");
		exit(-1);//直接结束程序
	}
	ps->capacity = 4;
	ps->size = 0;
}
//尾插尾删  头插头删
void SeqListPushBack(SL* ps, SLDataType x)
{
	//assert(ps);
	////如果满了需要增容
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
//任意位置的插入删除
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

//打印
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
//检查是否需要扩容
void SeqListCheckCapacity(SL*ps)
{
	assert(ps);
	//如果满了需要增容
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType)*ps->capacity);
		if (ps->a == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}
	}
}

//释放
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
}

//查找
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