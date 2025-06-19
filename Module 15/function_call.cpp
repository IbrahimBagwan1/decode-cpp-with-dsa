#include<iostream>
#include<algorithm>
using namespace std;

void greet(int n){
  if(n==0) return ;
  cout<<"Assalumu Alaikum !!!"<<endl;
  greet(n-1);
  return ;
}

int main(){
  cout<<"Enter the Number of Times to Greet: ";
  int n;
  cin>>n;
  greet(n);
  return 0;
}