#include<iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        //if (l1->next == NULL)
        //{
        //    return l2;
        //}
        //if (l2->next == NULL)
        //{
        //    return l1;
        //}
        int len1 = 1;
        int len2 = 1;
        while (h1->next != NULL)
        {
            len1++;
            h1 = h1->next;
        }
        while (h2->next != NULL)
        {
            len2++;
            h2 = h2->next;
        }
        if (len1 > len2)
        {
            for (int i = 1; i < len1 - len2; i++)
            {
                h2->next = new ListNode(0);
                h2 = h2->next;
            }
        }
        else
        {
            for (int i = 1; i < len2 - len1; i++)
            {
                h1->next = new ListNode(0);
                h1 = h1->next;
            }
        }
        h1 = l1;
        h2 = l2;
        ListNode* suml = new ListNode(-1);
        ListNode* sh = suml;
        int sum = 0;
        bool count = false;
        while (h1 != NULL && h2 != NULL)
        {
            sum = h1->val + h2->val + count;
            sh->next = new ListNode(sum % 10);
            count = sum > 10 ? true : false;
            h1 = h1->next;
            h2 = h2->next;
            sh = sh->next;
        }
        if (count)
        {
            sh->next = new ListNode(1);
            sh = sh->next;
        }
        return suml->next;
    }


int main()
{
	return 0;
   
}