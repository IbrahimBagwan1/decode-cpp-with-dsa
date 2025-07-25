// Time Limit Exceeded version: only for reference.

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr;
        int i = 0;
        int j = k - 1;
        int count = 1;
        int maximum = -9999;
        while (count <= (n - k + 1)) {
            for (int l = i; l <= j; l++) {
                if (maximum < nums.at(l)) {
                    maximum = nums.at(l);
                }
            }
            arr.push_back(maximum);
            maximum = -9999;
            i++;
            j++;
            count++;
        }
        return arr;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = sol.maxSlidingWindow(nums, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
