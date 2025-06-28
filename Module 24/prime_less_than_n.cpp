#include <iostream>
#include <cmath>
using namespace std;

// this is not optimised code this takes -> O(n.root(n))
// instead use Seive of Eratosthenesis.

class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int n){
        if(n == 1) return false;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    // Function to count number of primes less than n
    int countPrimes(int n) {
        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime(i)) count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int primeCount = sol.countPrimes(n);
    cout << "Number of prime numbers less than " << n << " is: " << primeCount << endl;

    return 0;
}
