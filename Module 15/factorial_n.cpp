#include<iostream>
#include<algorithm>
using namespace std;

int factorial(int n){
  if(n==0) return 1;
  return n* factorial(n-1);
}

int main(){
  cout<<"Enter the Factorial You want any but not very big number like 3 digits: ";
  int n;
  cin>>n;
  cout<< factorial(n);
  return 0;
}