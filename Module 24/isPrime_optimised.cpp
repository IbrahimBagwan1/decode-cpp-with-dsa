#include<iostream>
#include<cmath>
using namespace std;
// this is the optimised code to find the prime number, now the time complexity is O(root(n)).
bool isPrime(int n){
  for(int i=2; i<= sqrt(n); i++){
    if(n % i==0) return false;
  }
  return true;
}

int main(){
  int num = 31;
  if(isPrime(num)) cout<<"The num is Prime: "<<num;
  else cout<<"The Num is Not Prime !!!";
  return 0;
}