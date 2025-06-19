#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the Nubmer: ";
  int num;
  cin>> num;

  if(num %5==0 && num %3==0){
    cout<< "The Number is Divisible by both !!";
  }else{
    cout<< "The Number is Not Divisible by both !!";
  }

  if(num %5==0 || num %3==0){
    cout<< "The Number is Divisible by 5 or 3 !!";
  }
  else if(num %5==0 && num %3==0){
    cout<< "The Number is Divisible by both !!";
  }
  else{
    cout<< "The Number is Not Divisible by both !!";
  }
  return 0;
}