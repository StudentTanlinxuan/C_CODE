//#include<iostream>
//
//using namespace std;
//// Definition for singly - linked list.
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//ListNode* reverseList(ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    ListNode* prev = NULL;
//    ListNode* cur = head;
//    ListNode* Next = head->next;
//
//    while (cur != NULL)
//    {
//        cur->next = prev;
//        prev = cur;
//        cur = Next;
//        if (Next != NULL)
//        {
//            Next = Next->next;
//        }
//    }
//    return prev;
//}
//int main()
//{
//    ListNode* p1 = new ListNode(1);
//    ListNode* p2 = new ListNode(3);
//    ListNode* p3 = new ListNode(2);
//    p1->next = p2;
//    p2->next = p3;
//    p3->next = NULL;
//
//    ListNode* ret = reverseList(p1);
//	return 0;
//}