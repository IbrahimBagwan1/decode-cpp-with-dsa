#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};

// Function to create a cycle in the linked list at position pos (0-indexed)
// If pos == -1, no cycle is created
void createCycle(ListNode* head, int pos) {
    if (pos == -1) return;

    ListNode* cycleStart = nullptr;
    ListNode* temp = head;
    int index = 0;

    while (temp->next != nullptr) {
        if (index == pos) cycleStart = temp;
        temp = temp->next;
        index++;
    }

    // Link the last node to the cycle start
    temp->next = cycleStart;
}

int main() {
    // Create linked list: 3 -> 2 -> 0 -> -4
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Create a cycle: tail connects to node at position 1 (node with value 2)
    createCycle(head, 1);

    Solution sol;
    bool result = sol.hasCycle(head);

    if(result)
        cout << "Cycle detected in the linked list.\n";
    else
        cout << "No cycle in the linked list.\n";

    return 0;
}
