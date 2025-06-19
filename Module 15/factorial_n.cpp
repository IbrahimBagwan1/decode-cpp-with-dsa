#include<iostream>
#include<algorithm>
using namespace std;

int factorial(int n){
  if(n==0) return 1;
  return n* factorial(n-1);
}

int main(){
  cout<<"Enter the Factorial You want: ";
  int n;
  cin>>n;
  cout<< factorial(n);
  return 0;
}