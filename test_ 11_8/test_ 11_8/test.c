#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
////环形链表
////给定一个链表，判断链表中是否有环
////https:leetcode-cn.com/problems/linked-list-cycle/
////bool hasCycle(struct ListNode *head) {
//int hasCycle(struct ListNode *head) {
//	struct ListNode* slow = head;
//	struct ListNode* fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			//return true;
//			return 1;//ture == 1
//		}
//	}
//	//return false;
//	return 0;//false == 0
//}

////环形链表2
////给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null
////https://leetcode-cn.com/problems/linked-list-cycle-ii/
//struct ListNode *detectCycle(struct ListNode *head) {
//	ListNode* fast, *slow;
//	fast = slow = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			break;
//		}
//	}
//	if (fast == NULL || fast->next == NULL)
//	{
//		return NULL;
//	}
//	ListNode* meet = fast;
//	while (meet != head)
//	{
//		meet = meet->next;
//		head = head->next;
//	}
//	return meet;
//}

//复制带随机指针的链表
//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，
//该指针可以指向链表中的任何节点或空节点
//https://leetcode-cn.com/problems/copy-list-with-random-pointer/
struct Node {
	int val;
	struct Node *next;
	struct Node *random;
};
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
	{
		return NULL;
	}
	//1.copy
	Node* cur = head;
	while (cur)
	{
		Node* copy = (Node*)malloc(sizeof(Node));
		copy->next = NULL;
		copy->random = NULL;
		Node* next = cur->next;
		copy->val = cur->val;
		cur->next = copy;
		copy->next = next;
		//迭代
		cur = next;
	}
	//2.复制random
	cur = head;
	while (cur)
	{
		Node* copy = cur->next;
		Node* next = copy->next;
		if (cur->random)
		{
			copy->random = cur->random->next;
		}
		else
		{
			copy->random = NULL;
		}
		cur = next;
	}
	//3.拆解
	cur = head;
	Node* copyHead = head->next;
	while (cur)
	{
		Node* copy = cur->next;
		Node* next = copy->next;
		cur->next = next;
		if (next)
		{
			copy->next = next->next;
		}
		else
		{
			copy->next = NULL;
		}
		cur = next;
	}
	return copyHead;

}