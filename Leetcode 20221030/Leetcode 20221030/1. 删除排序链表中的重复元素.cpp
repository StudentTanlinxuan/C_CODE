#include<iostream>

using namespace std;
// Definition for singly - linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* deleteDuplicates(ListNode* head) 
{
    // 如果是空链表，则返回NULL
    if (head == NULL)
    {
        return NULL;
    }
    // 如果链表只有一个节点，不存在重复不重复，直接返回头节点即可
    if (head->next == NULL)
    {
        return head;
    }
    ListNode* prev = head;
    ListNode* cur = head;
    ListNode* Next = head;
    int s = true; // 用来记录当cur和next指向的val不一样时的标志
    while (Next->next != NULL)
    {
        Next = cur->next;
        if (cur->val == Next->val)
        {
            // 用其找到Next的val和cur的val不一样时
            int quit = true;
            while (quit)
            {
                Next = Next->next;
                if (Next != NULL && cur->val == Next->val)
                {
                    quit = true;
                }
                else
                {
                    quit = false;
                    s = false;
                }
            }
            // 如果是头节点重复的话，将头节点置成Next
            if (cur == head)
            {
                head = Next;
            }
            // 将cur位置更新至Next
            cur = Next;
            // 如果此时Next为空，直接跳出循环
            if (Next == NULL)
            {
                break;
            }
        }
        else
        {
            // 如果此时cur的val和Next的val不一样且Next没有到尾部，则使prev的next直接指向cur，将prev到cur之间重复的值直接断开
            if (s == false)
            {
                prev->next = cur;
            }
            // prev记录cur的上个位置，cur走向下一个
            prev = cur;
            cur = cur->next;
            //Next = cur->next;
        }
    }
    // 如果cur的val值和Next的val值不一样时且Next走到尾部，也要将prev到cur之间的重复值断开
    // 如果前面已经将其连接，也不影响，因为prev本来就是cur的上一个位置
    prev->next = cur;
    // 最后返回头节点即可
    return head;
}

int main()
{
    ListNode* l1 = new ListNode(0);
    ListNode* l2 = new ListNode(1);
    ListNode* l3 = new ListNode(2);
    ListNode* l4 = new ListNode(2);
    ListNode* l5 = new ListNode(3);
    ListNode* l6 = new ListNode(4);
    ListNode* l7 = new ListNode(5);
    l1->next = l2;
    //l2->next = NULL;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    //l5->next = NULL;
    l5->next = l6;
    l6->next = NULL;
    /*l6->next = l7;
    l7->next = NULL;*/
    ListNode* ret = deleteDuplicates(l1);
    cout << ret->val << endl;
	return 0;
}