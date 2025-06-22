#include<iostream>
using namespace std;

int main(){
  // checking if a number is prime or not
  int num = 4;
  for(int i=2; i<num; i++){
    if(num % i ==0) {
      cout<<"The Number is Not Prime !!";
      break;
    }
  }

  return 0;
}