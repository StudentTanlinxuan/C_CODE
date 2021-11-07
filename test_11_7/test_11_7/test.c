#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
//����ָ�(ţ��)
//����һ�����ͷָ�� ListNode* pHead����һ��ֵx��
//��дһ�δ��뽫����С��x�Ľ������������֮ǰ��
//�Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣
//ListNode* partition(ListNode* pHead, int x) {
//	ListNode* lesshead = NULL, *lesstail = NULL;
//	lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* greathead = NULL, *greattail = NULL;
//	greathead = greattail = (ListNode*)malloc(sizeof(ListNode));
//	if (pHead == NULL || pHead->next == NULL)
//	{
//		return pHead;
//	}
//	//ListNode* cur = pHead;
//	while (pHead)
//	{
//		if (pHead->val < x)
//		{
//			lesstail->next = pHead;
//			pHead = pHead->next;
//			lesstail = lesstail->next;
//		}
//		else
//		{
//			greattail->next = pHead;
//			pHead = pHead->next;
//			greattail = greattail->next;
//		}
//	}
//	greattail->next = NULL;//�˴�һ��Ҫ��greattail->next�ÿ�,������ֻ�����
//	lesstail->next = greathead->next;
//	free(greathead);
//	ListNode* reallyhead = lesshead->next;
//	free(lesshead);
//	return reallyhead;
//}
////����Ļ��Ľṹ(ţ��)
////����һ�����������һ��ʱ�临�Ӷ�ΪO(n), ����ռ临�Ӷ�ΪO(1)���㷨��
////�ж����Ƿ�Ϊ���Ľṹ��
////����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��
//struct ListNode* reverseList(struct ListNode* head) {
//	struct ListNode* newhead = NULL;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = newhead;
//		newhead = cur;
//		cur = next;
//	}
//	return newhead;
//}
//int chkPalindrome(ListNode* A) {
//	ListNode* slow = A;
//	ListNode* fast = A;
//	ListNode* prev = NULL;
//	while (fast && fast->next)
//	{
//		prev = slow;
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	prev->next = NULL;
//	slow = reverseList(slow);
//	while (A)
//	{
//		if (A->val != slow->val)
//		{
//			return 0;//0��ʾflase
//		}
//		else
//		{
//			A = A->next;
//			slow = slow->next;
//		}
//	}
//	return 1;//1��ʾture
//}
//�ཻ����(leetcode)
//���������������ͷ�ڵ� headA �� headB ��
//�����ҳ������������������ཻ����ʼ�ڵ㡣�����������û�н��㣬���� null ��
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	int la = 0;
	ListNode* curA = headA;
	while (curA)
	{
		++la;
		curA = curA->next;
	}
	int lb = 0;
	ListNode* curB = headB;
	while (curB)
	{
		++lb;
		curB = curB->next;
	}
	ListNode* longList = headA;
	ListNode* shortList = headB;
	if (la < lb)
	{
		shortList = headA;
		longList = headB;
	}
	int gap = abs(la - lb);
	while (gap--)
	{
		longList = longList->next;
	}
	while (longList)
	{
		if (longList == shortList)
		{
			return longList;
		}
		longList = longList->next;
		shortList = shortList->next;
	}
	return NULL;
}