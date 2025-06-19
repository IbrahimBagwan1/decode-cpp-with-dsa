// Euclid Division Algorithm
#include<iostream>
#include<algorithm>
using namespace std;

void gcd(int a, int b){
  if(a==0) {
    cout<<b;
    return ;
  }
  gcd(b%a, a);
}


int main(){
  int a=27; 
  int b=45;
  gcd(a,b);
  return 0;
}