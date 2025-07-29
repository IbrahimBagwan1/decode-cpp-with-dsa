#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for (int i = 2; i < n; i++) {
            cost[i] += min(cost[i - 1], cost[i - 2]);
        }
        return min(cost[n - 1], cost[n - 2]);
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;  // number of steps
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    cout << obj.minCostClimbingStairs(cost) << endl;
    return 0;
}
