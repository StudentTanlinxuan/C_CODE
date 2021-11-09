#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
////��������
////����һ�������ж��������Ƿ��л�
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

////��������2
////����һ��������������ʼ�뻷�ĵ�һ���ڵ㡣 ��������޻����򷵻� null
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

//���ƴ����ָ�������
//����һ������Ϊ n ������ÿ���ڵ����һ���������ӵ����ָ�� random ��
//��ָ�����ָ�������е��κνڵ��սڵ�
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
		//����
		cur = next;
	}
	//2.����random
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
	//3.���
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