#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        // Step 1: Create a copy list with next pointers only
        Node* temp = head;
        Node* dummy = new Node(0);
        Node* Ctemp = dummy;
        while (temp) {
            Node* a = new Node(temp->val);
            Ctemp->next = a;
            Ctemp = Ctemp->next;
            temp = temp->next;
        }
        Node* b = dummy->next;

        // Step 2: Mapping original nodes to copied nodes
        unordered_map<Node*, Node*> m;
        Node* a = head;
        while (a) {
            m[a] = b;
            a = a->next;
            b = b->next;
        }

        // Step 3: Assign random pointers for copied list
        for (auto x : m) {
            Node* a_node = x.first;
            Node* b_node = x.second;
            if (a_node->random != NULL) {
                Node* random = m[a_node->random];
                b_node->random = random;
            }
        }

        return dummy->next;
    }
};

// ----------- Example usage for testing -----------
int main() {
    // Create test linked list: 7->13->11->10->1
    Node* head = new Node(7);
    Node* node2 = new Node(13);
    Node* node3 = new Node(11);
    Node* node4 = new Node(10);
    Node* node5 = new Node(1);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Assign random pointers
    head->random = NULL;
    node2->random = head;
    node3->random = node5;
    node4->random = node3;
    node5->random = head;

    // Copy list
    Solution sol;
    Node* copiedHead = sol.copyRandomList(head);

    // Print copied list to verify
    Node* temp = copiedHead;
    while (temp) {
        cout << "Val: " << temp->val 
             << ", Random: " << (temp->random ? to_string(temp->random->val) : "NULL") 
             << endl;
        temp = temp->next;
    }

    return 0;
}
