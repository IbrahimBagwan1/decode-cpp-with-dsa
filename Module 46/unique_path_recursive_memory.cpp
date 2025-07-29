#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(int sr, int sc, int er, int ec, vector<vector<int>>& dp) {
        // Base Case: Reached destination
        if (sr == er && sc == ec) return 1;
        // Out of grid
        if (sr > er || sc > ec) return 0;
        // If already computed
        if (dp[sr][sc] != -1) return dp[sr][sc];

        // Move right and down
        return dp[sr][sc] = helper(sr, sc + 1, er, ec, dp) + helper(sr + 1, sc, er, ec, dp);
    }

    int uniquePaths(int m, int n) { 
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, m - 1, n - 1, dp);
    }
};

int main() {
    Solution obj;
    int m, n;
    cout<<"Enter No of Rows and Columns: ";
    cin >> m >> n;  // grid size
    cout << obj.uniquePaths(m, n) << endl;
    return 0;
}
