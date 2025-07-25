#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>  // for sort
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        // Step 1: Sort the deck in ascending order
        sort(deck.begin(), deck.end());

        // Step 2: Queue to store index positions
        queue<int> q;
        int n = deck.size();
        vector<int> ans(n);

        // Fill queue with indices
        for (int i = 0; i < n; i++) {
            q.push(i);
        }

        // Step 3: Assign cards to positions as per given logic
        for (int i = 0; i < n; i++) {
            int idx = q.front();
            q.pop();
            ans[idx] = deck[i];

            // Move next index to back of queue (simulate reveal process)
            if (!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> deck = {17, 13, 11, 2, 3, 5, 7};

    vector<int> result = sol.deckRevealedIncreasing(deck);

    cout << "Deck order to reveal increasing: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
