#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;
//#define N 10
//
////静态顺序表设计(固定大小的)
////顺序表，有效数据在数组中必须是连续的
//struct SeqList
//{
//	SLDataType arr[N];
//	int size;
//};
//
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps); 

//动态顺序表设计(大小可变的)
typedef struct SeqList
{
	SLDataType* a;
	int size;//有效数据个数
	int capacity;//容量
}SL, SeqList;

//初始化
void SeqListInit(SL* ps);
//打印
void SeqListPrint(SL*ps);
//尾插尾删  头插头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//任意位置的插入删除
void SeqListInsert(SL* ps,int pos, SLDataType x);//insert - 插入
void SeqListErase(SL* ps,int pos);//erase - 擦掉,删除
