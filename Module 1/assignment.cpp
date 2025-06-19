#include<iostream>
using namespace std;

int main(){
  const float pi=3.1415;
  float radius;
  cout<< "Enter The Radius of The Circle: ";
  cin>> radius;
  float circumference = pi*radius*radius;
  cout<< circumference;
  return 0;
}