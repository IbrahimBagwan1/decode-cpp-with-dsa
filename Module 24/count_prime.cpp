#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> seive(n, true); // size n because we want primes < n
        seive[0] = seive[1] = false; 
 
        for(int i = 2; i * i < n; i=i+1) {
            if(seive[i]) {
                for(int j = i * i; j < n; j += i) {
                    seive[j] = false;
                }
            }
        }

        int count = 0;
        for(int i = 2; i < n; i++) {
            if(seive[i]) count++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sol.countPrimes(n);
    cout << "Number of Prime Numbers less than " << n << " is: " << result << endl;

    return 0;
}
