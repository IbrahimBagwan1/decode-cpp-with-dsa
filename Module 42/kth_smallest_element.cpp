#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        int t = n * m;

        // Min heap
        priority_queue<int, vector<int>, greater<int>> ans;

        // Traverse the matrix in a single loop
        for (int i = 0; i < t; i++) {
            int row = i / m;   // Calculate row index
            int col = i % m;   // Calculate column index
            ans.push(matrix[row][col]);
        }

        // Pop k-1 smallest elements
        for (int i = 0; i < k - 1; i++) {
            ans.pop();
        }

        // kth smallest element will be on top
        int result = ans.top();
        return result;
    }
};

// Driver Code Example
int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k = 8;

    Solution sol;
    cout << sol.kthSmallest(matrix, k) << endl; // Output -> 13
    return 0;
}
