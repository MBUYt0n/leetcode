#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp = head;
    int carry = 0;

    while (l1 != NULL || l2 != NULL) {
        int val1 = (l1 != NULL) ? l1->val : 0;
        int val2 = (l2 != NULL) ? l2->val : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        temp->val = sum % 10;

        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;

        if (l1 != NULL || l2 != NULL) {
            temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp = temp->next;
        } else {
            temp->next = NULL;
        }
    }

    if (carry > 0) {
        temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp = temp->next;
        temp->val = carry;
        temp->next = NULL;
    }

    return head;
}


int main() {
    struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp = l1;

    for (int i = 0; i < 3; i++) {
        temp->val = i;
        if (i < 2) {
            temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp = temp->next;
        } else {
            temp->next = NULL;
        }
    }

    temp = l2;
    for (int i = 0; i < 5; i++) {
        temp->val = i;
        if (i < 4) {
            temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp = temp->next;
        } else {
            temp->next = NULL;
        }
    }
    struct ListNode* result = addTwoNumbers(l1, l2);
    while(result != NULL)
    {
        printf("%d\n", result->val);
        result = result->next;
    }
}