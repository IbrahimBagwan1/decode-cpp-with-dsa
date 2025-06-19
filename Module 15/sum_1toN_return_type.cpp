// return type. 

#include<iostream>
#include<algorithm>
using namespace std;

int sum1toN(int n){
  if(n==1){
    return 1;
  }
  return n + sum1toN(n-1); ;
}

int main(){
  int n;
  cout<<"Enter the Number to Get Sum untill it: ";
  cin>>n;
  cout<<sum1toN(n);
  return 0;
}