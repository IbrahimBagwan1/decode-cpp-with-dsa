#include<iostream>
#include<algorithm>
using namespace std; 

void pre_in_post(int n){
  if(n==0) return ;
  cout<<n<<" ";
  pre_in_post(n-1);
  cout<<n<<" ";
  pre_in_post(n-1);
  cout<<n<<" ";
}

int main(){
  int n;
  cout<<"Enter the Number: ";
  cin>>n;
  pre_in_post(n);
  return 0;
}