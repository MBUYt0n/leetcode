#include <iostream>
#include <vector>

using namespace std;
struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr)
	{
	}
	ListNode(int x) : val(x), next(nullptr)
	{
	}
	ListNode(int x, ListNode *next) : val(x), next(next)
	{
	}
};

class Solution
{
  public:
	ListNode *removeNthFromEnd(ListNode *head, int n)
	{
		ListNode *temp = head;
		while (n > 0)
		{
			temp = temp->next;
			n--;
		}
		if (temp == nullptr)
		{
			temp = head;
			head = head->next;
			delete temp;
			return head;
		}
		else
		{
			ListNode *temp2 = head;
			while (temp->next != nullptr)
			{
				temp = temp->next;
				temp2 = temp2->next;
			}
			temp = temp2->next;
			temp2->next = temp2->next->next;
			delete temp;
			return head;
		}
	}
};

int main()
{
	Solution s;
	ListNode *node4 = new ListNode(1);
	ListNode *node3 = new ListNode(2, node4);
	ListNode *node2 = new ListNode(3, node3);
	ListNode *node1 = new ListNode(4, node2);
	ListNode *head = node1;

	ListNode *current = head;
	while (current != nullptr)
	{
		cout << current->val << " -> ";
		current = current->next;
	}

	head = s.removeNthFromEnd(head, 2);
	cout << "\n";
	current = head;
	while (current != nullptr)
	{
		cout << current->val << " -> ";
		current = current->next;
	}
}