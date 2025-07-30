#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // Sort the people by weight
        sort(people.begin(), people.end());

        int i = 0;                  // lightest person index
        int j = people.size() - 1;  // heaviest person index
        int count = 0;              // number of boats

        while (i <= j) {
            // If lightest + heaviest can share a boat
            if (people[i] + people[j] <= limit) {
                i++;
                j--;
            } 
            // Otherwise, put the heaviest person alone
            else {
                j--;
            }
            count++; // one boat used
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> people1 = {5, 1, 4, 2};
    int limit1 = 6;
    cout << "Minimum boats needed: " 
         << sol.numRescueBoats(people1, limit1) << endl;  // Output: 2

    // Example 2
    vector<int> people2 = {3, 2, 2, 1};
    int limit2 = 3;
    cout << "Minimum boats needed: " 
         << sol.numRescueBoats(people2, limit2) << endl;  // Output: 3

    return 0;
}
