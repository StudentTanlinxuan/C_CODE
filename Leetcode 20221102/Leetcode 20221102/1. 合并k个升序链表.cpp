#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// Definition for singly - linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};
int GetListSize(ListNode* l)
{
	ListNode* head = l;
	int count = 0;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return count;
}
ListNode* mergeKLists(vector<ListNode*>& lists) 
{
	int count = 0;
	for (int i = 0; i < lists.size(); i++)
	{
		if (GetListSize(lists[i]) == 0)
		{
			cout << "hh" << endl;
			cout << i << endl;
			cout << lists[i] << endl;
			lists.erase(find(lists.begin(), lists.end(), lists[i]));
			i -= 1;
		}
		else
		{
			count += GetListSize(lists[i]);
		}
	}
	cout << count << endl;
	ListNode* result = new ListNode(0);
	ListNode* p = result;
	while (count--)
	{
		int val = 999;
		for (int i = 0; i < lists.size(); i++)
		{
			val = min(val, lists[i]->val);
		}
		cout << "val = " << val << endl;
		// ²éÏÂ±ê
		int pos = 0;
		for (int i = 0; i < lists.size(); i++)
		{
			if (val == lists[i]->val)
			{
				pos = i;
				break;
			}
		}
		cout << "pos = " << pos << endl;
		p->next = lists[pos];
		p = p->next;
		lists[pos] = lists[pos]->next;
		if (lists[pos] == NULL)
		{
			lists.erase(find(lists.begin(), lists.end(), lists[pos]));
		}
	}
	return result->next;

}

int main()
{
	vector<ListNode*> list;
	ListNode* l1 = new ListNode(0);
	ListNode* l2 = new ListNode(1);
	ListNode* l3 = new ListNode(2);
	l1->next = l2;
	l2->next = l3;
	l3->next = NULL;
	list.push_back(l1);
	ListNode* l4 = new ListNode(-10);
	ListNode* l5 = new ListNode(-8);
	ListNode* l6 = new ListNode(-5);
	ListNode* l7 = new ListNode(-4);
	l4->next = l5;
	l5->next = l6;
	l6->next = l7;
	l7->next = NULL;
	list.push_back(l4);

	//ListNode* l7 = new ListNode(1);
	ListNode* l8 = NULL;
	//l7->next = l8;
	//l8->next = NULL;
	list.push_back(l8);

	ListNode* l9 = NULL;
	list.push_back(l9);

	ListNode* l10 = new ListNode(-3);
	l10->next = NULL;
	list.push_back(l10);


	ListNode* ret = mergeKLists(list);

	return 0;
}