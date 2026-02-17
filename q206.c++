#include <iostream>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL)
	{
	}
};

class Solution
{
  public:
	ListNode *reverseList(ListNode *head)
	{
		if (head == NULL || head->next == NULL)
			return head;
		ListNode *temp = reverseList(head->next);
		head->next->next = head;
		head->next = NULL;
		return temp;
	}
    
	ListNode *reverseListIter(ListNode *head)
	{
		ListNode *temp = head;
		ListNode *prev = NULL;
		while (temp != NULL)
		{
			temp = head->next;
			head->next = prev;
			prev = head;
			head = temp;
		}
		return prev;
	}
};
