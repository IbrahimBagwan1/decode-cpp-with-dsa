// parametric type

#include<iostream>
#include<algorithm>
using namespace std;

void sum1toN(int sum,int n){
  if(n==0){
    cout<<sum<<endl;
    return;
  }
  sum1toN(sum+n,n-1);
}

int main(){
  int n;
  cout<<"Enter the Number to Get Sum untill it: ";
  cin>>n;
  sum1toN(0,n);
  return 0;
}