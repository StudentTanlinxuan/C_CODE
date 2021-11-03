#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
////反转链表
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	struct ListNode* n1 = NULL, *n2 = head, *n3 = head->next;
//	while (n2)
//	{
//		//翻转
//		n2->next = n1;
//		//迭代
//		n1 = n2;
//		n2 = n3;
//		if (n3)
//		{
//			n3 = n3->next;
//		}
//	}
//	return n1;
//}

//移除链表中的元素
struct ListNode 
{
	int val;
	struct ListNode *next;
};

//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* cur = head, *prev = NULL;
//	while (cur)
//	{
//		if (cur->val == val)
//		{
//			if (cur == head)
//			{
//				head = cur->next;
//				free(cur);
//				cur = head;
//			}
//			else
//			{
//				prev->next = cur->next;
//				free(cur);
//				cur = prev->next;
//			}
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;
//}

//链表中的中间结点
//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next)//此处一定要用&&,循环是结束的条件
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
//快速的在编译器中构建链表oj题的测试用例
int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val = 3;
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n2->val = 2;
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n3->val = 3;
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n4->val = 3;
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n5->val = 5;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	struct ListNode* ret = middleNode(n1, 3);
	return 0;
}