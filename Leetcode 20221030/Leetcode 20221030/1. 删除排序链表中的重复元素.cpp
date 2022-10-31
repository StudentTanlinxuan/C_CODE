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
    // ����ǿ������򷵻�NULL
    if (head == NULL)
    {
        return NULL;
    }
    // �������ֻ��һ���ڵ㣬�������ظ����ظ���ֱ�ӷ���ͷ�ڵ㼴��
    if (head->next == NULL)
    {
        return head;
    }
    ListNode* prev = head;
    ListNode* cur = head;
    ListNode* Next = head;
    int s = true; // ������¼��cur��nextָ���val��һ��ʱ�ı�־
    while (Next->next != NULL)
    {
        Next = cur->next;
        if (cur->val == Next->val)
        {
            // �����ҵ�Next��val��cur��val��һ��ʱ
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
            // �����ͷ�ڵ��ظ��Ļ�����ͷ�ڵ��ó�Next
            if (cur == head)
            {
                head = Next;
            }
            // ��curλ�ø�����Next
            cur = Next;
            // �����ʱNextΪ�գ�ֱ������ѭ��
            if (Next == NULL)
            {
                break;
            }
        }
        else
        {
            // �����ʱcur��val��Next��val��һ����Nextû�е�β������ʹprev��nextֱ��ָ��cur����prev��cur֮���ظ���ֱֵ�ӶϿ�
            if (s == false)
            {
                prev->next = cur;
            }
            // prev��¼cur���ϸ�λ�ã�cur������һ��
            prev = cur;
            cur = cur->next;
            //Next = cur->next;
        }
    }
    // ���cur��valֵ��Next��valֵ��һ��ʱ��Next�ߵ�β����ҲҪ��prev��cur֮����ظ�ֵ�Ͽ�
    // ���ǰ���Ѿ��������ӣ�Ҳ��Ӱ�죬��Ϊprev��������cur����һ��λ��
    prev->next = cur;
    // ��󷵻�ͷ�ڵ㼴��
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