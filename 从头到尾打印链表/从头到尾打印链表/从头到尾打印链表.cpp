#include<iostream>
#include<vector>
#include<stack>

// Definition for singly - linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
    
};
using namespace std;
//vector<int> reversePrint(ListNode* head) 
//{
//
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
//    head = prev;
//
//    vector<int> ret;
//    ListNode* p = head;
//    while (p != NULL)
//    {
//        ret.push_back(p->val);
//        p = p->next;
//    }
//    return ret;
//}
vector<int> reversePrint(ListNode* head)
{
    ListNode* p = head;
    stack<int> temp;
    while (p->next != NULL)
    {
        temp.push(p->val);
        p = p->next;
    }
    temp.push(p->val);

    cout << temp.size() << endl;
    vector<int> ret;
    while (temp.size())
    {
        ret.push_back(temp.top());
        temp.pop();
    }
    return ret;
}
int main()
{
    ListNode* p1 = new ListNode(1);
    ListNode* p2 = new ListNode(3);
    ListNode* p3 = new ListNode(2);
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;

    vector<int> ret = reversePrint(p1);
    cout << *ret.begin() << endl;
	return 0;
}