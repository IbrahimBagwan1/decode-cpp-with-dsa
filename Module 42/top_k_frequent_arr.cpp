#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        
        // Count frequency of each element
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        // Min-heap (frequency, element)
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for(auto x : m){
            int first = x.first;
            int second = x.second;
            pi p = {second, first};
            pq.push(p);
            if(pq.size() > k) pq.pop();
        }

        // Extract elements from heap
        while(!pq.empty()){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }

        return ans;
    }
};

// ---------------- Example Usage ----------------
int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    Solution sol;
    vector<int> result = sol.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
