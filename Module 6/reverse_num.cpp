#include<iostream>
using namespace std;

int main(){
  cout<< "This is Reversing of the number: ";
  cout<< "Enter the number: ";
  int x;
  cin>> x;
  int r=0,lastdig;
  while(x!=0){ // 210
    r=r*10;
    lastdig=x%10;
    r+=lastdig;
    x/=10;
  }
  cout<<"The Reverse Number is: "<<r;
  return 0;
}