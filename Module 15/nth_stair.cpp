#include<iostream>
#include<algorithm>
using namespace std;

int stair(int n){
  if(n==1) return 1;
  if(n==2) return 2;
  return stair(n-1) + stair(n-2);
}

// int stair(int n){
//   if(n==1) return 1;
//   if(n==2) return 2;
//   if(n==3) return 4;
//   return stair(n-1) + stair(n-2) + stair(n-3);
// }

int main(){
  cout<<stair(4);
  return 0;
}