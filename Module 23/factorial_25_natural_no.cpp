#include <iostream>
#define MOD 1000000007
#include<vector>
using namespace std;

int main() {
  int n=25;
  vector<long long> fact (n+1,1);
  for (int i = 2; i <= n; ++i) {
    fact[i] = (i % MOD * fact[i-1] % MOD) % MOD; 
    cout << "Factorial of " << i << " = " << fact[i] << endl;
  }
  return 0;
}