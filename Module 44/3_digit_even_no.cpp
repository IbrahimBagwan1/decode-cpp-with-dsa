#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int> freq;
        vector<int> ans;

        // frequency of given digits
        for (int d : digits) {
            freq[d]++;
        }

        // iterate through all 3-digit even numbers
        for (int i = 100; i <= 998; i += 2) {
            int x = i;
            int a = x % 10; x /= 10;
            int b = x % 10; x /= 10;
            int c = x;

            // frequency for this number
            unordered_map<int,int> temp = freq;
            if (temp[a] > 0) {
                temp[a]--;
                if (temp[b] > 0) {
                    temp[b]--;
                    if (temp[c] > 0) {
                        ans.push_back(i);
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    vector<int> digits = {2, 1, 3, 0};
    Solution sol;
    vector<int> result = sol.findEvenNumbers(digits);

    for (int num : result) cout << num << " ";
    // Output: 102 120 130 132 210 230 302 310 312 320
    return 0;
}
