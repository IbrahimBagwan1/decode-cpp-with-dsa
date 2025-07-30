#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        // Min-heap (smallest element at top)
        priority_queue<int, vector<int>, greater<int>> pq;     
        int sum = 0;

        // Push all numbers into min-heap
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        // Perform k negations on smallest elements
        for (int i = 0; i < k; i++) {
            int x = pq.top();
            pq.pop();
            x = -x;
            pq.push(x);
        }

        // Sum all elements in heap
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {4, 2, 3};
    int k = 1;
    cout << sol.largestSumAfterKNegations(nums, k) << endl; // Output: 5
    return 0;
}
