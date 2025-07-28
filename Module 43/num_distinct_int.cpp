#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse an integer
    int reverse(int n) {
        int x2 = 0;  
        while (n > 0) {
            int x = n % 10;        // take last digit
            x2 = x2 * 10 + x;      // append digit to reversed number
            n /= 10;               // remove last digit
        }
        return x2;
    }

    // Function to count distinct integers after adding reverse of each number
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);             // original number
            s.insert(reverse(nums[i]));    // reversed number
        }
        return s.size();
    }
};

// Driver Code
int main() {
    vector<int> nums = {1, 13, 10, 12, 31};
    Solution sol;
    cout << sol.countDistinctIntegers(nums) << endl; 
    // Output: 6  (numbers: 1, 13, 10, 12, 31, 21)
    return 0;
}
