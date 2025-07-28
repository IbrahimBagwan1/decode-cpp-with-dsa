#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;

        // Count frequency of each number
        for (int num : arr) {
            freqMap[num]++;
        }

        unordered_set<int> freqSet;

        // Check if any frequency is repeated
        for (auto &entry : freqMap) {
            int freq = entry.second;
            if (freqSet.find(freq) != freqSet.end()) {
                return false; // frequency already present
            }
            freqSet.insert(freq);
        }
        return true;
    }
};

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    Solution sol;
    cout << boolalpha << sol.uniqueOccurrences(arr) << endl;  
    // Output: true
    return 0;
}
