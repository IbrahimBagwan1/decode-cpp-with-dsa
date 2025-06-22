#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int flip_checker(int a, int b){
  return __builtin_popcount(a^b); // ^ -> Exor operation.
}

int main(){
  int b1 =8;
  int b2 =16;
  
  int flip = flip_checker(b1,b2);
  cout<<"THE Min number of Elements to flip are: "<< flip;

  return 0;
}