#include<iostream>
using namespace std;

int main(){
  int num = 20;
  int lo=1; 
  int hi=num;
  int mid;
  bool flag=false;
  while(lo<=hi){
    mid = lo + (hi-lo)/2;
    if(mid*mid==num){
      cout<<mid;
      flag=true;
      break;
    } 
    else if(mid*mid > num) hi = mid -1;
    else lo = mid+1;
  }

  if(!flag) cout<<hi;

  return 0;
}