#include<iostream>
#include<algorithm>
using namespace std;

// removing 1 setbit at each iteration, n & n-1, has last flipped bits, by this it is possible.
int count_set_bit(int n){
  int count=0;
  while(n>0){
    count++;
    n = n & (n-1);
  }
  return count;
}

int main(){
  int n=64;
  cout<<"The Count of Set Bit "<<n<<" is: "<<count_set_bit(n);
  return 0;
}