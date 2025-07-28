#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int n = matrix.size();
    int m = matrix[0].size();
    int t = n * m;

    priority_queue<int> ans;
    int index1 = 0; // row index
    int index2 = 0; // col index

    for (int i = 0; i < t; i++) {
        ans.push(matrix[index1][index2]);

        // move to next column
        index2++;

        // if end of column, move to next row
        if (index2 == m) {
            index1++;
            index2 = 0;
        }
    }

    while (!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
}
