//#include<iostream>
//
//using namespace std;
//
//// Definition for singly - linked list.
//struct ListNode 
//{
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* removeNthFromEnd(ListNode* head, int n) 
//{
//	// 如果链表只有一个值，直接返回NULL
//	if (head->next == NULL)
//	{
//		return NULL;
//	}
//	// 先统计一下链表总共有几个节点
//	ListNode* p = head;
//	int count = 0;
//	while (p != NULL)
//	{
//		count++;
//		p = p->next;
//	}
//	// 如果返回倒数第n个节点和链表总个数相同，直接返回头节点的下一个节点
//	if (n == count)
//	{
//		return head->next;
//	}
//	// pos就是头节点往后走多少步
//	int pos = count - n;
//	ListNode* cur = head;
//	ListNode* prev = cur;
//	while (pos--)
//	{
//		// 往后走一步，用prev记录cur的上一个节点
//		prev = cur;
//		cur = cur->next;
//	}
//	// 将prev的next指向cur的next，同时将cur置空
//	prev->next = cur->next;
//	cur = NULL;
//	return head;
//}
//
//int main()
//{
//	ListNode* l1 = new ListNode();
//	ListNode* l2 = new ListNode();
//	ListNode* l3 = new ListNode();
//	ListNode* l4 = new ListNode();
//	ListNode* l5 = new ListNode();
//
//	l1->val = 1;
//	l1->next = l2;
//	l2->val = 2;
//	l2->next = NULL;
//	/*l2->next = l3;
//	l3->val = 3;
//	l3->next = l4;
//	l4->val = 4;
//	l4->next = l5;
//	l5->val = 5;
//	l5->next = NULL;*/
//	ListNode* ret = removeNthFromEnd(l1, 2);
//	cout << ret->val << endl;
//	cout << ret->val << endl;
//	cout << ret->val << endl;
//
//	return 0;
//}