#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
//链表分割(牛客)
//现有一链表的头指针 ListNode* pHead，给一定值x，
//编写一段代码将所有小于x的结点排在其余结点之前，
//且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
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
//	greattail->next = NULL;//此处一定要将greattail->next置空,避免出现环链表
//	lesstail->next = greathead->next;
//	free(greathead);
//	ListNode* reallyhead = lesshead->next;
//	free(lesshead);
//	return reallyhead;
//}
////链表的回文结构(牛客)
////对于一个链表，请设计一个时间复杂度为O(n), 额外空间复杂度为O(1)的算法，
////判断其是否为回文结构。
////给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。
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
//			return 0;//0表示flase
//		}
//		else
//		{
//			A = A->next;
//			slow = slow->next;
//		}
//	}
//	return 1;//1表示ture
//}
//相交链表(leetcode)
//给你两个单链表的头节点 headA 和 headB ，
//请你找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 。
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