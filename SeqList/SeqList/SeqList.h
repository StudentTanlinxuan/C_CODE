#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;
//#define N 10
//
////��̬˳������(�̶���С��)
////˳�����Ч�����������б�����������
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

//��̬˳������(��С�ɱ��)
typedef struct SeqList
{
	SLDataType* a;
	int size;//��Ч���ݸ���
	int capacity;//����
}SL, SeqList;

//��ʼ��
void SeqListInit(SL* ps);
//��ӡ
void SeqListPrint(SL*ps);
//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//����λ�õĲ���ɾ��
void SeqListInsert(SL* ps,int pos, SLDataType x);//insert - ����
void SeqListErase(SL* ps,int pos);//erase - ����,ɾ��
