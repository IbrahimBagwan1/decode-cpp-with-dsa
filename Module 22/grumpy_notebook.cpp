#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int loss=0,idx=0;
        int n=customers.size();
        // first window loss
        for(int i=0; i<minutes; i++){
            if(grumpy[i]==1){
                loss+=customers[i];
            }
        }

        // rest window loss
        int i=1, j=minutes;
        int maxloss=loss;
        while(j<n){
            if(grumpy[i-1]==1){
                loss = loss - (grumpy[i-1] * customers[i-1]) ;
            }
            if(grumpy[j]==1){
                loss = loss  + (grumpy[j]*customers[j]);

            }
            if(maxloss<loss){
                maxloss=loss;
                idx=i;
            }
            i++;
            j++;
        }

        // updating the grumpy, where is max loss.
        for(int i=idx; i<minutes+idx; i++){
            grumpy[i]=0;
        }
        
        // final profit.
        int profit=0;
        for(int i=0; i<n; i++){
            if(grumpy[i]==0){
                profit += customers[i]; 
            }
        }

        return profit;
    }

};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> customers1 = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy1    = {0, 1, 0, 1, 0, 1, 0, 1};
    int minutes1 = 3;
    int result1 = sol.maxSatisfied(customers1, grumpy1, minutes1);
    cout << "Test Case 1 - Max Satisfied Customers: " << result1 << endl;

    // Test Case 2
    vector<int> customers2 = {4, 10, 10};
    vector<int> grumpy2    = {1, 1, 0};
    int minutes2 = 2;
    int result2 = sol.maxSatisfied(customers2, grumpy2, minutes2);
    cout << "Test Case 2 - Max Satisfied Customers: " << result2 << endl;

    return 0;
}