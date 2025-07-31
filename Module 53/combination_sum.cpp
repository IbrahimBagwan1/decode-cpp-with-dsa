#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void sum_of_subsets(vector<int>& candidates, int target, vector<int>& temp, int idx) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (idx == candidates.size() || target < 0) return;

        for (int i = idx; i < candidates.size(); i++) {
            if (candidates[i] > target) break;
            temp.push_back(candidates[i]);
            sum_of_subsets(candidates, target - candidates[i], temp, i + 1); // i+1 to not reuse
            temp.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        sum_of_subsets(candidates, target, temp, 0);
        return ans;
    }
};

// Test driver
int main() {
    Solution sol;

    // Example input
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> result = sol.combinationSum2(candidates, target);

    // Output the result
    cout << "Combinations summing to " << target << ":\n";
    for (const auto& comb : result) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
