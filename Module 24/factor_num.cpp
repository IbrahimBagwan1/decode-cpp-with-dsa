#include<iostream>
#include<cmath>
using namespace std;

void factor(int n){
  for(int i=1; i<sqrt(n); i++){
    if(n % i==0){
      cout<<i<<" ";
      // cout<<n/i<<" ";
    }
  }
  // two loops to print this in sorted order...
  for(int i=sqrt(n); i>=1; i--){
    if(n % i==0){
      cout<<n/i<<" ";
    }
  }
}

int main(){
  int num = 49;
  factor(num);
  return 0;
}