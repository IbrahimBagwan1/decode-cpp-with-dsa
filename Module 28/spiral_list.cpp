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

// Solution class with spiralMatrix
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m, vector<int>(n, -1));  // Fill with -1 initially
        ListNode* temp = head;

        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        while (minr <= maxr && minc <= maxc) {
            // left to right
            for (int j = minc; j <= maxc; j++) {
                if (!temp) return v;
                v[minr][j] = temp->val;
                temp = temp->next;
            }
            minr++;
            if (minr > maxr || minc > maxc) break;

            // top to bottom
            for (int i = minr; i <= maxr; i++) {
                if (!temp) return v;
                v[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;
            if (minr > maxr || minc > maxc) break;

            // right to left
            for (int j = maxc; j >= minc; j--) {
                if (!temp) return v;
                v[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;
            if (minr > maxr || minc > maxc) break;

            // bottom to top
            for (int i = maxr; i >= minr; i--) {
                if (!temp) return v;
                v[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
        }

        return v;
    }
};

// Helper to create linked list from vector
ListNode* createLinkedList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); i++) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

// Helper to print 2D matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val == -1)
                cout << " x ";
            else
                cout << val << " ";
        }
        cout << endl;
    }
}

// Main to test
int main() {
    // Test case
    vector<int> listValues = {3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0}; // example linked list values
    int m = 3, n = 5;

    ListNode* head = createLinkedList(listValues);

    Solution sol;
    vector<vector<int>> result = sol.spiralMatrix(m, n, head);

    cout << "Spiral Matrix:\n";
    printMatrix(result);

    return 0;
}