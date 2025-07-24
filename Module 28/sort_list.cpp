#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ================= Solution Class ==================
class Solution {
public:
    // Merge two sorted linked lists
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (a && b) {
            if (a->val <= b->val) {
                temp->next = a;
                a = a->next;
            } else {
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }
        // attach remaining nodes
        temp->next = (a) ? a : b;
        return dummy->next;
    }

    // Sort linked list using merge sort
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        // Split into two halves
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* mid = slow->next;
        slow->next = nullptr;

        // Recursively sort
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        // Merge sorted halves
        return merge(left, right);
    }
};

// ================= Helper Functions ==================

// Create linked list from vector
ListNode* createLinkedList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Print linked list
void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ================= Main Function ==================
int main() {
    vector<int> values = {4, 2, 1, 3, 5};
    ListNode* head = createLinkedList(values);

    cout << "Original List: ";
    printLinkedList(head);

    Solution sol;
    ListNode* sortedHead = sol.sortList(head);

    cout << "Sorted List: ";
    printLinkedList(sortedHead);

    return 0;
}
