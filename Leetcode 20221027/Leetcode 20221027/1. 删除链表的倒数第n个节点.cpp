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
//	// �������ֻ��һ��ֵ��ֱ�ӷ���NULL
//	if (head->next == NULL)
//	{
//		return NULL;
//	}
//	// ��ͳ��һ�������ܹ��м����ڵ�
//	ListNode* p = head;
//	int count = 0;
//	while (p != NULL)
//	{
//		count++;
//		p = p->next;
//	}
//	// ������ص�����n���ڵ�������ܸ�����ͬ��ֱ�ӷ���ͷ�ڵ����һ���ڵ�
//	if (n == count)
//	{
//		return head->next;
//	}
//	// pos����ͷ�ڵ������߶��ٲ�
//	int pos = count - n;
//	ListNode* cur = head;
//	ListNode* prev = cur;
//	while (pos--)
//	{
//		// ������һ������prev��¼cur����һ���ڵ�
//		prev = cur;
//		cur = cur->next;
//	}
//	// ��prev��nextָ��cur��next��ͬʱ��cur�ÿ�
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