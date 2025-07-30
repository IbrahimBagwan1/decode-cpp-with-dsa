#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

// Comparator function for characters (not directly used in priority_queue)
char cmp(char a, char b) {
    return a > b;
}

class Solution {
public:
    // Swap function for characters
    void swap(char &a, char &b) {
        char ch = a;
        a = b;
        b = ch;
    }

    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp;

        // Count frequencies
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // Max-heap based on characters (lexicographically largest first)
        priority_queue<pair<char, int>> pq;
        for (auto ele : mp) {
            pq.push(ele);
        }

        string ans = "";

        while (!pq.empty()) {
            auto largest = pq.top();
            pq.pop();

            int len = min(largest.second, repeatLimit);
            for (int i = 0; i < len; i++) {
                ans += largest.first;
            }

            // If some characters remain for the same letter
            if (largest.second - len > 0) {
                if (!pq.empty()) {
                    auto secondlargest = pq.top();
                    pq.pop();
                    ans += secondlargest.first;

                    if (secondlargest.second - 1 > 0) {
                        pq.push({secondlargest.first, secondlargest.second - 1});
                    }

                    pq.push({largest.first, largest.second - len});
                } else {
                    // No smaller character to break the sequence
                    return ans;
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string s = "cczazcc";
    int repeatLimit = 3;
    cout << sol.repeatLimitedString(s, repeatLimit) << endl;  // Example output: "zzcccac"

    return 0;
}