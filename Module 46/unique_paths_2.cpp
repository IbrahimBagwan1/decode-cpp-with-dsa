#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        // First row
        int num = 1;
        for (int j = 0; j < n; j++) {
            if (arr[0][j] == 1) num = 0;
            dp[0][j] = num;
        }

        // First column
        num = 1;
        for (int i = 0; i < m; i++) {
            if (arr[i][0] == 1) num = 0;
            dp[i][0] = num;  // <-- fixed (was dp[0][i])
        }

        // Fill rest of grid
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (arr[i][j] == 1) {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }

        return dp[m - 1][n - 1];
    }
};

int main() {
    Solution obj;
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << obj.uniquePathsWithObstacles(arr) << endl;
    return 0;
}
