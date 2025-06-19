#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void gcd1(int a, int b){
  for (int i = min(a,b) ; i>=2 ; i--){
    if(a%i==0 && b%i==0){
      cout<<i<<" ";
      break;
    }
  }
}

int main(){
  int a=24;
  int b=60;
  gcd1(a,b);
  return 0;
}