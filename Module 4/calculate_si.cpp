#include<iostream>
using namespace std;

int main(){
  float p,r,t,res;  
  cout<< endl<<"Enter the Principle amount: ";
  cin>> p;
  cout<< endl<<"Enter the Rate amount: ";
  cin>> r;
  cout<< endl<<"Enter the Time : ";
  cin>> t;

  res=(p*r*t)/100;
  cout << res;
  return 0;
}
