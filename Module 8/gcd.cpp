#include<iostream>
using namespace std;

int gcd_num(int a, int b){
  int hcf=1;
  for(int i=min(a,b); i>=1; i--){
    if(a%i==0 && b%i==0){
      hcf=i;
      break;
    }
  }
  return hcf;
}

int main(){
  int a=60;
  int b=48;
  int c= gcd_num(a,b);
  cout<<"The Greatest Common Divisor is: "<<c;
  return 0;
}