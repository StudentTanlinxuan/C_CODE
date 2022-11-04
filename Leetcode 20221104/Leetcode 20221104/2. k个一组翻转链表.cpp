#include<iostream>

// Definition for singly - linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
using namespace std;
ListNode* reverseKGroup(ListNode* head, int k) 
{
	ListNode* prev = head;
	ListNode* cur = prev->next;
	ListNode* next = cur->next;
	ListNode* c = head;
	int count = 0;
	while (c != NULL)
	{
		count++;
		c = c->next;
	}
	c = head;
	int m = count - 2;
	while (count--)
	{
		c = c->next;
	}

	cur->next = c->next;
	
}
int main()
{

	return 0;
}