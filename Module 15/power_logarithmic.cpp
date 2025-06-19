#include<iostream>
#include<algorithm>
using namespace std;

int power(int a, int b){
  if(b==0) return 1;
  int ans=power(a , b/2);
  if(b%2==0){
    return ans * ans;
  }
  else{
    return ans * ans * a;
  }
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<power(a,b);
  return 0;
}