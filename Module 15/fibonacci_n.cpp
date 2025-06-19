#include<iostream>
#include<algorithm>
using namespace std;

int fibo(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  return fibo(n-1)+fibo(n-2);
}


int main(){
  int n;
  cout<<"Enter the Number of the term you want to find the fibonacci: ";
  cin>>n;
  cout<<fibo(n);
  return 0;
}