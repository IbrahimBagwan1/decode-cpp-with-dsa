#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class containing rotateRight
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find length of list
        ListNode* cur = head;
        int length = 1;
        while (cur->next) {
            cur = cur->next;
            length++;
        }

        // Step 2: Normalize k
        k = k % length;
        if (k == 0) return head;

        // Step 3: Make it circular
        cur->next = head;

        // Step 4: Move to new tail (length - k - 1) steps from start
        ListNode* newTail = head;
        for (int i = 0; i < length - k - 1; i++) {
            newTail = newTail->next;
        }

        // Step 5: Set new head and break circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};

// Function to insert node at the end of the list
void insertAtEnd(ListNode*& head, int val) {
    if (!head) {
        head = new ListNode(val);
        return;
    }

    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new ListNode(val);
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " → ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test
int main() {
    ListNode* head = nullptr;

    // Creating linked list: [1, 2, 3, 4, 5]
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    cout << "Original List: ";
    printList(head);

    int k = 2;
    Solution sol;
    ListNode* rotated = sol.rotateRight(head, k);

    cout << "Rotated List by " << k << ": ";
    printList(rotated);

    return 0;
}
