#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse digits of a number
    int reverse(int n) {
        int x = 0;
        while (n > 0) {
            int z = n % 10;
            n /= 10;
            x = x * 10 + z;
        }
        return x;
    }

    // Brute force approach to count nice pairs
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        const int MOD = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((nums[i] + reverse(nums[j])) == 
                    (reverse(nums[i]) + nums[j])) {
                    count = (count + 1) % MOD;
                }
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = {42, 11, 1, 97};
    Solution sol;
    cout << sol.countNicePairs(nums) << endl; 
    // Output: 2  (pairs: (0,1) and (2,3))
    return 0;
}
