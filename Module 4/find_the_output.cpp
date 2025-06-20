#include<iostream>
using namespace std;

int main(){
  float a=5, b=2;
  // int c = a % b; // error modulus operator can't perform between floats
  int c=a/b;
  cout << c;
  return 0;
}