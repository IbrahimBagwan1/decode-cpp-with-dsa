#include<iostream>
#include<algorithm>
using namespace std;

int count_set_bit(int n){
  return __builtin_popcount(n);
}

int main(){
  int n=64;
  cout<<"The Count of Set Bit "<<n<<" is: "<<count_set_bit(n);


  return 0;
}
