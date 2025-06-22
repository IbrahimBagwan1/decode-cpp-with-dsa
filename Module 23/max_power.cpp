#include<iostream>
#include<algorithm>
using namespace std;

int max_power(int n){
  int temp;
  while(n!=0){
    temp = n;
    n = n & (n-1);
  }
  return temp;
}

int main(){
  int n=100;
  cout<<"The Max Power of "<<n<<" is: "<<max_power(n);
  return 0;
}