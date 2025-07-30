#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        int result = 0;

        for (int i = 0; i < answers.size(); i++) {
            if (!mp[answers[i] + 1]) {
                // Start a new color group
                result += answers[i] + 1;
                if (answers[i] == 0) continue; // single rabbit case
                mp[answers[i] + 1] = 1;
            } else {
                mp[answers[i] + 1]++;
                int key = answers[i] + 1;
                int value = mp[key];
                if (key == value) {
                    // Found all rabbits for this group, reset
                    mp.erase(key);
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> answers = {1, 1, 2};
    cout << "Minimum rabbits: " << sol.numRabbits(answers) << endl; // Output: 5

    vector<int> answers2 = {0, 0, 1, 1, 1};
    cout << "Minimum rabbits: " << sol.numRabbits(answers2) << endl; // Output: 6

    return 0;
}
