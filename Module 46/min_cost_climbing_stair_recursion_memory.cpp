#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& cost, int idx, vector<int>& dp) {
        if (idx == 0 || idx == 1) 
            return dp[idx] = cost[idx];
        if (dp[idx] != -1) 
            return dp[idx];
        return dp[idx] = cost[idx] + min(helper(cost, idx - 1, dp), helper(cost, idx - 2, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);

        if (n >= 1) 
            dp[0] = cost[0];
        helper(cost, n - 1, dp);

        return min(dp[n - 1], dp[n - 2]);
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n; // number of steps
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    cout << obj.minCostClimbingStairs(cost) << endl;
    return 0;
}
