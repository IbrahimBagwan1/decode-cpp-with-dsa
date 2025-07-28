#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s;
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            string str = words[i];
            reverse(str.begin(), str.end());

            // if reverse already exists, then it's a pair
            if (s.find(str) != s.end()) {
                count++;
            } else {
                s.insert(words[i]); // store original word
            }
        }
        return count;
    }
};

int main() {
    vector<string> words = {"ab", "ba", "cd", "dc", "aa"};
    Solution sol;
    cout << sol.maximumNumberOfStringPairs(words) << endl;  
    // Output: 2 (pairs: ("ab","ba"), ("cd","dc"))
    return 0;
}
