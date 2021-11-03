#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
////��ת����
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
//		//��ת
//		n2->next = n1;
//		//����
//		n1 = n2;
//		n2 = n3;
//		if (n3)
//		{
//			n3 = n3->next;
//		}
//	}
//	return n1;
//}

//�Ƴ������е�Ԫ��
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

//�����е��м���
//����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next)//�˴�һ��Ҫ��&&,ѭ���ǽ���������
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
//���ٵ��ڱ������й�������oj��Ĳ�������
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