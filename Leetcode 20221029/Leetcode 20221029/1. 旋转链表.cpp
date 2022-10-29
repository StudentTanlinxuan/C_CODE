//#include<iostream>
//
//using namespace std;
////Definition for singly - linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//ListNode* rotateRight(ListNode* head, int k) 
//{
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	ListNode* cur = head;
//	int count = 1;
//	while (cur->next != NULL)
//	{
//		cur = cur->next;
//		count++;
//	}
//	k = k % count;
//	while (k--)
//	{
//		ListNode* cur = head;
//		ListNode* prev = head;
//
//		while (cur->next != NULL)
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//
//		cur->next = head;
//		head = cur;
//		prev->next = NULL;
//	}
//	return head;
//}
//int main()
//{
//	ListNode* l1 = new ListNode();
//		ListNode* l2 = new ListNode();
//		ListNode* l3 = new ListNode();
//		ListNode* l4 = new ListNode();
//		ListNode* l5 = new ListNode();
//	
//		l1->val = 1;
//		l1->next = l2;
//		l2->val = 2;
//		l2->next = NULL;
//		/*l2->next = l3;
//		l3->val = 2;
//		l3->next = NULL;*/
//		//l3->next = l4;
//		//l4->val = 4;
//		//l4->next = l5;
//		//l5->val = 5;
//		//l5->next = NULL;
//		ListNode* ret = rotateRight(l1, 1);
//		cout << ret->val << endl;
//		cout << ret->val << endl;
//		cout << ret->val << endl;
//	return 0;
//}