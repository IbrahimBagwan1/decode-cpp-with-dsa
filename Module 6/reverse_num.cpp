#include<iostream>
using namespace std;

int main(){
  cout<< "This is Reversing of the number: ";
  cout<< "Enter the number: ";
  int x;
  cin>> x;
  int r=0,lastdig;
  bool isnegative;

  if(x<0){
    x=-x;
    isnegative =true;
  }

  while(x!=0){ // 210 % 10 = 0
    lastdig=x%10;
    r=r*10 + lastdig;
    x/=10;
  }


  if(isnegative){
    r=-r;
  }

  cout<<r;
  return 0;
}