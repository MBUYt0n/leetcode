#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode *minimum(vector<ListNode *> &lists) {
        ListNode *min = nullptr;
        for (ListNode *temp : lists) {
            if (temp != nullptr){
                if (min == nullptr || temp->val < min->val) {
                    min = temp;
                    temp = temp->next;
                }
            }
        }
    }
    void mergeKLists(vector<ListNode *> &lists) { ListNode *head = nullptr; }
};

int main() {
    // Create linked list 1: 1 -> 4 -> 5
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    // Create linked list 2: 1 -> 3 -> 4
    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    // Create linked list 3: 2 -> 6
    ListNode *list3 = new ListNode(2);
    list3->next = new ListNode(6);

    // Store the heads of the linked lists in a vector
    vector<ListNode *> lists = {list1, list2, list3};

    // Create a Solution object and call mergeKLists
    Solution s;
    s.mergeKLists(lists);

    // Clean up memory
    delete list1->next->next;
    delete list1->next;
    delete list1;
    delete list2->next->next;
    delete list2->next;
    delete list2;
    delete list3->next;
    delete list3;

    return 0;
}