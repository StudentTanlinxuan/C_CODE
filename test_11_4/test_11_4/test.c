#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
	struct ListNode* slow = pListHead;
	struct ListNode* fast = pListHead;
	while (k--)
	{
		if (fast)
		{
			fast = fast->next;
		}
		else
		{
			return NULL;
		}
	}
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}
int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val = 1;
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n2->val = 2;
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n3->val = 3;
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n4->val = 4;
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n5->val = 5;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	struct ListNode* ret = FindKthToTail(n1, 3);
	return 0;
}

