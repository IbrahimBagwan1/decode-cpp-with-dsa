#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function: sort by units per box (descending)
bool cmp(vector<int> &a, vector<int> &b) {
    return a[1] > b[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Sort by units per box in descending order
        sort(boxTypes.begin(), boxTypes.end(), cmp);

        int profit = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            if (boxTypes[i][0] <= truckSize) {
                // Take all boxes of this type
                profit += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            } else {
                // Take only the required boxes to fill truck
                profit += truckSize * boxTypes[i][1];
                truckSize = 0;
            }
            if (truckSize == 0) break;
        }
        return profit;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> boxTypes = {{1, 3}, {2, 2}, {3, 1}};
    int truckSize = 4;
    cout << sol.maximumUnits(boxTypes, truckSize) << endl; // Output: 8
    return 0;
}
