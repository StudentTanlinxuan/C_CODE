#include<iostream>

using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

//// 这样子只能复制基本的链表
//Node* copyRandomList1(Node* head) {
//    Node* newhead = new Node(0);
//
//    Node* cur = head;
//
//    Node* prev = newhead;
//    while (cur != NULL)
//    {
//        Node* temp = new Node(cur->val);
//        prev->next = temp;
//
//        cur = cur->next;
//        prev = temp;
//    }
//    return newhead->next;
//}
Node* copyRandomList(Node* head) 
{
    Node* cur = head;
    Node* temp = new Node(0);
    while (cur != NULL)
    {
        temp = new Node(cur->val);
        Node* Next = cur->next;
        cur->next = temp;
        temp->next = Next;
        cur = Next;
    }

    cur = head;
    Node* newcur = cur->next;
    Node* newcurprev = newcur;

    while (newcur != NULL)
    {
        newcur->random = cur->random->next;
        cur = newcur->next;
        newcurprev = newcur;
        if (cur == NULL)
        {
            //newcur = cur->next;
            break;
        }
        newcur = cur->next;
        newcurprev->next = newcur;
    }
    return head->next;
}
int main()
{
    Node* n1 = new Node(7);
    Node* n2 = new Node(13);
    Node* n3 = new Node(11);
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    n1->random = n3;
    n2->random = n1;
    n3->random = n2;

    Node* ret = copyRandomList(n1);

	return 0;
}